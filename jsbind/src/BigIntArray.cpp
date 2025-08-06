#include <jsbind/Array.hpp>
#include <jsbind/BigIntArray.hpp>

using namespace jsbind;

// BigInt64Array implementations
BigInt64Array::BigInt64Array(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}

BigInt64Array BigInt64Array::take_ownership(Handle h) noexcept { return BigInt64Array(h); }

BigInt64Array::BigInt64Array(const emlite::Val &val) noexcept : emlite::Val(val) {}

BigInt64Array::BigInt64Array() noexcept
    : emlite::Val(emlite::Val::global("BigInt64Array").new_()) {}

BigInt64Array::BigInt64Array(size_t length) noexcept
    : emlite::Val(emlite::Val::global("BigInt64Array").new_(static_cast<double>(length))) {}

BigInt64Array::BigInt64Array(const ArrayBuffer &buffer, size_t byteOffset, size_t length) noexcept
    : emlite::Val([&]() {
          if (length == SIZE_MAX) {
              return emlite::Val::global("BigInt64Array")
                  .new_(buffer, static_cast<double>(byteOffset));
          } else {
              return emlite::Val::global("BigInt64Array")
                  .new_(buffer, static_cast<double>(byteOffset), static_cast<double>(length));
          }
      }()) {}

emlite::Val BigInt64Array::instance() noexcept { return emlite::Val::global("BigInt64Array"); }

BigInt64Array BigInt64Array::clone() const noexcept { return *this; }

size_t BigInt64Array::size() const { return get("length").as<size_t>(); }

size_t BigInt64Array::length() const { return size(); }

bool BigInt64Array::empty() const { return size() == 0; }

size_t BigInt64Array::byteLength() const { return get("byteLength").as<size_t>(); }

size_t BigInt64Array::byteOffset() const { return get("byteOffset").as<size_t>(); }

ArrayBuffer BigInt64Array::buffer() const { return get("buffer").as<ArrayBuffer>(); }

BigInt BigInt64Array::operator[](size_t index) const { return get(index).as<BigInt>(); }

void BigInt64Array::set(size_t index, const BigInt &value) noexcept {
    emlite::Val::set(index, value);
}

Option<BigInt> BigInt64Array::at(size_t index) const {
    if (index >= size()) {
        return nullopt;
    }
    return operator[](index);
}

Option<BigInt> BigInt64Array::front() const { return at(0); }

Option<BigInt> BigInt64Array::back() const { return at(size() - 1); }

void BigInt64Array::fill(const BigInt &value, size_t start, size_t end) noexcept {
    if (end == SIZE_MAX) {
        call("fill", value, static_cast<double>(start));
    } else {
        call("fill", value, static_cast<double>(start), static_cast<double>(end));
    }
}

BigInt64Array BigInt64Array::slice(size_t start, size_t end) const noexcept {
    if (end == SIZE_MAX) {
        return BigInt64Array::take_ownership(call("slice", static_cast<double>(start)).as_handle());
    } else {
        return BigInt64Array::take_ownership(
            call("slice", static_cast<double>(start), static_cast<double>(end)).as_handle()
        );
    }
}

BigInt64Array BigInt64Array::subarray(size_t start, size_t end) const noexcept {
    if (end == SIZE_MAX) {
        return BigInt64Array::take_ownership(
            call("subarray", static_cast<double>(start)).as_handle()
        );
    } else {
        return BigInt64Array::take_ownership(
            call("subarray", static_cast<double>(start), static_cast<double>(end)).as_handle()
        );
    }
}

void BigInt64Array::copyWithin(size_t target, size_t start, size_t end) noexcept {
    if (end == SIZE_MAX) {
        call("copyWithin", static_cast<double>(target), static_cast<double>(start));
    } else {
        call(
            "copyWithin",
            static_cast<double>(target),
            static_cast<double>(start),
            static_cast<double>(end)
        );
    }
}

// BigInt64Array::iterator implementations
BigInt64Array::iterator::iterator(BigInt64Array *p, size_t i) : parent(p), idx(i) {}

BigInt BigInt64Array::iterator::operator*() const { return (*parent)[idx]; }

BigInt64Array::iterator &BigInt64Array::iterator::operator++() {
    ++idx;
    return *this;
}

bool BigInt64Array::iterator::operator!=(const iterator &other) const { return idx != other.idx; }

bool BigInt64Array::iterator::operator==(const iterator &other) const { return idx == other.idx; }

BigInt64Array::iterator BigInt64Array::begin() { return {this, 0}; }

BigInt64Array::iterator BigInt64Array::end() { return {this, size()}; }

BigInt BigInt64Array::const_iterator::operator*() const {
    return this->parent->operator[](this->idx);
}

BigInt64Array::const_iterator BigInt64Array::begin() const {
    return {const_cast<BigInt64Array *>(this), 0};
}

