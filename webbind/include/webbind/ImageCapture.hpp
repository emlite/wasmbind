#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "PhotoSettings.hpp"
#include "PhotoCapabilities.hpp"

namespace webbind {

class MediaStreamTrack;
class Blob;
class ImageBitmap;

/// Interface ImageCapture
/// [`ImageCapture`](https://developer.mozilla.org/en-US/docs/Web/API/ImageCapture)
class ImageCapture : public emlite::Val {
    explicit ImageCapture(Handle h) noexcept;
public:
    explicit ImageCapture(const emlite::Val &val) noexcept;
    static ImageCapture take_ownership(Handle h) noexcept;
    [[nodiscard]] ImageCapture clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new ImageCapture(..)` constructor, creating a new ImageCapture instance
    ImageCapture(const MediaStreamTrack& videoTrack);
    /// The takePhoto method.
    /// [`ImageCapture.takePhoto`](https://developer.mozilla.org/en-US/docs/Web/API/ImageCapture/takePhoto)
    jsbind::Promise<Blob> takePhoto();
    /// The takePhoto method.
    /// [`ImageCapture.takePhoto`](https://developer.mozilla.org/en-US/docs/Web/API/ImageCapture/takePhoto)
    jsbind::Promise<Blob> takePhoto(const PhotoSettings& photoSettings);
    /// The getPhotoCapabilities method.
    /// [`ImageCapture.getPhotoCapabilities`](https://developer.mozilla.org/en-US/docs/Web/API/ImageCapture/getPhotoCapabilities)
    jsbind::Promise<PhotoCapabilities> getPhotoCapabilities();
    /// The getPhotoSettings method.
    /// [`ImageCapture.getPhotoSettings`](https://developer.mozilla.org/en-US/docs/Web/API/ImageCapture/getPhotoSettings)
    jsbind::Promise<PhotoSettings> getPhotoSettings();
    /// The grabFrame method.
    /// [`ImageCapture.grabFrame`](https://developer.mozilla.org/en-US/docs/Web/API/ImageCapture/grabFrame)
    jsbind::Promise<ImageBitmap> grabFrame();
    /// Getter of the `track` attribute.
    /// [`ImageCapture.track`](https://developer.mozilla.org/en-US/docs/Web/API/ImageCapture/track)
    [[nodiscard]] MediaStreamTrack track() const;
};

} // namespace webbind