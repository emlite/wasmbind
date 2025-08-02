#pragma once

#include "Any.hpp"
#include "BigInt.hpp"
#include "utils.hpp"
#include <emlite/emlite.hpp>
#include <stddef.h>
#include <stdint.h>

namespace jsbind {

class BigInt64Array : public emlite::Val {
    explicit BigInt64Array(Handle h) noexcept
        : emlite::Val(emlite::Val::take_ownership(h)) {}

  public:
    static BigInt64Array take_ownership(Handle h) noexcept {
        return BigInt64Array(h);
    }

    explicit BigInt64Array(const emlite::Val &val) noexcept
        : emlite::Val(val) {}

    /// Create empty BigInt64Array
    BigInt64Array() noexcept
        : emlite::Val(emlite::Val::global("BigInt64Array").new_()) {}

    /// Create BigInt64Array with specified length
    explicit BigInt64Array(size_t length) noexcept
        : emlite::Val(emlite::Val::global("BigInt64Array").new_(static_cast<double>(length))) {}

    /// Create BigInt64Array from ArrayBuffer
    BigInt64Array(const ArrayBuffer &buffer, size_t byteOffset = 0, size_t length = SIZE_MAX) noexcept
        : emlite::Val([&]() {
            if (length == SIZE_MAX) {
                return emlite::Val::global("BigInt64Array").new_(buffer, static_cast<double>(byteOffset));
            } else {
                return emlite::Val::global("BigInt64Array").new_(buffer, static_cast<double>(byteOffset), static_cast<double>(length));
            }
        }()) {}

    static emlite::Val instance() noexcept {
        return emlite::Val::global("BigInt64Array");
    }

    [[nodiscard]] BigInt64Array clone() const noexcept {
        return *this;
    }

    [[nodiscard]] size_t size() const {
        return get("length").as<size_t>();
    }

    [[nodiscard]] size_t length() const {
        return size();
    }

    [[nodiscard]] bool empty() const {
        return size() == 0;
    }

    [[nodiscard]] size_t byteLength() const {
        return get("byteLength").as<size_t>();
    }

    [[nodiscard]] size_t byteOffset() const {
        return get("byteOffset").as<size_t>();
    }

    [[nodiscard]] ArrayBuffer buffer() const {
        return get("buffer").as<ArrayBuffer>();
    }

    // Element access
    BigInt operator[](size_t index) const {
        return get(index).as<BigInt>();
    }

    void set(size_t index, const BigInt &value) noexcept {
        emlite::Val::set(index, value);
    }

    // STL-like interface
    [[nodiscard]] BigInt at(size_t index) const {
        if (index >= size()) {
            throw_js("BigInt64Array index out of range");
        }
        return operator[](index);
    }

    [[nodiscard]] BigInt front() const {
        return at(0);
    }

    [[nodiscard]] BigInt back() const {
        return at(size() - 1);
    }

    // Array methods
    void fill(const BigInt &value, size_t start = 0, size_t end = SIZE_MAX) noexcept {
        if (end == SIZE_MAX) {
            call("fill", value, static_cast<double>(start));
        } else {
            call("fill", value, static_cast<double>(start), static_cast<double>(end));
        }
    }

    [[nodiscard]] BigInt64Array slice(size_t start = 0, size_t end = SIZE_MAX) const noexcept {
        if (end == SIZE_MAX) {
            return BigInt64Array::take_ownership(call("slice", static_cast<double>(start)).as_handle());
        } else {
            return BigInt64Array::take_ownership(call("slice", static_cast<double>(start), static_cast<double>(end)).as_handle());
        }
    }

    [[nodiscard]] BigInt64Array subarray(size_t start = 0, size_t end = SIZE_MAX) const noexcept {
        if (end == SIZE_MAX) {
            return BigInt64Array::take_ownership(call("subarray", static_cast<double>(start)).as_handle());
        } else {
            return BigInt64Array::take_ownership(call("subarray", static_cast<double>(start), static_cast<double>(end)).as_handle());
        }
    }

    void copyWithin(size_t target, size_t start, size_t end = SIZE_MAX) noexcept {
        if (end == SIZE_MAX) {
            call("copyWithin", static_cast<double>(target), static_cast<double>(start));
        } else {
            call("copyWithin", static_cast<double>(target), static_cast<double>(start), static_cast<double>(end));
        }
    }

    // Iterator support
    struct iterator {
        BigInt64Array *parent;
        size_t idx;

        iterator(BigInt64Array *p, size_t i) : parent(p), idx(i) {}

        BigInt operator*() const {
            return (*parent)[idx];
        }

        iterator& operator++() {
            ++idx;
            return *this;
        }

        bool operator!=(const iterator& other) const {
            return idx != other.idx;
        }

        bool operator==(const iterator& other) const {
            return idx == other.idx;
        }
    };

    iterator begin() { return {this, 0}; }
    iterator end() { return {this, size()}; }

    struct const_iterator : iterator {
        using iterator::iterator;
        BigInt operator*() const {
            return this->parent->operator[](this->idx);
        }
    };

    [[nodiscard]] const_iterator begin() const {
        return {const_cast<BigInt64Array*>(this), 0};
    }

