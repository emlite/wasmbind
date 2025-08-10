#include <webbind/VideoDecoderInit.hpp>

namespace webbind {

VideoDecoderInit::VideoDecoderInit(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
VideoDecoderInit VideoDecoderInit::take_ownership(Handle h) noexcept {
    return VideoDecoderInit(h);
}

VideoDecoderInit::VideoDecoderInit(const emlite::Val &val) noexcept: emlite::Val(val) {}

VideoDecoderInit::VideoDecoderInit() noexcept: emlite::Val(emlite::Val::object()) {}

VideoDecoderInit VideoDecoderInit::clone() const noexcept { return *this; }

jsbind::Function VideoDecoderInit::output() const {
    return emlite::Val::get("output").as<jsbind::Function>();
}

void VideoDecoderInit::output(const jsbind::Function& value) {
    emlite::Val::set("output", value);
}

jsbind::Function VideoDecoderInit::error() const {
    return emlite::Val::get("error").as<jsbind::Function>();
}

void VideoDecoderInit::error(const jsbind::Function& value) {
    emlite::Val::set("error", value);
}


} // namespace webbind