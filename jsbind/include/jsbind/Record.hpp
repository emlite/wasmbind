#pragma once

#include <emlite/emlite.hpp>

namespace jsbind {
template <typename K, typename V>
class Record : public emlite::Val {
    explicit Record(Handle h) noexcept;

  public:
    static Record take_ownership(Handle h) noexcept;
    explicit Record(const emlite::Val &val)
        : emlite::Val(val) {}

    [[nodiscard]] Record clone() const noexcept {
        return *this;
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

template <typename K, typename V>
Record<K, V>::Record(Handle h) noexcept
    : emlite::Val(emlite::Val::take_ownership(h)) {}

template <typename K, typename V>
Record<K, V> Record<K, V>::take_ownership(Handle h
) noexcept {
    return Record(h);
}
} // namespace jsbind