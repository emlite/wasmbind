#include <webbind/TextEncoder.hpp>


TextEncoderEncodeIntoResult::TextEncoderEncodeIntoResult(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
TextEncoderEncodeIntoResult TextEncoderEncodeIntoResult::take_ownership(Handle h) noexcept {
        return TextEncoderEncodeIntoResult(h);
    }
TextEncoderEncodeIntoResult::TextEncoderEncodeIntoResult(const emlite::Val &val) noexcept: emlite::Val(val) {}
TextEncoderEncodeIntoResult::TextEncoderEncodeIntoResult() noexcept: emlite::Val(emlite::Val::object()) {}
TextEncoderEncodeIntoResult TextEncoderEncodeIntoResult::clone() const noexcept { return *this; }

long long TextEncoderEncodeIntoResult::read() const {
    return emlite::Val::get("read").as<long long>();
}

void TextEncoderEncodeIntoResult::read(long long value) {
    emlite::Val::set("read", value);
}

long long TextEncoderEncodeIntoResult::written() const {
    return emlite::Val::get("written").as<long long>();
}

void TextEncoderEncodeIntoResult::written(long long value) {
    emlite::Val::set("written", value);
}

TextEncoder TextEncoder::take_ownership(Handle h) noexcept {
        return TextEncoder(h);
    }
TextEncoder TextEncoder::clone() const noexcept { return *this; }
TextEncoder::TextEncoder(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
TextEncoder::TextEncoder(const emlite::Val &val) noexcept: emlite::Val(val) {}


TextEncoder::TextEncoder(): emlite::Val(emlite::Val::global("TextEncoder").new_()) {}

jsbind::Uint8Array TextEncoder::encode(const jsbind::USVString& input) {
    return emlite::Val::call("encode", input).as<jsbind::Uint8Array>();
}

TextEncoderEncodeIntoResult TextEncoder::encodeInto(const jsbind::USVString& source, const jsbind::Uint8Array& destination) {
    return emlite::Val::call("encodeInto", source, destination).as<TextEncoderEncodeIntoResult>();
}

jsbind::DOMString TextEncoder::encoding() const {
    return emlite::Val::get("encoding").as<jsbind::DOMString>();
}

