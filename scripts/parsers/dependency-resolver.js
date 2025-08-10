import { getAllTypeRefs } from "./type-analyzer.js";
import { dictOwner } from "../globals.js";

export class DependencyResolver {
  constructor(interfaces, dicts, enums) {
    this.interfaces = interfaces;
    this.dicts = dicts;
    this.enums = enums;
    this.dictDepGraph = new Map();
    this.dictOrdered = [];
  }

  buildDictionaryDependencyGraph() {
    // Build dependency graph for dictionaries
    for (const [dictName, dict] of this.dicts) {
      const deps = new Set();
      const refs = getAllTypeRefs(dict.members);

      refs.forEach((ref) => {
        if (this.dicts.has(ref) && ref !== dictName) {
          deps.add(ref);
        }
      });

      this.dictDepGraph.set(dictName, deps);
    }
  }

  topologicalSortDictionaries() {
    const visited = new Set();
    const temp = new Set();
    const result = [];

    const visit = (dict) => {
      if (temp.has(dict)) {
        console.warn(
          `Circular dependency detected involving dictionary: ${dict}`
        );
        return;
      }
      if (visited.has(dict)) return;

      temp.add(dict);
      const deps = this.dictDepGraph.get(dict) || new Set();

      for (const dep of deps) {
        if (this.dicts.has(dep)) {
          visit(dep);
        }
      }

      temp.delete(dict);
      visited.add(dict);
      result.push(dict);
    };

    for (const dictName of this.dicts.keys()) {
      if (!visited.has(dictName)) {
        visit(dictName);
      }
    }

    this.dictOrdered = result;
    return result;
  }

  resolveInterfaceDependencies(interfaceName, members) {
    const fwd = new Set();
    const srcInc = new Set();
    const hdrInc = new Set();
    const localEnums = new Set();
    const localDicts = [];

    const parent =
      this.interfaces.get(interfaceName)?.base?.inheritance || null;
    if (parent) {
      hdrInc.add(`"${parent}.hpp"`);
    }

    const refs = getAllTypeRefs(members);

    refs.forEach((ref) => {
      // Handle dictionary references
      if (this.dicts.has(ref)) {
        // Always include dictionary headers, assuming they are standalone files
        hdrInc.add(`"${ref}.hpp"`);
        srcInc.add(`${ref}.hpp`);
        return;
      }

      // Handle enum references
      if (this.enums.has(ref)) {
        localEnums.add(this.enums.get(ref));
        return;
      }

      // Handle interface references
      if (this.interfaces.has(ref) && ref !== parent) {
        fwd.add(ref);
        srcInc.add(`${ref}.hpp`);
      }
    });

    return {
      fwd,
      srcInc,
      hdrInc,
      localEnums,
      localDicts,
    };
  }

  addLocalDictDependencies(dictName, localDicts, processedRefs) {
    const dict = this.dicts.get(dictName);
    if (!dict) return;

    // Add inheritance dependency first
    if (dict.inheritance && this.dicts.has(dict.inheritance)) {
      if (dictOwner.has(dict.inheritance)) {
        // Parent dict is owned by another file - need to include it
        // This will be handled in the main dependency resolution
      } else {
        // Parent dict should be embedded locally
        const parentDict = this.dicts.get(dict.inheritance);
        if (
          parentDict &&
          !localDicts.some((d) => d.name === dict.inheritance)
        ) {
          localDicts.push(parentDict);
          processedRefs.add(dict.inheritance);
          // Recursively add parent dependencies
          this.addLocalDictDependencies(
            dict.inheritance,
            localDicts,
            processedRefs
          );
        }
      }
    }

    // Add member type dependencies
    const refs = getAllTypeRefs(dict.members);
    refs.forEach((ref) => {
      if (
        this.dicts.has(ref) &&
        !processedRefs.has(ref) &&
        !dictOwner.has(ref)
      ) {
        const depDict = this.dicts.get(ref);
        if (depDict && !localDicts.some((d) => d.name === ref)) {
          localDicts.push(depDict);
          processedRefs.add(ref);
          // Recursively add dependencies
          this.addLocalDictDependencies(ref, localDicts, processedRefs);
        }
      }
    });
  }

  assignDictionaryOwnership(interfaceName, localDicts) {
    // Assign ownership of local dictionaries to this interface
    localDicts.forEach((dict) => {
      if (!dictOwner.has(dict.name)) {
        dictOwner.set(dict.name, `${interfaceName}.hpp`);
      }
    });
  }

  resolveDictionaryDependencies(dictName, dict) {
    const fwd = new Set();
    const srcInc = new Set();
    const hdrInc = new Set();

    const refs = getAllTypeRefs(dict.members);

    refs.forEach((ref) => {
      // Handle dictionary references
      if (this.dicts.has(ref) && ref !== dictName) {
        hdrInc.add(`"${ref}.hpp"`);
        srcInc.add(`${ref}.hpp`);
        return;
      }
      // Debugging: Log if a dictionary reference is not handled
      if (this.dicts.has(ref) && ref === dictName) {
        // This is the dictionary itself, not a reference to another dictionary
      } else if (
        !this.dicts.has(ref) &&
        !this.interfaces.has(ref) &&
        !this.enums.has(ref)
      ) {
        // If it's not a known dictionary, interface, or enum, log it
        // This might indicate a missing type or a type that should be handled differently
        // For now, we'll treat it as an interface for forward declaration
        fwd.add(ref);
        srcInc.add(`${ref}.hpp`);
      }

      // Handle interface references
      if (this.interfaces.has(ref)) {
        fwd.add(ref);
        srcInc.add(`${ref}.hpp`);
      }
    });

    return {
      fwd,
      srcInc,
      hdrInc,
      localEnums: new Set(),
      localDicts: [],
    };
  }

  prepare() {
    this.buildDictionaryDependencyGraph();
    this.topologicalSortDictionaries();
  }

  resolveNamespaceDependencies(namespace) {
    const fwd = new Set();
    const srcInc = new Set();
    const hdrInc = new Set();

    const refs = getAllTypeRefs(namespace.members);

    refs.forEach((ref) => {
      // Handle dictionary references
      if (this.dicts.has(ref)) {
        fwd.add(ref);
        srcInc.add(`${ref}.hpp`);
        return;
      }

      // Handle interface references
      if (this.interfaces.has(ref)) {
        fwd.add(ref);
        srcInc.add(`${ref}.hpp`);
      }
    });

    return {
      fwd,
      srcInc,
      hdrInc,
      localEnums: new Set(),
      localDicts: [],
    };
  }
}
