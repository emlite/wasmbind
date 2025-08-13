#pragma once

#include "Any.hpp"
#include "String.hpp"
#include "utils.hpp"
#include <emlite/emlite.hpp>
#include <stddef.h>
#include <stdint.h>

#if __has_include(<span>)
#include <span>
#include <vector>
#define EM_HAVE_STD_SPAN 1
#else
#define EM_HAVE_STD_SPAN 0
#endif

namespace jsbind {

class Function;
class Error;
class Undefined;

/// Wrapper for JavaScript ArrayBuffer objects
///
/// ArrayBuffer represents a raw binary data buffer, used as the backing
/// store for TypedArray views. It provides methods for creating buffers,
/// checking buffer properties, and creating slices.
class ArrayBuffer : public emlite::Val {
    explicit ArrayBuffer(Handle h) noexcept;

  public:
    /// Creates ArrayBuffer from a raw handle
    /// @param h raw JavaScript handle
    /// @returns ArrayBuffer wrapper object
    static ArrayBuffer take_ownership(Handle h) noexcept;

    /// Creates ArrayBuffer from an emlite::Val
    /// @param v emlite::Val to wrap
    explicit ArrayBuffer(const emlite::Val &v) noexcept;

    /// Gets the ArrayBuffer constructor function
    /// @returns emlite::Val representing the ArrayBuffer constructor
    static emlite::Val instance() noexcept;

    /// Creates ArrayBuffer with specified byte length
    /// @param byteLen size in bytes
    explicit ArrayBuffer(size_t byteLen);

    /// Checks if a value is an ArrayBuffer view
    /// @param v value to check
    /// @returns true if value is a TypedArray or DataView
    static bool isView(const emlite::Val &v);

    /// Gets the byte length of the buffer
    /// @returns buffer size in bytes
    [[nodiscard]] size_t byteLength() const;

    /// Creates a slice of the buffer
    /// @param begin start byte offset
    /// @param end end byte offset (SIZE_MAX for end of buffer)
    /// @returns new ArrayBuffer containing the slice
    [[nodiscard]] ArrayBuffer slice(size_t begin, size_t end = SIZE_MAX) const;
};

/// Wrapper for JavaScript SharedArrayBuffer objects
///
/// SharedArrayBuffer represents a raw binary data buffer, used as the backing
/// store for TypedArray views. It provides methods for creating buffers,
/// checking buffer properties, and creating slices.
class SharedArrayBuffer : public emlite::Val {
    explicit SharedArrayBuffer(Handle h) noexcept;

  public:
    /// Creates SharedArrayBuffer from a raw handle
    /// @param h raw JavaScript handle
    /// @returns SharedArrayBuffer wrapper object
    static SharedArrayBuffer take_ownership(Handle h) noexcept;

    /// Creates SharedArrayBuffer from an emlite::Val
    /// @param v emlite::Val to wrap
    explicit SharedArrayBuffer(const emlite::Val &v) noexcept;

    /// Gets the SharedArrayBuffer constructor function
    /// @returns emlite::Val representing the SharedArrayBuffer constructor
    static emlite::Val instance() noexcept;

    /// Creates SharedArrayBuffer with specified byte length
    /// @param byteLen size in bytes
    explicit SharedArrayBuffer(size_t byteLen);

    /// Checks if a value is an SharedArrayBuffer view
    /// @param v value to check
    /// @returns true if value is a TypedArray or DataView
    static bool isView(const emlite::Val &v);

    /// Gets the byte length of the buffer
    /// @returns buffer size in bytes
    [[nodiscard]] size_t byteLength() const;

    /// Creates a slice of the buffer
    /// @param begin start byte offset
    /// @param end end byte offset (SIZE_MAX for end of buffer)
    /// @returns new SharedArrayBuffer containing the slice
    [[nodiscard]] SharedArrayBuffer slice(size_t begin, size_t end = SIZE_MAX) const;
};

/// Generic wrapper for JavaScript TypedArray objects
///
/// TypedArray provides a C++ interface for JavaScript typed arrays like
/// Uint8Array, Int32Array, Float64Array, etc. It supports array operations,
/// iteration, and safe access methods with Option and Result types.
template <typename T>
class TypedArray : public emlite::Val {
    explicit TypedArray(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}

