#include <webbind/VideoEncoderEncodeOptionsForAvc.hpp>

namespace webbind {

VideoEncoderEncodeOptionsForAvc::VideoEncoderEncodeOptionsForAvc(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
VideoEncoderEncodeOptionsForAvc VideoEncoderEncodeOptionsForAvc::take_ownership(Handle h) noexcept {
    return VideoEncoderEncodeOptionsForAvc(h);
}

VideoEncoderEncodeOptionsForAvc::VideoEncoderEncodeOptionsForAvc(const emlite::Val &val) noexcept: emlite::Val(val) {}

VideoEncoderEncodeOptionsForAvc::VideoEncoderEncodeOptionsForAvc() noexcept: emlite::Val(emlite::Val::object()) {}

VideoEncoderEncodeOptionsForAvc VideoEncoderEncodeOptionsForAvc::clone() const noexcept { return *this; }

unsigned short VideoEncoderEncodeOptionsForAvc::quantizer() const {
    return emlite::Val::get("quantizer").as<unsigned short>();
}

void VideoEncoderEncodeOptionsForAvc::quantizer(unsigned short value) {
    emlite::Val::set("quantizer", value);
}


} // namespace webbind