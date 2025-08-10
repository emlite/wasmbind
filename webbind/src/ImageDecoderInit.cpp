#include <webbind/ImageDecoderInit.hpp>

using emlite::Val;
namespace webbind {

ImageDecoderInit::ImageDecoderInit(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
ImageDecoderInit ImageDecoderInit::take_ownership(Handle h) noexcept {
        return ImageDecoderInit(h);
    }
ImageDecoderInit::ImageDecoderInit(const emlite::Val &val) noexcept: emlite::Val(val) {}
ImageDecoderInit::ImageDecoderInit() noexcept: emlite::Val(emlite::Val::object()) {}
ImageDecoderInit ImageDecoderInit::clone() const noexcept { return *this; }

jsbind::String ImageDecoderInit::type() const {
    return emlite::Val::get("type").as<jsbind::String>();
}

void ImageDecoderInit::type(const jsbind::String& value) {
    emlite::Val::set("type", value);
}

jsbind::Any ImageDecoderInit::data() const {
    return emlite::Val::get("data").as<jsbind::Any>();
}

void ImageDecoderInit::data(const jsbind::Any& value) {
    emlite::Val::set("data", value);
}

ColorSpaceConversion ImageDecoderInit::colorSpaceConversion() const {
    return emlite::Val::get("colorSpaceConversion").as<ColorSpaceConversion>();
}

void ImageDecoderInit::colorSpaceConversion(const ColorSpaceConversion& value) {
    emlite::Val::set("colorSpaceConversion", value);
}

unsigned long ImageDecoderInit::desiredWidth() const {
    return emlite::Val::get("desiredWidth").as<unsigned long>();
}

void ImageDecoderInit::desiredWidth(unsigned long value) {
    emlite::Val::set("desiredWidth", value);
}

unsigned long ImageDecoderInit::desiredHeight() const {
    return emlite::Val::get("desiredHeight").as<unsigned long>();
}

void ImageDecoderInit::desiredHeight(unsigned long value) {
    emlite::Val::set("desiredHeight", value);
}

bool ImageDecoderInit::preferAnimation() const {
    return emlite::Val::get("preferAnimation").as<bool>();
}

void ImageDecoderInit::preferAnimation(bool value) {
    emlite::Val::set("preferAnimation", value);
}

jsbind::TypedArray<jsbind::ArrayBuffer> ImageDecoderInit::transfer() const {
    return emlite::Val::get("transfer").as<jsbind::TypedArray<jsbind::ArrayBuffer>>();
}

void ImageDecoderInit::transfer(const jsbind::TypedArray<jsbind::ArrayBuffer>& value) {
    emlite::Val::set("transfer", value);
}


} // namespace webbind