  public:
    /// Creates TypedArray from a raw handle
    /// @param h raw JavaScript handle
    /// @returns TypedArray wrapper object
    static TypedArray take_ownership(Handle h) noexcept { return TypedArray(h); }

    /// Creates TypedArray from an emlite::Val
    /// @param val emlite::Val to wrap
    explicit TypedArray(const emlite::Val &val) noexcept : emlite::Val(val) {}

    /// Creates empty TypedArray
    TypedArray() noexcept : emlite::Val(emlite::Val(emlite::Val::array())) {}

    /// Gets the byte length of the array's backing buffer
    /// @returns size in bytes
    [[nodiscard]] size_t byteLength() const {
        return emlite::Val::get("byteLength").template as<size_t>();
    }

    /// Gets the byte offset into the backing buffer
    /// @returns offset in bytes from start of buffer
    [[nodiscard]] size_t byteOffset() const {
        return emlite::Val::get("byteOffset").template as<size_t>();
    }

    /// Gets the underlying ArrayBuffer
    /// @returns ArrayBuffer that backs this typed array
    [[nodiscard]] ArrayBuffer buffer() const {
        return emlite::Val::get("buffer").template as<ArrayBuffer>();
    }

    /// Creates TypedArray from C array data
    /// @param data pointer to array data
    /// @param len number of elements
    /// @returns new TypedArray containing the data
    static TypedArray new_(T *data, size_t len) {
        auto arr = emlite::Val::array();
        for (auto i = 0; i < len; i++)
            arr.call("push", data[i]);
        return TypedArray(arr);
    }

    /// Creates a copy of this TypedArray
    /// @returns cloned TypedArray
    [[nodiscard]] TypedArray clone() const noexcept { return *this; }

    /// Gets the number of elements in the array
    /// @returns element count
    [[nodiscard]] size_t size() const { return emlite::Val::get("length").template as<size_t>(); }

    /// Checks if the array is empty
    /// @returns true if array has no elements
    [[nodiscard]] bool empty() const { return size() == 0; }

    /// Adds element to end of array
    /// @param v element to add
    void push(const T &v) { emlite::Val::call("push", v); }

    /// Gets element at index without bounds checking
    /// @param i element index
    /// @returns element at index
    T operator[](size_t i) const { return emlite::Val::operator[](i).template as<T>(); }

    /// Safe array access using Option - returns None if index out of bounds
    [[nodiscard]] Option<T> at(size_t index) const noexcept {
        if (index >= size()) {
            return nullopt; // None - out of bounds
        }
        return Option<T>(emlite::Val::operator[](index).template as<T>());
    }

    /// Sets element at index
    /// @param idx element index
    /// @param val value to set
    void set(size_t idx, const T &val) noexcept { emlite::Val::set(idx, val); }

    /// Checks if array contains value
    /// @param val value to search for
    /// @returns true if value is found
    [[nodiscard]] bool has(const T &val) const noexcept { return emlite::Val::has(val); }

    /// Converts array to string representation
    /// @returns string representation of array
    [[nodiscard]] String toString() const noexcept { return String(this->call("toString")); }

    /// Converts array to locale-specific string
    /// @returns locale string representation of array
    [[nodiscard]] String toLocaleString() const noexcept {
        return String(this->call("toLocaleString"));
    }

    /// Removes and returns last element
    /// @returns last element of array
    [[nodiscard]] Option<T> pop() noexcept { return this->call("pop").template as<Option<T>>(); }

    /// Adds elements from another array to end
    /// @param items array to append
    /// @returns new length of array
    [[nodiscard]] size_t push(const TypedArray<T> &items) noexcept {
        return this->call("push", items).template as<size_t>();
    }

    /// Concatenates arrays into new array
    /// @param items array to concatenate
    /// @returns new concatenated array
    [[nodiscard]] TypedArray<T> concat(const TypedArray<T> &items) noexcept {
        return this->call("concat", items).template as<TypedArray<T>>();
    }

    /// Joins array elements into string
    /// @param separator string to insert between elements
    /// @returns joined string
    [[nodiscard]] String join(const String &separator) noexcept {
        return this->call("join", separator).template as<String>();
    }

    /// Reverses array elements in place
    /// @returns reference to this array
    [[nodiscard]] TypedArray<T> reverse() noexcept {
        return this->call("reverse").template as<TypedArray<T>>();
    }

    /// Removes and returns first element
    /// @returns first element of array
    [[nodiscard]] Option<T> shift() noexcept {
        return this->call("shift").template as<Option<T>>();
    }

