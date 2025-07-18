#pragma once

#include "Any.hpp"
#include <emlite/emlite.hpp>

namespace jsbind {
template <typename K, typename V, bool Strong>
class TypedMap : public emlite::Val {
    explicit TypedMap(Handle h) noexcept
        : emlite::Val(emlite::Val::take_ownership(h)) {}

  public:
    static TypedMap take_ownership(Handle h) noexcept {
        return TypedMap(h);
    }
    explicit TypedMap(const emlite::Val &val)
        : emlite::Val(val) {}

    [[nodiscard]] TypedMap clone() const noexcept {
        return *this;
    }

    void set(const K &prop, const V &val) noexcept {
        this->set(prop, val);
    }

    V get(const V &prop) noexcept { this->get(prop); }

    bool has(const K &prop) const noexcept {
        return this->has(prop);
    }

    TypedMap()
        : emlite::Val(emlite::Val::global(
              Strong ? "Map" : "WeakMap"
          )) {}

    [[nodiscard]] size_t size() const {
        return get("size").template as<size_t>();
    }

    /// `Map.delete(value)` → `bool`
    auto delete_(const K &k) -> bool {
        return call("delete", k).template as<bool>();
    }

    /// `Map.clear()`
    void clear() { call("clear"); }
};

using Map     = TypedMap<Any, Any, true>;
using WeakMap = TypedMap<Any, Any, false>;

} // namespace jsbind