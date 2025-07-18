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
    bool hasOwnProperty(const char *prop) noexcept;

    template <typename K, typename V>
    void set(const K &prop, const V &val) noexcept {
        this->set(prop, val);
    }

    template <typename V>
    V get(const V &prop) noexcept {
        this->get(prop);
    }

    template <typename K>
    bool has(const K &prop) const noexcept {
        return this->has(prop);
    }

    DECLARE_CLONE(Object)
};
} // namespace jsbind
