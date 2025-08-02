#include <webbind/ImageCapture.hpp>
#include <webbind/Blob.hpp>
#include <webbind/ImageBitmap.hpp>
#include <webbind/MediaStreamTrack.hpp>


PhotoSettings::PhotoSettings(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
PhotoSettings PhotoSettings::take_ownership(Handle h) noexcept {
        return PhotoSettings(h);
    }
PhotoSettings::PhotoSettings(const emlite::Val &val) noexcept: emlite::Val(val) {}
PhotoSettings::PhotoSettings() noexcept: emlite::Val(emlite::Val::object()) {}
PhotoSettings PhotoSettings::clone() const noexcept { return *this; }

FillLightMode PhotoSettings::fillLightMode() const {
    return emlite::Val::get("fillLightMode").as<FillLightMode>();
}

void PhotoSettings::fillLightMode(const FillLightMode& value) {
    emlite::Val::set("fillLightMode", value);
}

double PhotoSettings::imageHeight() const {
    return emlite::Val::get("imageHeight").as<double>();
}

void PhotoSettings::imageHeight(double value) {
    emlite::Val::set("imageHeight", value);
}

double PhotoSettings::imageWidth() const {
    return emlite::Val::get("imageWidth").as<double>();
}

void PhotoSettings::imageWidth(double value) {
    emlite::Val::set("imageWidth", value);
}

bool PhotoSettings::redEyeReduction() const {
    return emlite::Val::get("redEyeReduction").as<bool>();
}

void PhotoSettings::redEyeReduction(bool value) {
    emlite::Val::set("redEyeReduction", value);
}

PhotoCapabilities::PhotoCapabilities(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
PhotoCapabilities PhotoCapabilities::take_ownership(Handle h) noexcept {
        return PhotoCapabilities(h);
    }
PhotoCapabilities::PhotoCapabilities(const emlite::Val &val) noexcept: emlite::Val(val) {}
PhotoCapabilities::PhotoCapabilities() noexcept: emlite::Val(emlite::Val::object()) {}
PhotoCapabilities PhotoCapabilities::clone() const noexcept { return *this; }

RedEyeReduction PhotoCapabilities::redEyeReduction() const {
    return emlite::Val::get("redEyeReduction").as<RedEyeReduction>();
}

void PhotoCapabilities::redEyeReduction(const RedEyeReduction& value) {
    emlite::Val::set("redEyeReduction", value);
}

jsbind::Any PhotoCapabilities::imageHeight() const {
    return emlite::Val::get("imageHeight").as<jsbind::Any>();
}

void PhotoCapabilities::imageHeight(const jsbind::Any& value) {
    emlite::Val::set("imageHeight", value);
}

jsbind::Any PhotoCapabilities::imageWidth() const {
    return emlite::Val::get("imageWidth").as<jsbind::Any>();
}

void PhotoCapabilities::imageWidth(const jsbind::Any& value) {
    emlite::Val::set("imageWidth", value);
}

jsbind::TypedArray<FillLightMode> PhotoCapabilities::fillLightMode() const {
    return emlite::Val::get("fillLightMode").as<jsbind::TypedArray<FillLightMode>>();
}

void PhotoCapabilities::fillLightMode(const jsbind::TypedArray<FillLightMode>& value) {
    emlite::Val::set("fillLightMode", value);
}

ImageCapture ImageCapture::take_ownership(Handle h) noexcept {
        return ImageCapture(h);
    }
ImageCapture ImageCapture::clone() const noexcept { return *this; }
emlite::Val ImageCapture::instance() noexcept { return emlite::Val::global("ImageCapture"); }
ImageCapture::ImageCapture(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
ImageCapture::ImageCapture(const emlite::Val &val) noexcept: emlite::Val(val) {}


ImageCapture::ImageCapture(const MediaStreamTrack& videoTrack) : emlite::Val(emlite::Val::global("ImageCapture").new_(videoTrack)) {}

jsbind::Promise<Blob> ImageCapture::takePhoto() {
    return emlite::Val::call("takePhoto").as<jsbind::Promise<Blob>>();
}

jsbind::Promise<Blob> ImageCapture::takePhoto(const PhotoSettings& photoSettings) {
    return emlite::Val::call("takePhoto", photoSettings).as<jsbind::Promise<Blob>>();
}

jsbind::Promise<PhotoCapabilities> ImageCapture::getPhotoCapabilities() {
    return emlite::Val::call("getPhotoCapabilities").as<jsbind::Promise<PhotoCapabilities>>();
}

jsbind::Promise<PhotoSettings> ImageCapture::getPhotoSettings() {
    return emlite::Val::call("getPhotoSettings").as<jsbind::Promise<PhotoSettings>>();
}

jsbind::Promise<ImageBitmap> ImageCapture::grabFrame() {
    return emlite::Val::call("grabFrame").as<jsbind::Promise<ImageBitmap>>();
}

MediaStreamTrack ImageCapture::track() const {
    return emlite::Val::get("track").as<MediaStreamTrack>();
}

