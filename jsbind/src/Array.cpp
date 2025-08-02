#include <jsbind/Array.hpp>
#include <jsbind/Function.hpp>
#include <jsbind/String.hpp>

using namespace jsbind;

ArrayBuffer::ArrayBuffer(Handle h) noexcept
    : emlite::Val(emlite::Val::take_ownership(h)) {}

ArrayBuffer ArrayBuffer::take_ownership(Handle h) noexcept {
    return ArrayBuffer(h);
}

ArrayBuffer::ArrayBuffer(size_t byteLen)
    : emlite::Val(
          emlite::Val::global("ArrayBuffer").new_(byteLen)
      ) {}

emlite::Val ArrayBuffer::instance() noexcept {
    return emlite::Val::global("ArrayBuffer");
}

size_t ArrayBuffer::byteLength() const {
    return emlite::Val::get("byteLength").as<size_t>();
}

ArrayBuffer ArrayBuffer::slice(size_t begin, size_t end)
    const {
    return emlite::Val::call("slice", begin, end)
        .as<ArrayBuffer>();
}

bool ArrayBuffer::isView(const emlite::Val &v) {
    return emlite::Val::global("ArrayBuffer")
        .call("isView", v)
        .as<bool>();
}

DEFINE_ARRAY(Uint8Array, uint8_t)

DEFINE_ARRAY(Int8Array, int8_t)

DEFINE_ARRAY(Uint32Array, uint32_t)

DEFINE_ARRAY(Int32Array, int32_t)

DEFINE_ARRAY(Float32Array, float)

DEFINE_ARRAY(Float64Array, double)

template <typename T>
String TypedArray<T>::toString() const noexcept {
    return String(this->call("toString"));
}

template <typename T>
String TypedArray<T>::toLocaleString() const noexcept {
    return String(this->call("toLocaleString"));
}

template <typename T>
T TypedArray<T>::pop() noexcept {
    return this->call("pop").template as<T>();
}

template <typename T>
size_t TypedArray<T>::push(const TypedArray<T> &items
) noexcept {
    return this->call("push", items).template as<size_t>();
}

template <typename T>
TypedArray<T> TypedArray<T>::concat(
    const TypedArray<T> &items
) noexcept {
    return this->call("concat", items)
        .template as<TypedArray<T>>();
}

template <typename T>
String TypedArray<T>::join(const String &separator
) noexcept {
    return this->call("join", separator)
        .template as<String>();
}

template <typename T>
TypedArray<T> TypedArray<T>::reverse() noexcept {
    return this->call("reverse").template as<TypedArray<T>>(
    );
}

template <typename T>
T TypedArray<T>::shift() noexcept {
    return this->call("shift").template as<T>();
}

template <typename T>
TypedArray<T> TypedArray<T>::sort(const Function &compareFn
) noexcept {
    return this->call("sort", compareFn)
        .template as<TypedArray<T>>();
}

template <typename T>
TypedArray<T> TypedArray<T>::splice(
    size_t start,
    size_t deleteCount,
    const TypedArray<T> &items
) noexcept {
    return this->call("splice", start, deleteCount, items)
        .template as<TypedArray<T>>();
}

template <typename T>
size_t TypedArray<T>::unshift(const TypedArray<T> &items
) noexcept {
    return this->call("unshift", items)
        .template as<size_t>();
}

template <typename T>
int TypedArray<T>::indexOf(
    const T &searchElement, size_t fromIndex
) noexcept {
    return this->call("indexOf", searchElement, fromIndex)
        .template as<int>();
}

template <typename T>
int TypedArray<T>::lastIndexOf(
    const T &searchElement, size_t fromIndex
) noexcept {
    return this
        ->call("lastIndexOf", searchElement, fromIndex)
        .template as<int>();
}

template <typename T>
bool TypedArray<T>::every(
    const Function &predicate, const Any &thisArg
) noexcept {
    return this->call("every", predicate, thisArg)
        .template as<bool>();
}

template <typename T>
bool TypedArray<T>::some(
    const Function &predicate, const Any &thisArg
) noexcept {
    return this->call("some", predicate, thisArg)
        .template as<bool>();
}

