#pragma once

#include "Any.hpp"
#include <emlite/emlite.hpp>

namespace jsbind {

/// Generic wrapper for JavaScript Set and WeakSet objects
///
/// TypedSet provides a type-safe interface for JavaScript Set/WeakSet with
/// specific value types. The Strong template parameter determines whether
/// to use Set (true) or WeakSet (false) behavior.
template <typename T, bool Strong>
class TypedSet : public emlite::Val {
    explicit TypedSet(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}

  public:
    /// Creates TypedSet from a raw handle
    /// @param h raw JavaScript handle
    /// @returns TypedSet wrapper object
    static TypedSet take_ownership(Handle h) noexcept { return TypedSet(h); }

    /// Creates TypedSet from an emlite::Val
    /// @param val emlite::Val to wrap
    explicit TypedSet(const emlite::Val &val) : emlite::Val(val) {}

    /// Creates a copy of this TypedSet
    /// @returns cloned TypedSet
    [[nodiscard]] TypedSet clone() const noexcept { return *this; }

    /// Sets value at index (for array-like access)
    /// @param idx index to set
    /// @param val value to set
    void set(size_t idx, const T &val) noexcept { emlite::Val::set(idx, val); }

    /// Gets value at index (for array-like access)
    /// @param idx index to get
    /// @returns value at index converted to type T
    T get(size_t idx) noexcept { return emlite::Val::get(idx).template as<T>(); }

    /// Checks if set contains value
    /// @param val value to check for
    /// @returns true if value exists in set
    bool has(const T &val) const noexcept { return emlite::Val::has(val); }

    /// Creates new empty TypedSet
    /// Uses Set constructor for Strong=true, WeakSet for Strong=false
    TypedSet() : emlite::Val(emlite::Val::global(Strong ? "Set" : "WeakSet")) {}

    /// Gets the Set or WeakSet constructor function
    /// @returns emlite::Val representing the constructor
    static emlite::Val instance() noexcept {
        return emlite::Val::global(Strong ? "Set" : "WeakSet");
    }

    /// Gets the number of values in the set
    /// @returns size of the set (only available for strong Sets)
    [[nodiscard]] size_t size() const { return get("size").template as<size_t>(); }

    /// Deletes value from the set
    /// @param idx index or value to delete
    /// @returns true if value existed and was deleted, false otherwise
    auto delete_(size_t idx) -> bool { return call("delete", idx).template as<bool>(); }

    /// Removes all values from the set
    void clear() { call("clear"); }

    /// Adds value to the set
    /// @param t value to add
    void add(const T &t) { call("add", t); }
};

/// Type alias for JavaScript Set with Any values
using Set = TypedSet<Any, true>;

/// Type alias for JavaScript WeakSet with Any values
using WeakSet = TypedSet<Any, false>;

} // namespace jsbind