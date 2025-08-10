#include <webbind/ImageBitmapOptions.hpp>

namespace webbind {

ImageBitmapOptions::ImageBitmapOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
ImageBitmapOptions ImageBitmapOptions::take_ownership(Handle h) noexcept {
    return ImageBitmapOptions(h);
}

ImageBitmapOptions::ImageBitmapOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}

ImageBitmapOptions::ImageBitmapOptions() noexcept: emlite::Val(emlite::Val::object()) {}

ImageBitmapOptions ImageBitmapOptions::clone() const noexcept { return *this; }

ImageOrientation ImageBitmapOptions::imageOrientation() const {
    return emlite::Val::get("imageOrientation").as<ImageOrientation>();
}

void ImageBitmapOptions::imageOrientation(const ImageOrientation& value) {
    emlite::Val::set("imageOrientation", value);
}

PremultiplyAlpha ImageBitmapOptions::premultiplyAlpha() const {
    return emlite::Val::get("premultiplyAlpha").as<PremultiplyAlpha>();
}

void ImageBitmapOptions::premultiplyAlpha(const PremultiplyAlpha& value) {
    emlite::Val::set("premultiplyAlpha", value);
}

ColorSpaceConversion ImageBitmapOptions::colorSpaceConversion() const {
    return emlite::Val::get("colorSpaceConversion").as<ColorSpaceConversion>();
}

void ImageBitmapOptions::colorSpaceConversion(const ColorSpaceConversion& value) {
    emlite::Val::set("colorSpaceConversion", value);
}

unsigned long ImageBitmapOptions::resizeWidth() const {
    return emlite::Val::get("resizeWidth").as<unsigned long>();
}

void ImageBitmapOptions::resizeWidth(unsigned long value) {
    emlite::Val::set("resizeWidth", value);
}

unsigned long ImageBitmapOptions::resizeHeight() const {
    return emlite::Val::get("resizeHeight").as<unsigned long>();
}

void ImageBitmapOptions::resizeHeight(unsigned long value) {
    emlite::Val::set("resizeHeight", value);
}

ResizeQuality ImageBitmapOptions::resizeQuality() const {
    return emlite::Val::get("resizeQuality").as<ResizeQuality>();
}

void ImageBitmapOptions::resizeQuality(const ResizeQuality& value) {
    emlite::Val::set("resizeQuality", value);
}


} // namespace webbind