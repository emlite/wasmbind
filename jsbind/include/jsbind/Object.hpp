#pragma once

#include "Any.hpp"
#include <emlite/emlite.hpp>

namespace jsbind {

/// Generic wrapper for JavaScript Record/Object types
///
/// Record provides a type-safe interface for JavaScript objects with
/// specific key and value types. It supports property access, modification,
/// and checking for property existence.
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

    /// Sets property value
    /// @param prop property key
    /// @param val property value
    void set(const K &prop, const V &val) noexcept { emlite::Val::set(prop, val); }

    /// Gets property value
    /// @param prop property key
    /// @returns property value converted to type V
    V get(const K &prop) noexcept { return emlite::Val::get(prop).template as<V>(); }

    /// Checks if object has property (including inherited)
    /// @param prop property key to check
    /// @returns true if property exists
    bool has(const K &prop) const noexcept { return emlite::Val::has(prop); }

    /// Gets the size of the object
    /// @returns number of properties in object
    [[nodiscard]] size_t size() const { return emlite::Val::get("size").template as<size_t>(); }
};

/// Type alias for generic JavaScript objects with Any keys and values
using Object = Record<Any, Any>;
} // namespace jsbind