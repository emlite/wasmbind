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
        this->set(prop, val);
    }

    V get(const V &prop) noexcept { this->get(prop); }

    bool has(const K &prop) const noexcept {
        return this->has(prop);
    }

    [[nodiscard]] size_t size() const {
        return get("size").template as<size_t>();
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