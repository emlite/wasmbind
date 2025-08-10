import { parseSpecs, processInterfaces } from "./parsers/spec-parser.js";
import { DependencyResolver } from "./parsers/dependency-resolver.js";
import { generateEnums } from "./generators/enum-generator.js";
import { generateNamespace } from "./generators/namespace-generator.js";
import { generateInterface } from "./generators/interface-generator.js";
import { generateDictionary } from "./generators/dictionary-generator.js";
import { enums, dictOwner } from "./globals.js";
import { setDictionaryRegistry } from "./utils.js";

export function generate(specAst) {
  // Parse the WebIDL specifications
  const { interfaces, mixins, includeRel, dicts, namespaces } = parseSpecs(specAst);
  
  // Register dictionaries for the cpp() function
  setDictionaryRegistry(dicts);
  
  // Process interfaces (merge partials, includes, etc.)
  const processedInterfaces = processInterfaces(interfaces, mixins, includeRel);
  
  // Create dependency resolver
  const resolver = new DependencyResolver(processedInterfaces, dicts, enums);
  resolver.prepare();

  // Generate enums first (they're referenced by other types)
  generateEnums();

  // Pre-populate dictOwner for all standalone dictionaries
  for (const dictName of resolver.dictOrdered) {
    dictOwner.set(dictName, `${dictName}.hpp`);
  }

  // Generate standalone dictionaries in dependency order
  for (const dictName of resolver.dictOrdered) {
    const dict = dicts.get(dictName);
    if (dict) {
      const dependencies = resolver.resolveDictionaryDependencies(dictName, dict);
      generateDictionary(dictName, dict, dependencies);
    }
  }

  // Generate interfaces with proper dependency resolution
  for (const [interfaceName, interfaceRec] of processedInterfaces) {
    if (!interfaceRec.base && interfaceRec.partials.length === 0) {
      // Skip interfaces that are just partial definitions
      continue;
    }

    const dependencies = resolver.resolveInterfaceDependencies(
      interfaceName, 
      interfaceRec.members
    );
    
    generateInterface(interfaceName, interfaceRec, dependencies);
  }

  // Generate namespaces
  for (const ns of namespaces) {
    const dependencies = resolver.resolveNamespaceDependencies(ns);
    generateNamespace(ns, dependencies);
  }
}