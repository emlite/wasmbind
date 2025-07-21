#pragma once

#include "Any.hpp"
#include "utils.hpp"
#include <emlite/emlite.hpp>
namespace jsbind {
class Object : public emlite::Val {
    explicit Object(Handle h) noexcept;

  public:
    static Object take_ownership(Handle h) noexcept;
    explicit Object(const emlite::Val &val) noexcept;
    Object() noexcept;
    bool hasOwnProperty(const char *prop) noexcept;

    template <typename K, typename V>
    void set(const K &prop, const V &val) noexcept {
        emlite::Val::set(prop, val);
    }

    template <typename K, typename V = Any>
    V get(const K &prop) noexcept {
        return emlite::Val::get(prop).template as<V>();
    }

    template <typename K>
    bool has(const K &prop) const noexcept {
        return emlite::Val::has(prop);
    }

    DECLARE_CLONE(Object)
};
} // namespace jsbind
