#include <webbind/VideoEncoderEncodeOptionsForVp9.hpp>

using emlite::Val;
namespace webbind {

VideoEncoderEncodeOptionsForVp9::VideoEncoderEncodeOptionsForVp9(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
VideoEncoderEncodeOptionsForVp9 VideoEncoderEncodeOptionsForVp9::take_ownership(Handle h) noexcept {
        return VideoEncoderEncodeOptionsForVp9(h);
    }
VideoEncoderEncodeOptionsForVp9::VideoEncoderEncodeOptionsForVp9(const emlite::Val &val) noexcept: emlite::Val(val) {}
VideoEncoderEncodeOptionsForVp9::VideoEncoderEncodeOptionsForVp9() noexcept: emlite::Val(emlite::Val::object()) {}
VideoEncoderEncodeOptionsForVp9 VideoEncoderEncodeOptionsForVp9::clone() const noexcept { return *this; }

unsigned short VideoEncoderEncodeOptionsForVp9::quantizer() const {
    return emlite::Val::get("quantizer").as<unsigned short>();
}

void VideoEncoderEncodeOptionsForVp9::quantizer(unsigned short value) {
    emlite::Val::set("quantizer", value);
}


} // namespace webbind