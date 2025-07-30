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
    PhotoSettings clone() const noexcept;
    FillLightMode fillLightMode() const;
    void fillLightMode(const FillLightMode& value);
    double imageHeight() const;
    void imageHeight(double value);
    double imageWidth() const;
    void imageWidth(double value);
    bool redEyeReduction() const;
    void redEyeReduction(bool value);
};

class PhotoCapabilities : public emlite::Val {
  explicit PhotoCapabilities(Handle h) noexcept;
public:
    static PhotoCapabilities take_ownership(Handle h) noexcept;
    explicit PhotoCapabilities(const emlite::Val &val) noexcept;
    PhotoCapabilities() noexcept;
    PhotoCapabilities clone() const noexcept;
    RedEyeReduction redEyeReduction() const;
    void redEyeReduction(const RedEyeReduction& value);
    jsbind::Any imageHeight() const;
    void imageHeight(const jsbind::Any& value);
    jsbind::Any imageWidth() const;
    void imageWidth(const jsbind::Any& value);
    jsbind::TypedArray<FillLightMode> fillLightMode() const;
    void fillLightMode(const jsbind::TypedArray<FillLightMode>& value);
};

class ImageCapture : public emlite::Val {
    explicit ImageCapture(Handle h) noexcept;

public:
    explicit ImageCapture(const emlite::Val &val) noexcept;
    static ImageCapture take_ownership(Handle h) noexcept;

    ImageCapture clone() const noexcept;
    ImageCapture(const MediaStreamTrack& videoTrack);
    jsbind::Promise<Blob> takePhoto();
    jsbind::Promise<Blob> takePhoto(const PhotoSettings& photoSettings);
    jsbind::Promise<PhotoCapabilities> getPhotoCapabilities();
    jsbind::Promise<PhotoSettings> getPhotoSettings();
    jsbind::Promise<ImageBitmap> grabFrame();
    MediaStreamTrack track() const;
};

