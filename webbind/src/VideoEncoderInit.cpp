#include "webbind/VideoEncoderInit.hpp"

using emlite::Val;
namespace webbind {

VideoEncoderInit::VideoEncoderInit(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
VideoEncoderInit VideoEncoderInit::take_ownership(Handle h) noexcept {
        return VideoEncoderInit(h);
    }
VideoEncoderInit::VideoEncoderInit(const emlite::Val &val) noexcept: emlite::Val(val) {}
VideoEncoderInit::VideoEncoderInit() noexcept: emlite::Val(emlite::Val::object()) {}
VideoEncoderInit VideoEncoderInit::clone() const noexcept { return *this; }

jsbind::Function VideoEncoderInit::output() const {
    return emlite::Val::get("output").as<jsbind::Function>();
}

void VideoEncoderInit::output(const jsbind::Function& value) {
    emlite::Val::set("output", value);
}

jsbind::Function VideoEncoderInit::error() const {
    return emlite::Val::get("error").as<jsbind::Function>();
}

void VideoEncoderInit::error(const jsbind::Function& value) {
    emlite::Val::set("error", value);
}


} // namespace webbind