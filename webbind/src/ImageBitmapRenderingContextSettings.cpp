#include <webbind/ImageBitmapRenderingContextSettings.hpp>

using emlite::Val;
namespace webbind {

ImageBitmapRenderingContextSettings::ImageBitmapRenderingContextSettings(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
ImageBitmapRenderingContextSettings ImageBitmapRenderingContextSettings::take_ownership(Handle h) noexcept {
        return ImageBitmapRenderingContextSettings(h);
    }
ImageBitmapRenderingContextSettings::ImageBitmapRenderingContextSettings(const emlite::Val &val) noexcept: emlite::Val(val) {}
ImageBitmapRenderingContextSettings::ImageBitmapRenderingContextSettings() noexcept: emlite::Val(emlite::Val::object()) {}
ImageBitmapRenderingContextSettings ImageBitmapRenderingContextSettings::clone() const noexcept { return *this; }

bool ImageBitmapRenderingContextSettings::alpha() const {
    return emlite::Val::get("alpha").as<bool>();
}

void ImageBitmapRenderingContextSettings::alpha(bool value) {
    emlite::Val::set("alpha", value);
}


} // namespace webbind