BigInt64Array::const_iterator BigInt64Array::end() const {
    return {const_cast<BigInt64Array *>(this), size()};
}

// BigUint64Array implementations
BigUint64Array::BigUint64Array(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}

BigUint64Array BigUint64Array::take_ownership(Handle h) noexcept { return BigUint64Array(h); }

BigUint64Array::BigUint64Array(const emlite::Val &val) noexcept : emlite::Val(val) {}

BigUint64Array::BigUint64Array() noexcept
    : emlite::Val(emlite::Val::global("BigUint64Array").new_()) {}

BigUint64Array::BigUint64Array(size_t length) noexcept
    : emlite::Val(emlite::Val::global("BigUint64Array").new_(static_cast<double>(length))) {}

BigUint64Array::BigUint64Array(const ArrayBuffer &buffer, size_t byteOffset, size_t length) noexcept
    : emlite::Val([&]() {
          if (length == SIZE_MAX) {
              return emlite::Val::global("BigUint64Array")
                  .new_(buffer, static_cast<double>(byteOffset));
          } else {
              return emlite::Val::global("BigUint64Array")
                  .new_(buffer, static_cast<double>(byteOffset), static_cast<double>(length));
          }
      }()) {}

emlite::Val BigUint64Array::instance() noexcept { return emlite::Val::global("BigUint64Array"); }

BigUint64Array BigUint64Array::clone() const noexcept { return *this; }

size_t BigUint64Array::size() const { return get("length").as<size_t>(); }

size_t BigUint64Array::length() const { return size(); }

bool BigUint64Array::empty() const { return size() == 0; }

size_t BigUint64Array::byteLength() const { return get("byteLength").as<size_t>(); }

size_t BigUint64Array::byteOffset() const { return get("byteOffset").as<size_t>(); }

ArrayBuffer BigUint64Array::buffer() const { return get("buffer").as<ArrayBuffer>(); }

BigInt BigUint64Array::operator[](size_t index) const { return get(index).as<BigInt>(); }

void BigUint64Array::set(size_t index, const BigInt &value) noexcept {
    emlite::Val::set(index, value);
}

Option<BigInt> BigUint64Array::at(size_t index) const {
    if (index >= size()) {
        return nullopt;
    }
    return operator[](index);
}

Option<BigInt> BigUint64Array::front() const { return at(0); }

Option<BigInt> BigUint64Array::back() const { return at(size() - 1); }

void BigUint64Array::fill(const BigInt &value, size_t start, size_t end) noexcept {
    if (end == SIZE_MAX) {
        call("fill", value, static_cast<double>(start));
    } else {
        call("fill", value, static_cast<double>(start), static_cast<double>(end));
    }
}

BigUint64Array BigUint64Array::slice(size_t start, size_t end) const noexcept {
    if (end == SIZE_MAX) {
        return BigUint64Array::take_ownership(call("slice", static_cast<double>(start)).as_handle()
        );
    } else {
        return BigUint64Array::take_ownership(
            call("slice", static_cast<double>(start), static_cast<double>(end)).as_handle()
        );
    }
}

BigUint64Array BigUint64Array::subarray(size_t start, size_t end) const noexcept {
    if (end == SIZE_MAX) {
        return BigUint64Array::take_ownership(
            call("subarray", static_cast<double>(start)).as_handle()
        );
    } else {
        return BigUint64Array::take_ownership(
            call("subarray", static_cast<double>(start), static_cast<double>(end)).as_handle()
        );
    }
}

void BigUint64Array::copyWithin(size_t target, size_t start, size_t end) noexcept {
    if (end == SIZE_MAX) {
        call("copyWithin", static_cast<double>(target), static_cast<double>(start));
    } else {
        call(
            "copyWithin",
            static_cast<double>(target),
            static_cast<double>(start),
            static_cast<double>(end)
        );
    }
}

// BigUint64Array::iterator implementations
BigUint64Array::iterator::iterator(BigUint64Array *p, size_t i) : parent(p), idx(i) {}

BigInt BigUint64Array::iterator::operator*() const { return (*parent)[idx]; }

BigUint64Array::iterator &BigUint64Array::iterator::operator++() {
    ++idx;
    return *this;
}

bool BigUint64Array::iterator::operator!=(const iterator &other) const { return idx != other.idx; }

bool BigUint64Array::iterator::operator==(const iterator &other) const { return idx == other.idx; }

BigUint64Array::iterator BigUint64Array::begin() { return {this, 0}; }

BigUint64Array::iterator BigUint64Array::end() { return {this, size()}; }

BigInt BigUint64Array::const_iterator::operator*() const {
    return this->parent->operator[](this->idx);
}

BigUint64Array::const_iterator BigUint64Array::begin() const {
    return {const_cast<BigUint64Array *>(this), 0};
}

BigUint64Array::const_iterator BigUint64Array::end() const {
    return {const_cast<BigUint64Array *>(this), size()};
}