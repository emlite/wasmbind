#pragma once

#include "Sequence.hpp"
#include "utils.hpp"
#include <emlite/emlite.hpp>
#include <stddef.h>
#include <stdint.h>

namespace jsbind {
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
class TypedArray : public Sequence<T> {
    explicit TypedArray(Handle h) noexcept
        : Sequence<T>(Sequence<T>::take_ownership(h)) {}

  public:
    static TypedArray take_ownership(Handle h) noexcept {
        return TypedArray(h);
    }
    explicit TypedArray(const emlite::Val &val) noexcept
        : Sequence<T>(val) {}

    [[nodiscard]] size_t byteLength() const {
        return Sequence<T>::get("byteLength")
            .template as<size_t>();
    }

    [[nodiscard]] size_t byteOffset() const {
        return Sequence<T>::get("byteOffset")
            .template as<size_t>();
    }

    [[nodiscard]] ArrayBuffer buffer() const {
        return Sequence<T>::get("buffer")
            .template as<ArrayBuffer>();
    }

    [[nodiscard]] TypedArray clone() const noexcept {
        return *this;
    }
};

DECLARE_ARRAY(Uint8Array, uint8_t)

DECLARE_ARRAY(Int8Array, int8_t)

DECLARE_ARRAY(Uint32Array, uint32_t)

DECLARE_ARRAY(Int32Array, int32_t)

DECLARE_ARRAY(Float32Array, float)

DECLARE_ARRAY(Float64Array, double)

template <typename T>
class ObservableArray : public TypedArray<T> {
    explicit ObservableArray(Handle h) noexcept;

  public:
    using TypedArray<T>::call;
    static ObservableArray take_ownership(Handle h
    ) noexcept;
    explicit ObservableArray(const emlite::Val &val
    ) noexcept;
    [[nodiscard]] ObservableArray subarray(
        size_t begin, size_t end = SIZE_MAX
    ) const;
    [[nodiscard]] ObservableArray clone() const noexcept {
        return *this;
    }
};

template <typename T>
ObservableArray<T>::ObservableArray(const emlite::Val &val
) noexcept
    : TypedArray<T>(val) {}

template <typename T>
ObservableArray<T>::ObservableArray(Handle h) noexcept
    : TypedArray<T>(TypedArray<T>::take_ownership(h)) {}

template <typename T>
ObservableArray<T> ObservableArray<T>::take_ownership(
    Handle h
) noexcept {
    return ObservableArray(h);
}

template <typename T>
[[nodiscard]] ObservableArray<T> ObservableArray<
    T>::subarray(size_t begin, size_t end) const {
    return TypedArray<uint8_t>::call("subarray", begin, end)
        .template as<ObservableArray<T>>();
}

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

template <typename T>
class FrozenArray : public TypedArray<T> {
    explicit FrozenArray(Handle h) noexcept;

  public:
    using TypedArray<T>::call;
    static FrozenArray take_ownership(Handle h) noexcept;
    explicit FrozenArray(const emlite::Val &val) noexcept;
    [[nodiscard]] FrozenArray subarray(
        size_t begin, size_t end = SIZE_MAX
    ) const;
    [[nodiscard]] FrozenArray clone() const {
        return *this;
    }
};

template <typename T>
FrozenArray<T>::FrozenArray(const emlite::Val &val) noexcept
    : TypedArray<T>(val) {}

template <typename T>
FrozenArray<T>::FrozenArray(Handle h) noexcept
    : TypedArray<T>(TypedArray<T>::take_ownership(h)) {}

template <typename T>
FrozenArray<T> FrozenArray<T>::take_ownership(Handle h
) noexcept {
    return FrozenArray(h);
}

template <typename T>
[[nodiscard]] FrozenArray<T> FrozenArray<T>::subarray(
    size_t begin, size_t end
) const {
    return TypedArray<uint8_t>::call("subarray", begin, end)
        .template as<FrozenArray<T>>();
}
} // namespace jsbind
