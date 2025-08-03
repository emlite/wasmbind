#pragma once

#include "Any.hpp"
#include "BigInt.hpp"
#include "utils.hpp"
#include <emlite/emlite.hpp>
#include <stddef.h>
#include <stdint.h>

namespace jsbind {

/// Wrapper for JavaScript BigInt64Array objects
///
/// BigInt64Array provides a typed array interface for 64-bit signed integers
/// using BigInt values. It supports array-like operations, iteration,
/// and efficient memory management through ArrayBuffer backing.
class BigInt64Array : public emlite::Val {
    explicit BigInt64Array(Handle h) noexcept;

  public:
    /// Creates BigInt64Array from a raw handle
    /// @param h raw JavaScript handle
    /// @returns BigInt64Array wrapper object
    static BigInt64Array take_ownership(Handle h) noexcept;

    /// Creates BigInt64Array from an emlite::Val
    /// @param val emlite::Val to wrap
    explicit BigInt64Array(const emlite::Val &val) noexcept;

    /// Creates empty BigInt64Array
    BigInt64Array() noexcept;

    /// Creates BigInt64Array with specified length
    /// @param length number of elements
    explicit BigInt64Array(size_t length) noexcept;

    /// Creates BigInt64Array from ArrayBuffer
    /// @param buffer ArrayBuffer to use as backing store
    /// @param byteOffset offset in bytes from start of buffer
    /// @param length number of elements (defaults to remaining buffer)
    BigInt64Array(
        const ArrayBuffer &buffer, size_t byteOffset = 0, size_t length = SIZE_MAX
    ) noexcept;

    /// Gets the BigInt64Array constructor function
    /// @returns emlite::Val representing the BigInt64Array constructor
    static emlite::Val instance() noexcept;

    /// Creates a copy of this BigInt64Array
    /// @returns cloned BigInt64Array
    [[nodiscard]] BigInt64Array clone() const noexcept;

    // Size and capacity
    /// Gets number of elements in array
    /// @returns element count
    [[nodiscard]] size_t size() const;

    /// Gets number of elements in array (alias for size)
    /// @returns element count
    [[nodiscard]] size_t length() const;

    /// Checks if array is empty
    /// @returns true if size is 0
    [[nodiscard]] bool empty() const;

    /// Gets byte length of array
    /// @returns total bytes used by array
    [[nodiscard]] size_t byteLength() const;

    /// Gets byte offset in backing buffer
    /// @returns offset in bytes
    [[nodiscard]] size_t byteOffset() const;

    /// Gets underlying ArrayBuffer
    /// @returns backing ArrayBuffer
    [[nodiscard]] ArrayBuffer buffer() const;

    // Element access
    /// Gets element at index (unchecked)
    /// @param index element position
    /// @returns BigInt value at index
    BigInt operator[](size_t index) const;

    /// Sets element at index
    /// @param index element position
    /// @param value BigInt value to set
    void set(size_t index, const BigInt &value) noexcept;

    /// Gets element at index with bounds checking
    /// @param index element position
    /// @returns BigInt value at index
    /// @throws JavaScript error if index out of bounds
    [[nodiscard]] BigInt at(size_t index) const;

    /// Gets first element
    /// @returns first BigInt value
    [[nodiscard]] BigInt front() const;

    /// Gets last element
    /// @returns last BigInt value
    [[nodiscard]] BigInt back() const;

    // Array methods
    /// Fills array with value
    /// @param value BigInt value to fill with
    /// @param start starting index (default 0)
    /// @param end ending index (default array end)
    void fill(const BigInt &value, size_t start = 0, size_t end = SIZE_MAX) noexcept;

    /// Creates slice of array
    /// @param start starting index (default 0)
    /// @param end ending index (default array end)
    /// @returns new BigInt64Array with copied elements
    [[nodiscard]] BigInt64Array slice(size_t start = 0, size_t end = SIZE_MAX) const noexcept;

    /// Creates subarray view
    /// @param start starting index (default 0)
    /// @param end ending index (default array end)
    /// @returns new BigInt64Array view of same buffer
    [[nodiscard]] BigInt64Array subarray(size_t start = 0, size_t end = SIZE_MAX) const noexcept;

    /// Copies elements within array
    /// @param target destination index
    /// @param start source start index
    /// @param end source end index (default array end)
    void copyWithin(size_t target, size_t start, size_t end = SIZE_MAX) noexcept;

    // Iterator support
    struct iterator {
        BigInt64Array *parent;
        size_t idx;

        iterator(BigInt64Array *p, size_t i);
        BigInt operator*() const;
        iterator &operator++();
        bool operator!=(const iterator &other) const;
        bool operator==(const iterator &other) const;
    };

    iterator begin();
    iterator end();

    struct const_iterator : iterator {
        using iterator::iterator;
        BigInt operator*() const;
    };

