#pragma once

#include <emlite/emlite.hpp>
#include <stddef.h>

namespace jsbind {
template <typename T>
class Sequence : public emlite::Val {
    explicit Sequence(Handle h) noexcept;

  public:
    static Sequence take_ownership(Handle h) noexcept;

    static Sequence new_(T *data, size_t len) {
        auto arr = emlite::Val::array();
        for (auto i = 0; i < len; i++)
            arr.call("push", data[i]);
        return Sequence(arr);
    }

    explicit Sequence(const emlite::Val &val) noexcept
        : emlite::Val(val) {}

    [[nodiscard]] Sequence clone() const noexcept {
        return *this;
    }

    [[nodiscard]] size_t size() const {
        return emlite::Val::get("length").template as<size_t>();
    }

    [[nodiscard]] bool empty() const { return size() == 0; }

    void push(const T &v) { emlite::Val::call("push", v); }

    T operator[](size_t i) const {
        return emlite::Val::operator[](i).template as<T>();
    }

    struct iterator {
        Sequence *parent;
        size_t idx;

        using difference_type = ptrdiff_t;
        using value_type      = T;
        using reference       = T;
        using pointer         = void;

        reference operator*() const {
            return parent->get(idx).template as<reference>();
        }
        iterator &operator++() {
            ++idx;
            return *this;
        }
        const iterator operator++(int) {
            auto c = *this;
            ++*this;
            return c;
        }

        friend bool operator==(
            const iterator &a, const iterator &b
        ) {
            return a.idx == b.idx;
        }
        friend bool operator!=(
            const iterator &a, const iterator &b
        ) {
            return !(a == b);
        }
    };

    iterator begin() { return {this, 0}; }
    iterator end() { return {this, size()}; }

    struct const_iterator : iterator {
        using iterator::iterator;
        T operator*() const {
            return this->parent->get(this->idx).template as<T>();
        }
    };
    const_iterator begin() const {
        return {const_cast<Sequence *>(this), 0};
    }
    const_iterator end() const {
        return {const_cast<Sequence *>(this), size()};
    }
};

template <typename T>
Sequence<T>::Sequence(Handle h) noexcept
    : emlite::Val(emlite::Val::take_ownership(h)) {}

template <typename T>
Sequence<T> Sequence<T>::take_ownership(Handle h) noexcept {
    return Sequence(h);
}
} // namespace jsbind