    /// Sorts array elements using comparison function
    /// @param compareFn function to compare elements
    /// @returns reference to this array
    [[nodiscard]] TypedArray<T> sort(const Function &compareFn) noexcept {
        return this->call("sort", compareFn).template as<TypedArray<T>>();
    }

    /// Removes/adds elements at index
    /// @param start index to start changes
    /// @param deleteCount number of elements to remove
    /// @param items elements to insert
    /// @returns array of removed elements
    [[nodiscard]] TypedArray<T> splice(
        size_t start, size_t deleteCount, const TypedArray<T> &items
    ) noexcept {
        return this->call("splice", start, deleteCount, items).template as<TypedArray<T>>();
    }

    /// Adds elements to beginning of array
    /// @param items elements to prepend
    /// @returns new length of array
    [[nodiscard]] size_t unshift(const TypedArray<T> &items) noexcept {
        return this->call("unshift", items).template as<size_t>();
    }

    /// Finds first index of element
    /// @param searchElement element to find
    /// @param fromIndex index to start search
    /// @returns index of element or -1 if not found
    [[nodiscard]] int indexOf(const T &searchElement, size_t fromIndex = 0) noexcept {
        return this->call("indexOf", searchElement, fromIndex).template as<int>();
    }

    /// Finds last index of element
    /// @param searchElement element to find
    /// @param fromIndex index to start backwards search
    /// @returns index of element or -1 if not found
    [[nodiscard]] int lastIndexOf(const T &searchElement, size_t fromIndex = 0) noexcept {
        return this->call("lastIndexOf", searchElement, fromIndex).template as<int>();
    }

    /// Tests if all elements pass predicate
    /// @param predicate function to test elements
    /// @param thisArg value to use as this in predicate
    /// @returns true if all elements pass test
    [[nodiscard]] bool every(const Function &predicate, const Any &thisArg = Any()) noexcept {
        return this->call("every", predicate, thisArg).template as<bool>();
    }

    /// Tests if any element passes predicate
    /// @param predicate function to test elements
    /// @param thisArg value to use as this in predicate
    /// @returns true if any element passes test
    [[nodiscard]] bool some(const Function &predicate, const Any &thisArg = Any()) noexcept {
        return this->call("some", predicate, thisArg).template as<bool>();
    }

    /// Executes function for each element
    /// @param callbackfn function to execute for each element
    /// @param thisArg value to use as this in callback
    void forEach(const Function &callbackfn, const Any &thisArg = Any()) noexcept {
        this->call("forEach", callbackfn, thisArg);
    }

    /// Creates new array with results of calling function on each element
    /// @param callbackfn function to call on each element
    /// @param thisArg value to use as this in callback
    /// @returns new array with mapped values
    [[nodiscard]] TypedArray<Any> map(
        const Function &callbackfn, const Any &thisArg = Any()
    ) noexcept {
        return this->call("map", callbackfn, thisArg).template as<TypedArray<Any>>();
    }

    /// Creates new array with elements that pass predicate
    /// @param predicate function to test elements
    /// @param thisArg value to use as this in predicate
    /// @returns new filtered array
    [[nodiscard]] TypedArray<T> filter(
        const Function &predicate, const Any &thisArg = Any()
    ) noexcept {
        return this->call("filter", predicate, thisArg).template as<TypedArray<T>>();
    }

    /// Reduces array to single value from left to right
    /// @param callbackfn function to execute on each element
    /// @param initialValue initial value for accumulator
    /// @returns final accumulated value
    [[nodiscard]] T reduce(const Function &callbackfn, const T &initialValue) noexcept;

    /// Reduces array to single value from right to left
    /// @param callbackfn function to execute on each element
    /// @param initialValue initial value for accumulator
    /// @returns final accumulated value
    [[nodiscard]] T reduceRight(const Function &callbackfn, const T &initialValue) noexcept;

    /// Gets iterator for array entries (index, value pairs)
    /// @returns iterator object for entries
    [[nodiscard]] Any entries() noexcept { return this->call("entries").template as<Any>(); }

    /// Gets iterator for array indices
    /// @returns iterator object for keys
    [[nodiscard]] Any keys() noexcept { return this->call("keys").template as<Any>(); }

