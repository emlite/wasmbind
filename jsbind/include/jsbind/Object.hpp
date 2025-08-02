#pragma once

#include "Any.hpp"
#include <emlite/emlite.hpp>

namespace jsbind {
template <typename K, typename V>
class Record : public emlite::Val {
    explicit Record(Handle h) noexcept
        : emlite::Val(emlite::Val::take_ownership(h)) {}

  public:
    static Record take_ownership(Handle h) noexcept {
        return Record(h);
    }

    explicit Record(const emlite::Val &val)
        : emlite::Val(val) {}

    [[nodiscard]] Record clone() const noexcept {
        return *this;
    }

    Record() noexcept
        : emlite::Val(emlite::Val::object()) {}

    static emlite::Val instance() noexcept {
        return emlite::Val::global("Object");
    }

    bool hasOwnProperty(const char *prop) noexcept {
        return has_own_property(prop);
    }

    void set(const K &prop, const V &val) noexcept {
        emlite::Val::set(prop, val);
    }

    V get(const K &prop) noexcept {
        return emlite::Val::get(prop).template as<V>();
    }

    bool has(const K &prop) const noexcept {
        return emlite::Val::has(prop);
    }

    [[nodiscard]] size_t size() const {
        return emlite::Val::get("size").template as<size_t>(
        );
    }
};

using Object = Record<Any, Any>;
} // namespace jsbind