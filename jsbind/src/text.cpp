#include <jsbind/text.hpp>

using namespace jsbind;

TextEncoder::TextEncoder(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}

TextEncoder TextEncoder::take_ownership(Handle h) noexcept { return TextEncoder(h); }

TextEncoder::TextEncoder(const emlite::Val &val) noexcept : emlite::Val(val) {}
/* Construct `new TextEncoder()` (always UTF-8) */
TextEncoder::TextEncoder() : emlite::Val(emlite::Val::global("TextEncoder").new_()) {}

emlite::Val TextEncoder::instance() noexcept { return emlite::Val::global("TextEncoder"); }

/* encoder.encode(str) → Uint8Array */
Uint8Array TextEncoder::encode(const char *str) const {
    return call("encode", emlite::Val(str)).template as<Uint8Array>();
}

/* encoder.encodeInto(src, dst) → {read, written} */
EncodeResult TextEncoder::encode_into(const char *src, Uint8Array &dst) const {
    emlite::Val res = call("encodeInto", emlite::Val(src), dst);

    size_t read    = res.get("read").template as<uint32_t>();
    size_t written = res.get("written").template as<uint32_t>();
    return {read, written};
}

TextDecoder::TextDecoder(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}

TextDecoder TextDecoder::take_ownership(Handle h) noexcept { return TextDecoder(h); }

TextDecoder::TextDecoder(const emlite::Val &val) noexcept : emlite::Val(val) {}
/* new TextDecoder() */
TextDecoder::TextDecoder() : emlite::Val(emlite::Val::global("TextDecoder").new_()) {}

/* new TextDecoder(label) */
TextDecoder::TextDecoder(const char *label)
    : emlite::Val(emlite::Val::global("TextDecoder").new_(label)) {}

/* new TextDecoder(options) */
TextDecoder::TextDecoder(const Any &opts)
    : emlite::Val(emlite::Val::global("TextDecoder").new_(opts)) {}

/* new TextDecoder(label, options) */
TextDecoder::TextDecoder(const char *label, const Any &opts)
    : emlite::Val(emlite::Val::global("TextDecoder").new_(label, opts)) {}

emlite::Val TextDecoder::instance() noexcept { return emlite::Val::global("TextDecoder"); }

/* decoder.decode(bytes) -> String (UTF-8) */
String TextDecoder::decode(const Uint8Array &bytes) const {
    return call("decode", bytes).template as<String>();
}