    /// Gets iterator for array values
    /// @returns iterator object for values
    [[nodiscard]] Any values() noexcept { return this->call("values").template as<Any>(); }

#if EM_HAVE_STD_SPAN
    /// Creates TypedArray from std::span
    /// @param s span containing data
    /// @returns new TypedArray with span data
    static TypedArray from(std::span<T> s) { return from(s.data(), s.size()); }

    /// Converts TypedArray to std::vector
    /// @returns vector containing array elements
    std::vector<T> to_vector() const {
        std::vector<T> vec;
        for (size_t i = 0; i < this->size(); i++) {
            vec.push_back(emlite::Val::get(i).template as<T>());
        }
        return vec;
    }
#endif

    /// Iterator for TypedArray elements
    struct iterator {
        TypedArray *parent; ///< Parent array
        size_t idx;         ///< Current index

        using difference_type = ptrdiff_t;
        using value_type      = T;
        using reference       = T;
        using pointer         = void;

        /// Dereferences iterator to get element
        /// @returns element at current position
        reference operator*() const { return parent->get(idx).template as<reference>(); }

        /// Pre-increment iterator
        /// @returns reference to this iterator
        iterator &operator++() {
            ++idx;
            return *this;
        }

        /// Post-increment iterator
        /// @returns copy of iterator before increment
        const iterator operator++(int) {
            auto c = *this;
            ++*this;
            return c;
        }

        /// Equality comparison for iterators
        /// @param a first iterator
        /// @param b second iterator
        /// @returns true if iterators are equal
        friend bool operator==(const iterator &a, const iterator &b) { return a.idx == b.idx; }

        /// Inequality comparison for iterators
        /// @param a first iterator
        /// @param b second iterator
        /// @returns true if iterators are not equal
        friend bool operator!=(const iterator &a, const iterator &b) { return !(a == b); }
    };

    /// Gets iterator to beginning of array
    /// @returns iterator to first element
    iterator begin() { return {this, 0}; }

    /// Gets iterator to end of array
    /// @returns iterator past last element
    iterator end() { return {this, size()}; }

    /// Const iterator for TypedArray elements
    struct const_iterator : iterator {
        using iterator::iterator;

        /// Dereferences const iterator to get element
        /// @returns element at current position
        T operator*() const { return this->parent->get(this->idx).template as<T>(); }
    };

    /// Gets const iterator to beginning of array
    /// @returns const iterator to first element
    [[nodiscard]] const_iterator begin() const { return {this, 0}; }

    /// Gets const iterator to end of array
    /// @returns const iterator past last element
    [[nodiscard]] const_iterator end() const { return {this, size()}; }
};

DECLARE_ARRAY(Array, Any);

DECLARE_ARRAY(Uint8Array, uint8_t)

DECLARE_ARRAY(Int8Array, int8_t)

DECLARE_ARRAY(Uint16Array, uint16_t)

DECLARE_ARRAY(Int16Array, int16_t)

DECLARE_ARRAY(Uint32Array, uint32_t)

DECLARE_ARRAY(Int32Array, int32_t)

DECLARE_ARRAY(Float32Array, float)

DECLARE_ARRAY(Float64Array, double)

// Note: BigInt arrays work with JavaScript BigInt, not C++ int64_t
// They need special handling since BigInt is a JavaScript object type
class BigInt64Array;
class BigUint64Array;

/// Wrapper for JavaScript DataView objects
///
/// DataView provides a low-level interface for reading and writing multiple
/// number types in a binary ArrayBuffer with explicit endianness control.
/// It's useful for parsing binary data formats and interfacing with binary APIs.
class DataView : public emlite::Val {
    explicit DataView(Handle h) noexcept;

  public:
    /// Creates DataView from a raw handle
    /// @param h raw JavaScript handle
    /// @returns DataView wrapper object
    static DataView take_ownership(Handle h) noexcept;

    /// Creates DataView from an emlite::Val
    /// @param v emlite::Val to wrap
    explicit DataView(const emlite::Val &v) noexcept;

    /// Creates DataView over ArrayBuffer
    /// @param buf ArrayBuffer to view
    /// @param byteOffset start offset in buffer
    /// @param byteLength length of view (SIZE_MAX for entire buffer)
    DataView(const ArrayBuffer &buf, size_t byteOffset = 0, size_t byteLength = SIZE_MAX);

    /// Gets the DataView constructor function
    /// @returns emlite::Val representing the DataView constructor
    static emlite::Val instance() noexcept;

