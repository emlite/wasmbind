#include <webbind/ImageDataSettings.hpp>

namespace webbind {

ImageDataSettings::ImageDataSettings(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
ImageDataSettings ImageDataSettings::take_ownership(Handle h) noexcept {
    return ImageDataSettings(h);
}

ImageDataSettings::ImageDataSettings(const emlite::Val &val) noexcept: emlite::Val(val) {}

ImageDataSettings::ImageDataSettings() noexcept: emlite::Val(emlite::Val::object()) {}

ImageDataSettings ImageDataSettings::clone() const noexcept { return *this; }

PredefinedColorSpace ImageDataSettings::colorSpace() const {
    return emlite::Val::get("colorSpace").as<PredefinedColorSpace>();
}

void ImageDataSettings::colorSpace(const PredefinedColorSpace& value) {
    emlite::Val::set("colorSpace", value);
}

ImageDataPixelFormat ImageDataSettings::pixelFormat() const {
    return emlite::Val::get("pixelFormat").as<ImageDataPixelFormat>();
}

void ImageDataSettings::pixelFormat(const ImageDataPixelFormat& value) {
    emlite::Val::set("pixelFormat", value);
}


} // namespace webbind