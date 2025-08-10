#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class ImageDecoderInit;
class ImageTrackList;
class ImageDecodeResult;
class ImageDecodeOptions;

/// Interface ImageDecoder
/// [`ImageDecoder`](https://developer.mozilla.org/en-US/docs/Web/API/ImageDecoder)
class ImageDecoder : public emlite::Val {
    explicit ImageDecoder(Handle h) noexcept;
public:
    explicit ImageDecoder(const emlite::Val &val) noexcept;
    static ImageDecoder take_ownership(Handle h) noexcept;
    [[nodiscard]] ImageDecoder clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new ImageDecoder(..)` constructor, creating a new ImageDecoder instance
    ImageDecoder(const ImageDecoderInit& init);
    /// [`ImageDecoder.type`](https://developer.mozilla.org/en-US/docs/Web/API/ImageDecoder/type)
    /// [`ImageDecoder.type`](https://developer.mozilla.org/en-US/docs/Web/API/ImageDecoder/type)
    [[nodiscard]] jsbind::String type() const;
    /// [`ImageDecoder.complete`](https://developer.mozilla.org/en-US/docs/Web/API/ImageDecoder/complete)
    /// [`ImageDecoder.complete`](https://developer.mozilla.org/en-US/docs/Web/API/ImageDecoder/complete)
    [[nodiscard]] bool complete() const;
    /// [`ImageDecoder.completed`](https://developer.mozilla.org/en-US/docs/Web/API/ImageDecoder/completed)
    /// [`ImageDecoder.completed`](https://developer.mozilla.org/en-US/docs/Web/API/ImageDecoder/completed)
    [[nodiscard]] jsbind::Promise<jsbind::Undefined> completed() const;
    /// [`ImageDecoder.tracks`](https://developer.mozilla.org/en-US/docs/Web/API/ImageDecoder/tracks)
    /// [`ImageDecoder.tracks`](https://developer.mozilla.org/en-US/docs/Web/API/ImageDecoder/tracks)
    [[nodiscard]] ImageTrackList tracks() const;
    /// The decode method.
    /// [`ImageDecoder.decode`](https://developer.mozilla.org/en-US/docs/Web/API/ImageDecoder/decode)
    jsbind::Promise<ImageDecodeResult> decode();
    /// The decode method.
    /// [`ImageDecoder.decode`](https://developer.mozilla.org/en-US/docs/Web/API/ImageDecoder/decode)
    jsbind::Promise<ImageDecodeResult> decode(const ImageDecodeOptions& options);
    /// The reset method.
    /// [`ImageDecoder.reset`](https://developer.mozilla.org/en-US/docs/Web/API/ImageDecoder/reset)
    jsbind::Undefined reset();
    /// The close method.
    /// [`ImageDecoder.close`](https://developer.mozilla.org/en-US/docs/Web/API/ImageDecoder/close)
    jsbind::Undefined close();
    /// The isTypeSupported method.
    /// [`ImageDecoder.isTypeSupported`](https://developer.mozilla.org/en-US/docs/Web/API/ImageDecoder/isTypeSupported)
    static jsbind::Promise<bool> isTypeSupported(const jsbind::String& type);
};

} // namespace webbind