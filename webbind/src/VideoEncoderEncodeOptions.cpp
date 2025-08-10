#include "webbind/VideoEncoderEncodeOptions.hpp"

using emlite::Val;
namespace webbind {

VideoEncoderEncodeOptions::VideoEncoderEncodeOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
VideoEncoderEncodeOptions VideoEncoderEncodeOptions::take_ownership(Handle h) noexcept {
        return VideoEncoderEncodeOptions(h);
    }
VideoEncoderEncodeOptions::VideoEncoderEncodeOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
VideoEncoderEncodeOptions::VideoEncoderEncodeOptions() noexcept: emlite::Val(emlite::Val::object()) {}
VideoEncoderEncodeOptions VideoEncoderEncodeOptions::clone() const noexcept { return *this; }

bool VideoEncoderEncodeOptions::keyFrame() const {
    return emlite::Val::get("keyFrame").as<bool>();
}

void VideoEncoderEncodeOptions::keyFrame(bool value) {
    emlite::Val::set("keyFrame", value);
}


} // namespace webbind