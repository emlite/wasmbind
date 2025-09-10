#pragma once

#include "Any.hpp"
#include "Error.hpp"
#include <emlite/emlite.hpp>

namespace jsbind {

/// Generic wrapper for JavaScript Record/Object types.
///
/// Record provides a type-safe interface for JavaScript objects with
/// specific key and value types. Methods forward to the underlying
/// `emlite::Val` operations; this wrapper only constrains key/value types
/// at the C++ level.
template <typename K, typename V>
class Record : public emlite::Val {
    explicit Record(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}

  public:
    /// Creates Record from a raw handle
    /// @param h raw JavaScript handle
    /// @returns Record wrapper object
    static Record take_ownership(Handle h) noexcept { return Record(h); }

    /// Creates Record from an emlite::Val
    /// @param val emlite::Val to wrap
    explicit Record(const emlite::Val &val) : emlite::Val(val) {}

    /// Creates a copy of this Record
    /// @returns cloned Record
    [[nodiscard]] Record clone() const noexcept { return *this; }

    /// Creates empty Record object
    Record() noexcept : emlite::Val(emlite::Val::object()) {}

    /// Gets the Object constructor function
    /// @returns emlite::Val representing the Object constructor
    static emlite::Val instance() noexcept { return emlite::Val::global("Object"); }

    /// Checks if object has own (non-inherited) property
    /// @param prop property name to check
    /// @returns true if object has own property
    bool hasOwnProperty(const char *prop) noexcept { return has_own_property(prop); }

    /// Sets property value (forwards to base `Val::set`).
    /// @param prop property key
    /// @param val property value
    void set(const K &prop, const V &val) noexcept { return emlite::Val::set(prop, val); }

    /// Gets property value (forwards to base `Val::get`).
    /// @param prop property key
    /// @returns property value converted to type V
    Result<V, Error> get(const K &prop) const noexcept {
        return emlite::Val::get(prop).template as<Result<V, Error>>();
    }

    /// Checks if object has property (including inherited) (forwards to `Val::has`).
    /// @param prop property key to check
    /// @returns true if property exists
    bool has(const K &prop) const noexcept { return emlite::Val::has(prop); }

    /// Gets the size of the object
    /// @returns number of properties in object
    [[nodiscard]] size_t size() const {
        // JavaScript objects don't have a built-in size, so count enumerable properties using
        // Object.keys()
        auto keys = emlite::Val::global("Object").call("keys", *this);
        return keys.get("length").template as<size_t>();
    }

    /// Checks if the value is null (=== null)
    /// @returns true if value is null
    [[nodiscard]] bool isNull() const noexcept { return emlite::Val::is_null(); }

    /// Checks if the value is undefined (=== undefined)
    /// @returns true if value is undefined
    [[nodiscard]] bool isUndefined() const noexcept { return emlite::Val::is_undefined(); }
};

/// JavaScript Object wrapper class.
///
/// Object provides access to JavaScript Object static methods and
/// prototypal inheritance functionality. Templated `set/get/has` forward
/// to the corresponding `emlite::Val` methods on the base class.
class Object : public emlite::Val {
    explicit Object(Handle h) noexcept;

  public:
    /// Creates Object from a raw handle
    /// @param h raw JavaScript handle
    /// @returns Object wrapper object
    static Object take_ownership(Handle h) noexcept;

    /// Creates Object from an emlite::Val
    /// @param val emlite::Val to wrap
    explicit Object(const emlite::Val &val);

    /// Creates a copy of this Object
    /// @returns cloned Object
    [[nodiscard]] Object clone() const noexcept;

    /// Creates empty Object
    Object() noexcept;

    /// Sets property value (forwards to base `Val::set`).
    /// @param prop property key
    /// @param val property value
    template <typename K, typename V>
    void set(const K &prop, const V &val) noexcept {
        emlite::Val::set(prop, val);
    }

    /// Gets property value (forwards to base `Val::get`).
    /// @param prop property key
    /// @returns property value
    template <typename K, typename V>
    Result<V, Error> get(const K &prop) const noexcept {
        return emlite::Val::get(prop).template as<Result<V, Error>>();
    }

    /// Checks if object has property (including inherited) (forwards to `Val::has`).
    /// @param prop property key to check
    /// @returns true if property exists
    template <typename K>
    bool has(const K &prop) const noexcept {
        return emlite::Val::has(prop);
    }

    /// Checks if object has own (non-inherited) property
    /// @param prop property name to check
    /// @returns true if object has own property
    bool hasOwnProperty(const char *prop) noexcept;

    /// Checks if the value is null (=== null)
    /// @returns true if value is null
    [[nodiscard]] bool isNull() const noexcept;

    /// Checks if the value is undefined (=== undefined)
    /// @returns true if value is undefined
    [[nodiscard]] bool isUndefined() const noexcept;

    /// Gets the Object constructor function
    /// @returns emlite::Val representing the Object constructor
    static emlite::Val instance() noexcept;

    /// Creates an object with the specified prototype object and properties
    /// @param prototype the object to use as the prototype, or null for no prototype
    /// @returns a new object with the specified prototype
    static emlite::Val create(const emlite::Val &prototype) noexcept;

    /// Creates an object with the specified prototype object and properties
    /// @param prototype the object to use as the prototype, or null for no prototype
    /// @param properties an object whose enumerable own properties specify property descriptors
    /// @returns a new object with the specified prototype and properties
    static emlite::Val create(const emlite::Val &prototype, const emlite::Val &properties) noexcept;

    /// Sets the prototype (i.e., the internal [[Prototype]] property) of a specified object
    /// @param obj the object which is to have its prototype set
    /// @param prototype the object's new prototype (an object or null)
    /// @returns the specified object
    static emlite::Val setPrototypeOf(
        const emlite::Val &obj, const emlite::Val &prototype
    ) noexcept;

    /// Safe variants that return Result for operations that can throw
    /// in the JavaScript environment (invalid descriptors, prototypes, etc.).
    static Result<Any, Error> tryCreate(const emlite::Val &prototype) noexcept;
    static Result<Any, Error> tryCreate(
        const emlite::Val &prototype, const emlite::Val &properties
    ) noexcept;
    static Result<Any, Error> trySetPrototypeOf(
        const emlite::Val &obj, const emlite::Val &prototype
    ) noexcept;
};
} // namespace jsbind
