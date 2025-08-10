#include <webbind/VideoEncoderEncodeOptionsForHevc.hpp>

using emlite::Val;
namespace webbind {

VideoEncoderEncodeOptionsForHevc::VideoEncoderEncodeOptionsForHevc(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
VideoEncoderEncodeOptionsForHevc VideoEncoderEncodeOptionsForHevc::take_ownership(Handle h) noexcept {
        return VideoEncoderEncodeOptionsForHevc(h);
    }
VideoEncoderEncodeOptionsForHevc::VideoEncoderEncodeOptionsForHevc(const emlite::Val &val) noexcept: emlite::Val(val) {}
VideoEncoderEncodeOptionsForHevc::VideoEncoderEncodeOptionsForHevc() noexcept: emlite::Val(emlite::Val::object()) {}
VideoEncoderEncodeOptionsForHevc VideoEncoderEncodeOptionsForHevc::clone() const noexcept { return *this; }

unsigned short VideoEncoderEncodeOptionsForHevc::quantizer() const {
    return emlite::Val::get("quantizer").as<unsigned short>();
}

void VideoEncoderEncodeOptionsForHevc::quantizer(unsigned short value) {
    emlite::Val::set("quantizer", value);
}


} // namespace webbind