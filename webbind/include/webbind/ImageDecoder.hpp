#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class ImageTrackList;
class ImageDecodeResult;
class ImageDecodeOptions;
class VideoFrame;


class ImageDecodeResult : public emlite::Val {
  explicit ImageDecodeResult(Handle h) noexcept;
public:
    static ImageDecodeResult take_ownership(Handle h) noexcept;
    explicit ImageDecodeResult(const emlite::Val &val) noexcept;
    ImageDecodeResult() noexcept;
    [[nodiscard]] ImageDecodeResult clone() const noexcept;
    [[nodiscard]] VideoFrame image() const;
    void image(const VideoFrame& value);
    [[nodiscard]] bool complete() const;
    void complete(bool value);
};

class ImageDecodeOptions : public emlite::Val {
  explicit ImageDecodeOptions(Handle h) noexcept;
public:
    static ImageDecodeOptions take_ownership(Handle h) noexcept;
    explicit ImageDecodeOptions(const emlite::Val &val) noexcept;
    ImageDecodeOptions() noexcept;
    [[nodiscard]] ImageDecodeOptions clone() const noexcept;
    [[nodiscard]] unsigned long frameIndex() const;
    void frameIndex(unsigned long value);
    [[nodiscard]] bool completeFramesOnly() const;
    void completeFramesOnly(bool value);
};

/// The ImageDecoder class.
/// [`ImageDecoder`](https://developer.mozilla.org/en-US/docs/Web/API/ImageDecoder)
class ImageDecoder : public emlite::Val {
    explicit ImageDecoder(Handle h) noexcept;

public:
    explicit ImageDecoder(const emlite::Val &val) noexcept;
    static ImageDecoder take_ownership(Handle h) noexcept;

    [[nodiscard]] ImageDecoder clone() const noexcept;
    /// The `new ImageDecoder(..)` constructor, creating a new ImageDecoder instance
    ImageDecoder(const jsbind::Any& init);
    /// Getter of the `type` attribute.
    /// [`ImageDecoder.type`](https://developer.mozilla.org/en-US/docs/Web/API/ImageDecoder/type)
    [[nodiscard]] jsbind::String type() const;
    /// Getter of the `complete` attribute.
    /// [`ImageDecoder.complete`](https://developer.mozilla.org/en-US/docs/Web/API/ImageDecoder/complete)
    [[nodiscard]] bool complete() const;
    /// Getter of the `completed` attribute.
    /// [`ImageDecoder.completed`](https://developer.mozilla.org/en-US/docs/Web/API/ImageDecoder/completed)
    [[nodiscard]] jsbind::Promise<jsbind::Undefined> completed() const;
    /// Getter of the `tracks` attribute.
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

