#include <webbind/TextEncoder.hpp>
#include <webbind/TextEncoderEncodeIntoResult.hpp>

namespace webbind {

TextEncoder TextEncoder::take_ownership(Handle h) noexcept {
    return TextEncoder(h);
}

TextEncoder TextEncoder::clone() const noexcept { return *this; }

emlite::Val TextEncoder::instance() noexcept { return emlite::Val::global("TextEncoder"); }

TextEncoder::TextEncoder(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}

TextEncoder::TextEncoder(const emlite::Val &val) noexcept: emlite::Val(val) {}

TextEncoder::TextEncoder() : emlite::Val(emlite::Val::global("TextEncoder").new_()) {}

jsbind::Uint8Array TextEncoder::encode() {
    return emlite::Val::call("encode").as<jsbind::Uint8Array>();
}

jsbind::Uint8Array TextEncoder::encode(const jsbind::String& input) {
    return emlite::Val::call("encode", input).as<jsbind::Uint8Array>();
}

TextEncoderEncodeIntoResult TextEncoder::encodeInto(const jsbind::String& source, const jsbind::Uint8Array& destination) {
    return emlite::Val::call("encodeInto", source, destination).as<TextEncoderEncodeIntoResult>();
}

jsbind::String TextEncoder::encoding() const {
    return emlite::Val::get("encoding").as<jsbind::String>();
}


} // namespace webbind