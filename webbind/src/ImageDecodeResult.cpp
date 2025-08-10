#include "webbind/ImageDecodeResult.hpp"
#include "webbind/VideoFrame.hpp"

using emlite::Val;
namespace webbind {

ImageDecodeResult::ImageDecodeResult(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
ImageDecodeResult ImageDecodeResult::take_ownership(Handle h) noexcept {
        return ImageDecodeResult(h);
    }
ImageDecodeResult::ImageDecodeResult(const emlite::Val &val) noexcept: emlite::Val(val) {}
ImageDecodeResult::ImageDecodeResult() noexcept: emlite::Val(emlite::Val::object()) {}
ImageDecodeResult ImageDecodeResult::clone() const noexcept { return *this; }

VideoFrame ImageDecodeResult::image() const {
    return emlite::Val::get("image").as<VideoFrame>();
}

void ImageDecodeResult::image(const VideoFrame& value) {
    emlite::Val::set("image", value);
}

bool ImageDecodeResult::complete() const {
    return emlite::Val::get("complete").as<bool>();
}

void ImageDecodeResult::complete(bool value) {
    emlite::Val::set("complete", value);
}


} // namespace webbind