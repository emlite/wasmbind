export const enums = new Map();
// Names of simple "callback" typedefs (function-like), e.g. `callback Foo = void(...);`
export const callbacks = new Set();
// Full records of `callback interface` definitions (object-with-method), e.g. EventListener
export const callbackInterfaces = new Map();
export const typedefs = new Map();
export const emittedDicts = new Set();
export const dictOwner = new Map();