    /// Gets the byte length of the view
    /// @returns view size in bytes
    [[nodiscard]] size_t byteLength() const;

    /// Gets the byte offset into the buffer
    /// @returns offset from start of buffer
    [[nodiscard]] size_t byteOffset() const;

    /// Gets the underlying ArrayBuffer
    /// @returns ArrayBuffer that backs this view
    [[nodiscard]] ArrayBuffer buffer() const;

    /// Reads unsigned 8-bit integer at offset
    /// @param off byte offset
    /// @returns uint8_t value
    [[nodiscard]] Result<uint8_t, Error> getUint8(size_t off) const;

    /// Reads signed 8-bit integer at offset
    /// @param off byte offset
    /// @returns int8_t value
    [[nodiscard]] Result<int8_t, Error> getInt8(size_t off) const;

    /// Reads unsigned 16-bit integer at offset
    /// @param off byte offset
    /// @param littleEndian true for little endian, false for big endian
    /// @returns uint16_t value
    [[nodiscard]] Result<uint16_t, Error> getUint16(size_t off, bool littleEndian = true) const;

    /// Reads signed 16-bit integer at offset
    /// @param off byte offset
    /// @param littleEndian true for little endian, false for big endian
    /// @returns int16_t value
    [[nodiscard]] Result<int16_t, Error> getInt16(size_t off, bool littleEndian = true) const;

    /// Reads unsigned 32-bit integer at offset
    /// @param off byte offset
    /// @param littleEndian true for little endian, false for big endian
    /// @returns uint32_t value
    [[nodiscard]] Result<uint32_t, Error> getUint32(size_t off, bool littleEndian = true) const;

    /// Reads signed 32-bit integer at offset
    /// @param off byte offset
    /// @param littleEndian true for little endian, false for big endian
    /// @returns int32_t value
    [[nodiscard]] Result<int32_t, Error> getInt32(size_t off, bool littleEndian = true) const;

    /// Reads 32-bit float at offset
    /// @param off byte offset
    /// @param littleEndian true for little endian, false for big endian
    /// @returns float value
    [[nodiscard]] Result<float, Error> getFloat32(size_t off, bool littleEndian = true) const;

    /// Reads 64-bit double at offset
    /// @param off byte offset
    /// @param littleEndian true for little endian, false for big endian
    /// @returns double value
    [[nodiscard]] Result<double, Error> getFloat64(size_t off, bool littleEndian = true) const;

    /// Writes unsigned 8-bit integer at offset
    /// @param off byte offset
    /// @param v value to write
    Result<Undefined, Error> setUint8(size_t off, uint8_t v);

    /// Writes signed 8-bit integer at offset
    /// @param off byte offset
    /// @param v value to write
    Result<Undefined, Error> setInt8(size_t off, int8_t v);

    /// Writes unsigned 16-bit integer at offset
    /// @param off byte offset
    /// @param v value to write
    /// @param littleEndian true for little endian, false for big endian
    Result<Undefined, Error> setUint16(size_t off, uint16_t v, bool littleEndian = true);

    /// Writes signed 16-bit integer at offset
    /// @param off byte offset
    /// @param v value to write
    /// @param littleEndian true for little endian, false for big endian
    Result<Undefined, Error> setInt16(size_t off, int16_t v, bool littleEndian = true);

    /// Writes unsigned 32-bit integer at offset
    /// @param off byte offset
    /// @param v value to write
    /// @param littleEndian true for little endian, false for big endian
    Result<Undefined, Error> setUint32(size_t off, uint32_t v, bool littleEndian = true);

    /// Writes signed 32-bit integer at offset
    /// @param off byte offset
    /// @param v value to write
    /// @param littleEndian true for little endian, false for big endian
    Result<Undefined, Error> setInt32(size_t off, int32_t v, bool littleEndian = true);

    /// Writes 32-bit float at offset
    /// @param off byte offset
    /// @param v value to write
    /// @param littleEndian true for little endian, false for big endian
    Result<Undefined, Error> setFloat32(size_t off, float v, bool littleEndian = true);

    /// Writes 64-bit double at offset
    /// @param off byte offset
    /// @param v value to write
    /// @param littleEndian true for little endian, false for big endian
    Result<Undefined, Error> setFloat64(size_t off, double v, bool littleEndian = true);
};

} // namespace jsbind
