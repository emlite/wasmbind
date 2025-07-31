#pragma once

#include "Any.hpp"
#include <emlite/emlite.hpp>

namespace jsbind {
template <typename T, bool Strong>
class TypedSet : public emlite::Val {
    explicit TypedSet(Handle h) noexcept
        : emlite::Val(emlite::Val::take_ownership(h)) {}

  public:
    static TypedSet take_ownership(Handle h) noexcept {
        return TypedSet(h);
    }
    explicit TypedSet(const emlite::Val &val)
        : emlite::Val(val) {}

    [[nodiscard]] TypedSet clone() const noexcept {
        return *this;
    }

    void set(size_t idx, const T &val) noexcept {
        emlite::Val::set(idx, val);
    }

    T get(size_t idx) noexcept {
        return emlite::Val::get(idx).template as<T>();
    }

    bool has(const T &val) const noexcept {
        return emlite::Val::has(val);
    }

    TypedSet()
        : emlite::Val(emlite::Val::global(
              Strong ? "Set" : "WeakSet"
          )) {}

    [[nodiscard]] size_t size() const {
        return get("size").template as<size_t>();
    }

    /// `Set.delete(value)` → `bool`
    auto delete_(size_t idx) -> bool {
        return call("delete", idx).template as<bool>();
    }

    /// `Set.clear()`
    void clear() { call("clear"); }

    void add(const T &t) { call("add", t); }
};

using Set     = TypedSet<Any, true>;
using WeakSet = TypedSet<Any, false>;

} // namespace jsbind