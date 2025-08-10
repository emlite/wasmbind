#include <webbind/VideoEncoderEncodeOptionsForAv1.hpp>

namespace webbind {

VideoEncoderEncodeOptionsForAv1::VideoEncoderEncodeOptionsForAv1(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
VideoEncoderEncodeOptionsForAv1 VideoEncoderEncodeOptionsForAv1::take_ownership(Handle h) noexcept {
    return VideoEncoderEncodeOptionsForAv1(h);
}

VideoEncoderEncodeOptionsForAv1::VideoEncoderEncodeOptionsForAv1(const emlite::Val &val) noexcept: emlite::Val(val) {}

VideoEncoderEncodeOptionsForAv1::VideoEncoderEncodeOptionsForAv1() noexcept: emlite::Val(emlite::Val::object()) {}

VideoEncoderEncodeOptionsForAv1 VideoEncoderEncodeOptionsForAv1::clone() const noexcept { return *this; }

unsigned short VideoEncoderEncodeOptionsForAv1::quantizer() const {
    return emlite::Val::get("quantizer").as<unsigned short>();
}

void VideoEncoderEncodeOptionsForAv1::quantizer(unsigned short value) {
    emlite::Val::set("quantizer", value);
}


} // namespace webbind