    [[nodiscard]] const_iterator begin() const;
    [[nodiscard]] const_iterator end() const;
};

/// Wrapper for JavaScript BigUint64Array objects
///
/// BigUint64Array provides a typed array interface for 64-bit unsigned integers
/// using BigInt values. It supports array-like operations, iteration,
/// and efficient memory management through ArrayBuffer backing.
class BigUint64Array : public emlite::Val {
    explicit BigUint64Array(Handle h) noexcept;

  public:
    /// Creates BigUint64Array from a raw handle
    /// @param h raw JavaScript handle
    /// @returns BigUint64Array wrapper object
    static BigUint64Array take_ownership(Handle h) noexcept;

    /// Creates BigUint64Array from an emlite::Val
    /// @param val emlite::Val to wrap
    explicit BigUint64Array(const emlite::Val &val) noexcept;

    /// Creates empty BigUint64Array
    BigUint64Array() noexcept;

    /// Creates BigUint64Array with specified length
    /// @param length number of elements
    explicit BigUint64Array(size_t length) noexcept;

    /// Creates BigUint64Array from ArrayBuffer
    /// @param buffer ArrayBuffer to use as backing store
    /// @param byteOffset offset in bytes from start of buffer
    /// @param length number of elements (defaults to remaining buffer)
    BigUint64Array(
        const ArrayBuffer &buffer, size_t byteOffset = 0, size_t length = SIZE_MAX
    ) noexcept;

    /// Gets the BigUint64Array constructor function
    /// @returns emlite::Val representing the BigUint64Array constructor
    static emlite::Val instance() noexcept;

    /// Creates a copy of this BigUint64Array
    /// @returns cloned BigUint64Array
    [[nodiscard]] BigUint64Array clone() const noexcept;

    // Size and capacity
    /// Gets number of elements in array
    /// @returns element count
    [[nodiscard]] size_t size() const;

    /// Gets number of elements in array (alias for size)
    /// @returns element count
    [[nodiscard]] size_t length() const;

    /// Checks if array is empty
    /// @returns true if size is 0
    [[nodiscard]] bool empty() const;

    /// Gets byte length of array
    /// @returns total bytes used by array
    [[nodiscard]] size_t byteLength() const;

    /// Gets byte offset in backing buffer
    /// @returns offset in bytes
    [[nodiscard]] size_t byteOffset() const;

    /// Gets underlying ArrayBuffer
    /// @returns backing ArrayBuffer
    [[nodiscard]] ArrayBuffer buffer() const;

    // Element access
    /// Gets element at index (unchecked)
    /// @param index element position
    /// @returns BigInt value at index
    BigInt operator[](size_t index) const;

    /// Sets element at index
    /// @param index element position
    /// @param value BigInt value to set
    void set(size_t index, const BigInt &value) noexcept;

    /// Gets element at index with bounds checking
    /// @param index element position
    /// @returns BigInt value at index
    /// @throws JavaScript error if index out of bounds
    [[nodiscard]] BigInt at(size_t index) const;

    /// Gets first element
    /// @returns first BigInt value
    [[nodiscard]] BigInt front() const;

    /// Gets last element
    /// @returns last BigInt value
    [[nodiscard]] BigInt back() const;

    // Array methods
    /// Fills array with value
    /// @param value BigInt value to fill with
    /// @param start starting index (default 0)
    /// @param end ending index (default array end)
    void fill(const BigInt &value, size_t start = 0, size_t end = SIZE_MAX) noexcept;

    /// Creates slice of array
    /// @param start starting index (default 0)
    /// @param end ending index (default array end)
    /// @returns new BigUint64Array with copied elements
    [[nodiscard]] BigUint64Array slice(size_t start = 0, size_t end = SIZE_MAX) const noexcept;

    /// Creates subarray view
    /// @param start starting index (default 0)
    /// @param end ending index (default array end)
    /// @returns new BigUint64Array view of same buffer
    [[nodiscard]] BigUint64Array subarray(size_t start = 0, size_t end = SIZE_MAX) const noexcept;

    /// Copies elements within array
    /// @param target destination index
    /// @param start source start index
    /// @param end source end index (default array end)
    void copyWithin(size_t target, size_t start, size_t end = SIZE_MAX) noexcept;

    // Iterator support
    struct iterator {
        BigUint64Array *parent;
        size_t idx;

        iterator(BigUint64Array *p, size_t i);
        BigInt operator*() const;
        iterator &operator++();
        bool operator!=(const iterator &other) const;
        bool operator==(const iterator &other) const;
    };

    iterator begin();
    iterator end();

    struct const_iterator : iterator {
        using iterator::iterator;
        BigInt operator*() const;
    };

    [[nodiscard]] const_iterator begin() const;
    [[nodiscard]] const_iterator end() const;
};

} // namespace jsbind