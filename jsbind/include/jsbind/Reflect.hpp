#pragma once
#include "Any.hpp"
#include "Array.hpp"
#include "Function.hpp"
#include <emlite/emlite.hpp>

namespace jsbind {

class Error;

/// Wrapper for JavaScript Reflect object
///
/// Reflect provides static methods for JavaScript meta-programming operations,
/// offering programmatic access to object introspection and manipulation.
/// These methods correspond to the operations that can be intercepted by Proxy handlers.
class Reflect : public emlite::Val {
  public:
    /// Calls target function with specified this value and arguments
    /// @param target function to call
    /// @param thisArg value to use as 'this'
    /// @param argumentsList array of arguments to pass
    /// @returns result of function call
    static Result<Any, Error> apply(
        const Function &target, const Any &thisArg, const TypedArray<Any> &argumentsList
    );

    /// Constructs object from constructor function with arguments
    /// @param target constructor function
    /// @param args array of constructor arguments
    /// @param newTarget optional new target for construction
    /// @returns newly constructed object
    static Result<Any, Error> construct(
        const Function &target, const TypedArray<Any> &args, const Any &newTarget = Any()
    );

    /// Defines property on object with descriptor
    /// @param target object to define property on
    /// @param key property key to define
    /// @param attributes property descriptor object
    /// @returns true if property was defined successfully
    static Result<bool, Error> defineProperty(const Any &target, const Any &key, const Any &attributes);

    /// Deletes property from object
    /// @param target object to delete property from
    /// @param key property key to delete
    /// @returns true if property was deleted successfully
    static Result<bool, Error> deleteProperty(const Any &target, const Any &key);

    /// Gets property value from object
    /// @param target object to get property from
    /// @param key property key to get
    /// @param receiver optional receiver for getter calls
    /// @returns property value
    static Result<Any, Error> get(const Any &target, const Any &key, const Any &receiver = Any());

    /// Gets property descriptor for object property
    /// @param target object to inspect
    /// @param key property key to get descriptor for
    /// @returns property descriptor object or undefined
    static Result<Any, Error> getOwnPropertyDescriptor(const Any &target, const Any &key);

    /// Gets prototype of object
    /// @param target object to get prototype of
    /// @returns prototype object or null
    static Result<Any, Error> getPrototypeOf(const Any &target);

    /// Checks if object has property
    /// @param target object to check
    /// @param key property key to check for
    /// @returns true if object has the property
    static Result<bool, Error> has(const Any &target, const Any &key);

    /// Checks if object is extensible
    /// @param target object to check
    /// @returns true if object can have new properties added
    static Result<bool, Error> isExtensible(const Any &target);

    /// Gets array of object's own property keys
    /// @param target object to get keys from
    /// @returns array of property keys (strings and symbols)
    static Result<TypedArray<Any>, Error> ownKeys(const Any &target);

    /// Prevents new properties from being added to object
    /// @param target object to make non-extensible
    /// @returns true if operation succeeded
    static Result<bool, Error> preventExtensions(const Any &target);

    /// Sets property value on object
    /// @param target object to set property on
    /// @param key property key to set
    /// @param value value to set
    /// @param receiver optional receiver for setter calls
    /// @returns true if property was set successfully
    static Result<bool, Error> set(
        const Any &target, const Any &key, const Any &value, const Any &receiver = Any()
    );

    /// Sets prototype of object
    /// @param target object to set prototype of
    /// @param proto new prototype object or null
    /// @returns true if prototype was set successfully
    static Result<bool, Error> setPrototypeOf(const Any &target, const Any &proto);
};
} // namespace jsbind
