#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "BlobPropertyBag.hpp"

namespace webbind {

class Blob;
class ReadableStream;

/// Interface Blob
/// [`Blob`](https://developer.mozilla.org/en-US/docs/Web/API/Blob)
class Blob : public emlite::Val {
    explicit Blob(Handle h) noexcept;
public:
    explicit Blob(const emlite::Val &val) noexcept;
    static Blob take_ownership(Handle h) noexcept;
    [[nodiscard]] Blob clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new Blob(..)` constructor, creating a new Blob instance
    Blob();
    /// The `new Blob(..)` constructor, creating a new Blob instance
    Blob(const jsbind::TypedArray<jsbind::Any>& blobParts);
    /// The `new Blob(..)` constructor, creating a new Blob instance
    Blob(const jsbind::TypedArray<jsbind::Any>& blobParts, const BlobPropertyBag& options);
    /// Getter of the `size` attribute.
    /// [`Blob.size`](https://developer.mozilla.org/en-US/docs/Web/API/Blob/size)
    [[nodiscard]] long long size() const;
    /// Getter of the `type` attribute.
    /// [`Blob.type`](https://developer.mozilla.org/en-US/docs/Web/API/Blob/type)
    [[nodiscard]] jsbind::String type() const;
    /// The slice method.
    /// [`Blob.slice`](https://developer.mozilla.org/en-US/docs/Web/API/Blob/slice)
    Blob slice();
    /// The slice method.
    /// [`Blob.slice`](https://developer.mozilla.org/en-US/docs/Web/API/Blob/slice)
    Blob slice(long long start);
    /// The slice method.
    /// [`Blob.slice`](https://developer.mozilla.org/en-US/docs/Web/API/Blob/slice)
    Blob slice(long long start, long long end);
    /// The slice method.
    /// [`Blob.slice`](https://developer.mozilla.org/en-US/docs/Web/API/Blob/slice)
    Blob slice(long long start, long long end, const jsbind::String& contentType);
    /// The stream method.
    /// [`Blob.stream`](https://developer.mozilla.org/en-US/docs/Web/API/Blob/stream)
    ReadableStream stream();
    /// The text method.
    /// [`Blob.text`](https://developer.mozilla.org/en-US/docs/Web/API/Blob/text)
    jsbind::Promise<jsbind::String> text();
    /// The arrayBuffer method.
    /// [`Blob.arrayBuffer`](https://developer.mozilla.org/en-US/docs/Web/API/Blob/arrayBuffer)
    jsbind::Promise<jsbind::ArrayBuffer> arrayBuffer();
    /// The bytes method.
    /// [`Blob.bytes`](https://developer.mozilla.org/en-US/docs/Web/API/Blob/bytes)
    jsbind::Promise<jsbind::Uint8Array> bytes();
};

} // namespace webbind