    [[nodiscard]] const_iterator end() const {
        return {const_cast<BigInt64Array*>(this), size()};
    }
};

class BigUint64Array : public emlite::Val {
    explicit BigUint64Array(Handle h) noexcept
        : emlite::Val(emlite::Val::take_ownership(h)) {}

  public:
    static BigUint64Array take_ownership(Handle h) noexcept {
        return BigUint64Array(h);
    }

    explicit BigUint64Array(const emlite::Val &val) noexcept
        : emlite::Val(val) {}

    /// Create empty BigUint64Array
    BigUint64Array() noexcept
        : emlite::Val(emlite::Val::global("BigUint64Array").new_()) {}

    /// Create BigUint64Array with specified length
    explicit BigUint64Array(size_t length) noexcept
        : emlite::Val(emlite::Val::global("BigUint64Array").new_(static_cast<double>(length))) {}

    /// Create BigUint64Array from ArrayBuffer
    BigUint64Array(const ArrayBuffer &buffer, size_t byteOffset = 0, size_t length = SIZE_MAX) noexcept
        : emlite::Val([&]() {
            if (length == SIZE_MAX) {
                return emlite::Val::global("BigUint64Array").new_(buffer, static_cast<double>(byteOffset));
            } else {
                return emlite::Val::global("BigUint64Array").new_(buffer, static_cast<double>(byteOffset), static_cast<double>(length));
            }
        }()) {}

    static emlite::Val instance() noexcept {
        return emlite::Val::global("BigUint64Array");
    }

    [[nodiscard]] BigUint64Array clone() const noexcept {
        return *this;
    }

    [[nodiscard]] size_t size() const {
        return get("length").as<size_t>();
    }

    [[nodiscard]] size_t length() const {
        return size();
    }

    [[nodiscard]] bool empty() const {
        return size() == 0;
    }

    [[nodiscard]] size_t byteLength() const {
        return get("byteLength").as<size_t>();
    }

    [[nodiscard]] size_t byteOffset() const {
        return get("byteOffset").as<size_t>();
    }

    [[nodiscard]] ArrayBuffer buffer() const {
        return get("buffer").as<ArrayBuffer>();
    }

    // Element access
    BigInt operator[](size_t index) const {
        return get(index).as<BigInt>();
    }

    void set(size_t index, const BigInt &value) noexcept {
        emlite::Val::set(index, value);
    }

    // STL-like interface
    [[nodiscard]] BigInt at(size_t index) const {
        if (index >= size()) {
            throw_js("BigUint64Array index out of range");
        }
        return operator[](index);
    }

    [[nodiscard]] BigInt front() const {
        return at(0);
    }

    [[nodiscard]] BigInt back() const {
        return at(size() - 1);
    }

    // Array methods
    void fill(const BigInt &value, size_t start = 0, size_t end = SIZE_MAX) noexcept {
        if (end == SIZE_MAX) {
            call("fill", value, static_cast<double>(start));
        } else {
            call("fill", value, static_cast<double>(start), static_cast<double>(end));
        }
    }

    [[nodiscard]] BigUint64Array slice(size_t start = 0, size_t end = SIZE_MAX) const noexcept {
        if (end == SIZE_MAX) {
            return BigUint64Array::take_ownership(call("slice", static_cast<double>(start)).as_handle());
        } else {
            return BigUint64Array::take_ownership(call("slice", static_cast<double>(start), static_cast<double>(end)).as_handle());
        }
    }

    [[nodiscard]] BigUint64Array subarray(size_t start = 0, size_t end = SIZE_MAX) const noexcept {
        if (end == SIZE_MAX) {
            return BigUint64Array::take_ownership(call("subarray", static_cast<double>(start)).as_handle());
        } else {
            return BigUint64Array::take_ownership(call("subarray", static_cast<double>(start), static_cast<double>(end)).as_handle());
        }
    }

    void copyWithin(size_t target, size_t start, size_t end = SIZE_MAX) noexcept {
        if (end == SIZE_MAX) {
            call("copyWithin", static_cast<double>(target), static_cast<double>(start));
        } else {
            call("copyWithin", static_cast<double>(target), static_cast<double>(start), static_cast<double>(end));
        }
    }

    // Iterator support
    struct iterator {
        BigUint64Array *parent;
        size_t idx;

        iterator(BigUint64Array *p, size_t i) : parent(p), idx(i) {}

        BigInt operator*() const {
            return (*parent)[idx];
        }

        iterator& operator++() {
            ++idx;
            return *this;
        }

        bool operator!=(const iterator& other) const {
            return idx != other.idx;
        }

        bool operator==(const iterator& other) const {
            return idx == other.idx;
        }
    };

    iterator begin() { return {this, 0}; }
    iterator end() { return {this, size()}; }

    struct const_iterator : iterator {
        using iterator::iterator;
        BigInt operator*() const {
            return this->parent->operator[](this->idx);
        }
    };

    [[nodiscard]] const_iterator begin() const {
        return {const_cast<BigUint64Array*>(this), 0};
    }

    [[nodiscard]] const_iterator end() const {
        return {const_cast<BigUint64Array*>(this), size()};
    }
};

} // namespace jsbind