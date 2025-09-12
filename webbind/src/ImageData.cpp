#include <webbind/ImageData.hpp>
#include <webbind/ImageDataSettings.hpp>

namespace webbind {

ImageData ImageData::take_ownership(Handle h) noexcept {
    return ImageData(h);
}

ImageData ImageData::clone() const noexcept { return *this; }

emlite::Val ImageData::instance() noexcept { return emlite::Val::global("ImageData"); }

ImageData::ImageData(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}

ImageData::ImageData(const emlite::Val &val) noexcept: emlite::Val(val) {}

ImageData::ImageData(unsigned long sw, unsigned long sh) : emlite::Val(emlite::Val::global("ImageData").new_(sw, sh)) {}

ImageData::ImageData(unsigned long sw, unsigned long sh, const ImageDataSettings& settings) : emlite::Val(emlite::Val::global("ImageData").new_(sw, sh, settings)) {}

ImageData::ImageData(const jsbind::Any& data, unsigned long sw) : emlite::Val(emlite::Val::global("ImageData").new_(data, sw)) {}

ImageData::ImageData(const jsbind::Any& data, unsigned long sw, unsigned long sh) : emlite::Val(emlite::Val::global("ImageData").new_(data, sw, sh)) {}

ImageData::ImageData(const jsbind::Any& data, unsigned long sw, unsigned long sh, const ImageDataSettings& settings) : emlite::Val(emlite::Val::global("ImageData").new_(data, sw, sh, settings)) {}

unsigned long ImageData::width() const {
    return emlite::Val::get("width").as<unsigned long>();
}

unsigned long ImageData::height() const {
    return emlite::Val::get("height").as<unsigned long>();
}

jsbind::Any ImageData::data() const {
    return emlite::Val::get("data").as<jsbind::Any>();
}

ImageDataPixelFormat ImageData::pixelFormat() const {
    return emlite::Val::get("pixelFormat").as<ImageDataPixelFormat>();
}

PredefinedColorSpace ImageData::colorSpace() const {
    return emlite::Val::get("colorSpace").as<PredefinedColorSpace>();
}


} // namespace webbind