template <typename T>
void TypedArray<T>::forEach(
    const Function &callbackfn, const Any &thisArg
) noexcept {
    this->call("forEach", callbackfn, thisArg);
}

template <typename T>
TypedArray<Any> TypedArray<T>::map(
    const Function &callbackfn, const Any &thisArg
) noexcept {
    return this->call("map", callbackfn, thisArg)
        .template as<TypedArray<Any>>();
}

template <typename T>
TypedArray<T> TypedArray<T>::filter(
    const Function &predicate, const Any &thisArg
) noexcept {
    return this->call("filter", predicate, thisArg)
        .template as<TypedArray<T>>();
}

template <typename T>
Any TypedArray<T>::reduce(
    const Function &callbackfn, const Any &initialValue
) noexcept {
    return this->call("reduce", callbackfn, initialValue)
        .template as<Any>();
}

template <typename T>
Any TypedArray<T>::reduceRight(
    const Function &callbackfn, const Any &initialValue
) noexcept {
    return this
        ->call("reduceRight", callbackfn, initialValue)
        .template as<Any>();
}

template <typename T>
Any TypedArray<T>::entries() noexcept {
    return this->call("entries").template as<Any>();
}

template <typename T>
Any TypedArray<T>::keys() noexcept {
    return this->call("keys").template as<Any>();
}

template <typename T>
Any TypedArray<T>::values() noexcept {
    return this->call("values").template as<Any>();
}

DataView::DataView(Handle h) noexcept
    : emlite::Val(emlite::Val::take_ownership(h)) {}

DataView DataView::take_ownership(Handle h) noexcept {
    return DataView(h);
}
DataView::DataView(const emlite::Val &v) noexcept
    : emlite::Val(v) {}

DataView::DataView(
    const ArrayBuffer &buf,
    size_t byteOffset,
    size_t byteLen
)
    : emlite::Val(emlite::Val::global("DataView")
                      .new_(buf, byteOffset, byteLen)) {}

emlite::Val DataView::instance() noexcept {
    return emlite::Val::global("DataView");
}

size_t DataView::byteLength() const {
    return emlite::Val::get("byteLength").as<size_t>();
}
size_t DataView::byteOffset() const {
    return emlite::Val::get("byteOffset").as<size_t>();
}
ArrayBuffer DataView::buffer() const {
    return emlite::Val::get("buffer").as<ArrayBuffer>();
}

#define JSBIND_DV_GET(Name, Cpp)                           \
    Cpp DataView::Name(size_t off, bool le) const {        \
        return emlite::Val::call(#Name, off, le)           \
            .as<Cpp>();                                    \
    }
#define JSBIND_DV_SET(Name, Cpp)                           \
    void DataView::Name(size_t off, Cpp v, bool le) {      \
        emlite::Val::call(#Name, off, v, le);              \
    }

uint8_t DataView::getUint8(size_t o) const {
    return emlite::Val::call("getUint8", o).as<uint8_t>();
}
int8_t DataView::getInt8(size_t o) const {
    return emlite::Val::call("getInt8", o).as<int8_t>();
}
void DataView::setUint8(size_t o, uint8_t v) {
    emlite::Val::call("setUint8", o, v);
}
void DataView::setInt8(size_t o, int8_t v) {
    emlite::Val::call("setInt8", o, v);
}

JSBIND_DV_GET(getUint16, uint16_t)
JSBIND_DV_GET(getInt16, int16_t)
JSBIND_DV_GET(getUint32, uint32_t)
JSBIND_DV_GET(getInt32, int32_t)
JSBIND_DV_GET(getFloat32, float)
JSBIND_DV_GET(getFloat64, double)

JSBIND_DV_SET(setUint16, uint16_t)
JSBIND_DV_SET(setInt16, int16_t)
JSBIND_DV_SET(setUint32, uint32_t)
JSBIND_DV_SET(setInt32, int32_t)
JSBIND_DV_SET(setFloat32, float)
JSBIND_DV_SET(setFloat64, double)

#undef JSBIND_DV_GET
#undef JSBIND_DV_SET
