#include "webbind/ImageEncodeOptions.hpp"

using emlite::Val;
namespace webbind {

ImageEncodeOptions::ImageEncodeOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
ImageEncodeOptions ImageEncodeOptions::take_ownership(Handle h) noexcept {
        return ImageEncodeOptions(h);
    }
ImageEncodeOptions::ImageEncodeOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
ImageEncodeOptions::ImageEncodeOptions() noexcept: emlite::Val(emlite::Val::object()) {}
ImageEncodeOptions ImageEncodeOptions::clone() const noexcept { return *this; }

jsbind::String ImageEncodeOptions::type() const {
    return emlite::Val::get("type").as<jsbind::String>();
}

void ImageEncodeOptions::type(const jsbind::String& value) {
    emlite::Val::set("type", value);
}

double ImageEncodeOptions::quality() const {
    return emlite::Val::get("quality").as<double>();
}

void ImageEncodeOptions::quality(double value) {
    emlite::Val::set("quality", value);
}


} // namespace webbind