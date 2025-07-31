#pragma once

#include "Any.hpp"
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

class String;
class Function;

class ArrayBuffer : public emlite::Val {
    explicit ArrayBuffer(Handle h) noexcept;

  public:
    static ArrayBuffer take_ownership(Handle h) noexcept;
    explicit ArrayBuffer(const emlite::Val &v) noexcept;
    explicit ArrayBuffer(size_t byteLen);

    static bool isView(const emlite::Val &v);

    [[nodiscard]] size_t byteLength() const;

    [[nodiscard]] ArrayBuffer slice(
        size_t begin, size_t end = SIZE_MAX
    ) const;
};

template <typename T>
class TypedArray : public emlite::Val {
    explicit TypedArray(Handle h) noexcept
        : emlite::Val(emlite::Val::take_ownership(h)) {}

  public:
    static TypedArray take_ownership(Handle h) noexcept {
        return TypedArray(h);
    }
    explicit TypedArray(const emlite::Val &val) noexcept
        : emlite::Val(val) {}

    TypedArray() noexcept
        : emlite::Val(emlite::Val(emlite::Val::array())) {}

    [[nodiscard]] size_t byteLength() const {
        return emlite::Val::get("byteLength")
            .template as<size_t>();
    }

    [[nodiscard]] size_t byteOffset() const {
        return emlite::Val::get("byteOffset")
            .template as<size_t>();
    }

    [[nodiscard]] ArrayBuffer buffer() const {
        return emlite::Val::get("buffer")
            .template as<ArrayBuffer>();
    }

    static TypedArray new_(T *data, size_t len) {
        auto arr = emlite::Val::array();
        for (auto i = 0; i < len; i++)
            arr.call("push", data[i]);
        return TypedArray(arr);
    }

    [[nodiscard]] TypedArray clone() const noexcept {
        return *this;
    }

    [[nodiscard]] size_t size() const {
        return emlite::Val::get("length")
            .template as<size_t>();
    }

    [[nodiscard]] bool empty() const { return size() == 0; }

    void push(const T &v) { emlite::Val::call("push", v); }

    T operator[](size_t i) const {
        return emlite::Val::operator[](i).template as<T>();
    }

    void set(size_t idx, const T &val) noexcept;

    bool has(const T &val) const noexcept;

    [[nodiscard]] String toString() const noexcept;
    [[nodiscard]] String toLocaleString() const noexcept;
    [[nodiscard]] T pop() noexcept;
    [[nodiscard]] size_t push(const TypedArray<T> &items
    ) noexcept;
    [[nodiscard]] TypedArray<T> concat(
        const TypedArray<T> &items
    ) noexcept;
    [[nodiscard]] String join(const String &separator
    ) noexcept;
    [[nodiscard]] TypedArray<T> reverse() noexcept;
    [[nodiscard]] T shift() noexcept;
    [[nodiscard]] TypedArray<T> sort(
        const Function &compareFn
    ) noexcept;
    [[nodiscard]] TypedArray<T> splice(
        size_t start,
        size_t deleteCount,
        const TypedArray<T> &items
    ) noexcept;
    [[nodiscard]] size_t unshift(const TypedArray<T> &items
    ) noexcept;
    [[nodiscard]] int indexOf(
        const T &searchElement, size_t fromIndex = 0
    ) noexcept;
    [[nodiscard]] int lastIndexOf(
        const T &searchElement, size_t fromIndex = 0
    ) noexcept;
    [[nodiscard]] bool every(
        const Function &predicate,
        const Any &thisArg = Any()
    ) noexcept;
    [[nodiscard]] bool some(
        const Function &predicate,
        const Any &thisArg = Any()
    ) noexcept;
    void forEach(
        const Function &callbackfn,
        const Any &thisArg = Any()
    ) noexcept;
    [[nodiscard]] TypedArray<Any> map(
        const Function &callbackfn,
        const Any &thisArg = Any()
    ) noexcept;
    [[nodiscard]] TypedArray<T> filter(
        const Function &predicate,
        const Any &thisArg = Any()
    ) noexcept;
    [[nodiscard]] Any reduce(
        const Function &callbackfn,
        const Any &initialValue = Any()
    ) noexcept;
    [[nodiscard]] Any reduceRight(
        const Function &callbackfn,
        const Any &initialValue = Any()
    ) noexcept;
    [[nodiscard]] Any entries() noexcept;
    [[nodiscard]] Any keys() noexcept;
    [[nodiscard]] Any values() noexcept;

#if EM_HAVE_STD_SPAN
    static TypedArray from(std::span<T> s) {
        return from(s.data(), s.size());
    }
    std::vector<T> to_vector() const {
        std::vector<int_ty> vec;
        for (size_t i = 0; i < this->size(); i++) {
            vec.push_back(this->get(i).as<int_ty>());
        }
        return vec;
    }
#endif

    struct iterator {
        TypedArray *parent;
        size_t idx;

        using difference_type = ptrdiff_t;
        using value_type      = T;
        using reference       = T;
        using pointer         = void;

        reference operator*() const {
            return parent->get(idx).template as<reference>(
            );
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
            return this->parent->get(this->idx)
                .template as<T>();
        }
    };
    const_iterator begin() const {
        return {const_cast<TypedArray *>(this), 0};
    }
    const_iterator end() const {
        return {const_cast<TypedArray *>(this), size()};
    }
};

DECLARE_ARRAY(Array, Any);

DECLARE_ARRAY(Uint8Array, uint8_t)

DECLARE_ARRAY(Int8Array, int8_t)

DECLARE_ARRAY(Uint32Array, uint32_t)

DECLARE_ARRAY(Int32Array, int32_t)

DECLARE_ARRAY(Float32Array, float)

DECLARE_ARRAY(Float64Array, double)

class DataView : public emlite::Val {
    explicit DataView(Handle h) noexcept;

  public:
    static DataView take_ownership(Handle h) noexcept;
    explicit DataView(const emlite::Val &v) noexcept;
    DataView(
        const ArrayBuffer &buf,
        size_t byteOffset = 0,
        size_t byteLength = SIZE_MAX
    );

    [[nodiscard]] size_t byteLength() const;
    [[nodiscard]] size_t byteOffset() const;
    [[nodiscard]] ArrayBuffer buffer() const;

    [[nodiscard]] uint8_t getUint8(size_t off) const;
    [[nodiscard]] int8_t getInt8(size_t off) const;
    [[nodiscard]] uint16_t getUint16(
        size_t off, bool littleEndian = true
    ) const;
    [[nodiscard]] int16_t getInt16(
        size_t off, bool littleEndian = true
    ) const;
    [[nodiscard]] uint32_t getUint32(
        size_t off, bool littleEndian = true
    ) const;
    [[nodiscard]] int32_t getInt32(
        size_t off, bool littleEndian = true
    ) const;
    [[nodiscard]] float getFloat32(
        size_t off, bool littleEndian = true
    ) const;
    [[nodiscard]] double getFloat64(
        size_t off, bool littleEndian = true
    ) const;

    void setUint8(size_t off, uint8_t v);
    void setInt8(size_t off, int8_t v);
    void setUint16(
        size_t off, uint16_t v, bool littleEndian = true
    );
    void setInt16(
        size_t off, int16_t v, bool littleEndian = true
    );
    void setUint32(
        size_t off, uint32_t v, bool littleEndian = true
    );
    void setInt32(
        size_t off, int32_t v, bool littleEndian = true
    );
    void setFloat32(
        size_t off, float v, bool littleEndian = true
    );
    void setFloat64(
        size_t off, double v, bool littleEndian = true
    );
};

} // namespace jsbind
