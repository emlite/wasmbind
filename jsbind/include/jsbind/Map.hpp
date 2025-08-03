#pragma once

#include "Any.hpp"
#include <emlite/emlite.hpp>

namespace jsbind {

/// Generic wrapper for JavaScript Map and WeakMap objects
///
/// TypedMap provides a type-safe interface for JavaScript Map/WeakMap with
/// specific key and value types. The Strong template parameter determines
/// whether to use Map (true) or WeakMap (false) behavior.
template <typename K, typename V, bool Strong>
class TypedMap : public emlite::Val {
    explicit TypedMap(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}

  public:
    /// Creates TypedMap from a raw handle
    /// @param h raw JavaScript handle
    /// @returns TypedMap wrapper object
    static TypedMap take_ownership(Handle h) noexcept { return TypedMap(h); }

    /// Creates TypedMap from an emlite::Val
    /// @param val emlite::Val to wrap
    explicit TypedMap(const emlite::Val &val) : emlite::Val(val) {}

    /// Creates a copy of this TypedMap
    /// @returns cloned TypedMap
    [[nodiscard]] TypedMap clone() const noexcept { return *this; }

    /// Sets key-value pair in the map
    /// @param prop key to set
    /// @param val value to associate with key
    void set(const K &prop, const V &val) noexcept { emlite::Val::set(prop, val); }

    /// Gets value for key from the map
    /// @param prop key to look up
    /// @returns value associated with key converted to type V
    V get(const K &prop) noexcept { return emlite::Val::get(prop).template as<V>(); }

    /// Checks if map contains key
    /// @param prop key to check for
    /// @returns true if key exists in map
    bool has(const K &prop) const noexcept { return emlite::Val::has(prop); }

    /// Creates new empty TypedMap
    /// Uses Map constructor for Strong=true, WeakMap for Strong=false
    TypedMap() : emlite::Val(emlite::Val::global(Strong ? "Map" : "WeakMap")) {}

    /// Gets the Map or WeakMap constructor function
    /// @returns emlite::Val representing the constructor
    static emlite::Val instance() noexcept {
        return emlite::Val::global(Strong ? "Map" : "WeakMap");
    }

    /// Gets the number of key-value pairs in the map
    /// @returns size of the map (only available for strong Maps)
    [[nodiscard]] size_t size() const { return get("size").template as<size_t>(); }

    /// Deletes key-value pair from the map
    /// @param k key to delete
    /// @returns true if key existed and was deleted, false otherwise
    auto delete_(const K &k) -> bool { return call("delete", k).template as<bool>(); }

    /// Removes all key-value pairs from the map
    void clear() { call("clear"); }
};

/// Type alias for JavaScript Map with Any keys and values
using Map = TypedMap<Any, Any, true>;

/// Type alias for JavaScript WeakMap with Any keys and values
using WeakMap = TypedMap<Any, Any, false>;

} // namespace jsbind