#include <webbind/ImageCapture.hpp>
#include <webbind/MediaStreamTrack.hpp>
#include <webbind/Blob.hpp>
#include <webbind/PhotoSettings.hpp>
#include <webbind/PhotoCapabilities.hpp>
#include <webbind/ImageBitmap.hpp>

namespace webbind {

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


} // namespace webbind