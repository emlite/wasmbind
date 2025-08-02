#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class Blob;
class PhotoSettings;
class PhotoCapabilities;
class ImageBitmap;
class MediaStreamTrack;


class PhotoSettings : public emlite::Val {
  explicit PhotoSettings(Handle h) noexcept;
public:
    static PhotoSettings take_ownership(Handle h) noexcept;
    explicit PhotoSettings(const emlite::Val &val) noexcept;
    PhotoSettings() noexcept;
    [[nodiscard]] PhotoSettings clone() const noexcept;
    [[nodiscard]] FillLightMode fillLightMode() const;
    void fillLightMode(const FillLightMode& value);
    [[nodiscard]] double imageHeight() const;
    void imageHeight(double value);
    [[nodiscard]] double imageWidth() const;
    void imageWidth(double value);
    [[nodiscard]] bool redEyeReduction() const;
    void redEyeReduction(bool value);
};

class PhotoCapabilities : public emlite::Val {
  explicit PhotoCapabilities(Handle h) noexcept;
public:
    static PhotoCapabilities take_ownership(Handle h) noexcept;
    explicit PhotoCapabilities(const emlite::Val &val) noexcept;
    PhotoCapabilities() noexcept;
    [[nodiscard]] PhotoCapabilities clone() const noexcept;
    [[nodiscard]] RedEyeReduction redEyeReduction() const;
    void redEyeReduction(const RedEyeReduction& value);
    [[nodiscard]] jsbind::Any imageHeight() const;
    void imageHeight(const jsbind::Any& value);
    [[nodiscard]] jsbind::Any imageWidth() const;
    void imageWidth(const jsbind::Any& value);
    [[nodiscard]] jsbind::TypedArray<FillLightMode> fillLightMode() const;
    void fillLightMode(const jsbind::TypedArray<FillLightMode>& value);
};

/// The ImageCapture class.
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

