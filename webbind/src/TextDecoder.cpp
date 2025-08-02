#include <webbind/TextDecoder.hpp>


TextDecodeOptions::TextDecodeOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
TextDecodeOptions TextDecodeOptions::take_ownership(Handle h) noexcept {
        return TextDecodeOptions(h);
    }
TextDecodeOptions::TextDecodeOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
TextDecodeOptions::TextDecodeOptions() noexcept: emlite::Val(emlite::Val::object()) {}
TextDecodeOptions TextDecodeOptions::clone() const noexcept { return *this; }

bool TextDecodeOptions::stream() const {
    return emlite::Val::get("stream").as<bool>();
}

void TextDecodeOptions::stream(bool value) {
    emlite::Val::set("stream", value);
}

TextDecoder TextDecoder::take_ownership(Handle h) noexcept {
        return TextDecoder(h);
    }
TextDecoder TextDecoder::clone() const noexcept { return *this; }
emlite::Val TextDecoder::instance() noexcept { return emlite::Val::global("TextDecoder"); }
TextDecoder::TextDecoder(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
TextDecoder::TextDecoder(const emlite::Val &val) noexcept: emlite::Val(val) {}


TextDecoder::TextDecoder() : emlite::Val(emlite::Val::global("TextDecoder").new_()) {}

TextDecoder::TextDecoder(const jsbind::String& label) : emlite::Val(emlite::Val::global("TextDecoder").new_(label)) {}

TextDecoder::TextDecoder(const jsbind::String& label, const jsbind::Any& options) : emlite::Val(emlite::Val::global("TextDecoder").new_(label, options)) {}

jsbind::String TextDecoder::decode() {
    return emlite::Val::call("decode").as<jsbind::String>();
}

jsbind::String TextDecoder::decode(const jsbind::Any& input) {
    return emlite::Val::call("decode", input).as<jsbind::String>();
}

jsbind::String TextDecoder::decode(const jsbind::Any& input, const TextDecodeOptions& options) {
    return emlite::Val::call("decode", input, options).as<jsbind::String>();
}

jsbind::String TextDecoder::encoding() const {
    return emlite::Val::get("encoding").as<jsbind::String>();
}

bool TextDecoder::fatal() const {
    return emlite::Val::get("fatal").as<bool>();
}

bool TextDecoder::ignoreBOM() const {
    return emlite::Val::get("ignoreBOM").as<bool>();
}

