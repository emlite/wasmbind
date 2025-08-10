#include <webbind/ImageDecodeOptions.hpp>

namespace webbind {

ImageDecodeOptions::ImageDecodeOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
ImageDecodeOptions ImageDecodeOptions::take_ownership(Handle h) noexcept {
    return ImageDecodeOptions(h);
}

ImageDecodeOptions::ImageDecodeOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}

ImageDecodeOptions::ImageDecodeOptions() noexcept: emlite::Val(emlite::Val::object()) {}

ImageDecodeOptions ImageDecodeOptions::clone() const noexcept { return *this; }

unsigned long ImageDecodeOptions::frameIndex() const {
    return emlite::Val::get("frameIndex").as<unsigned long>();
}

void ImageDecodeOptions::frameIndex(unsigned long value) {
    emlite::Val::set("frameIndex", value);
}

bool ImageDecodeOptions::completeFramesOnly() const {
    return emlite::Val::get("completeFramesOnly").as<bool>();
}

void ImageDecodeOptions::completeFramesOnly(bool value) {
    emlite::Val::set("completeFramesOnly", value);
}


} // namespace webbind