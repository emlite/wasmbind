#include <webbind/TextDecoderStream.hpp>
#include <webbind/ReadableStream.hpp>
#include <webbind/WritableStream.hpp>


TextDecoderStream TextDecoderStream::take_ownership(Handle h) noexcept {
        return TextDecoderStream(h);
    }
TextDecoderStream TextDecoderStream::clone() const noexcept { return *this; }
TextDecoderStream::TextDecoderStream(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
TextDecoderStream::TextDecoderStream(const emlite::Val &val) noexcept: emlite::Val(val) {}


TextDecoderStream::TextDecoderStream() : emlite::Val(emlite::Val::global("TextDecoderStream").new_()) {}

TextDecoderStream::TextDecoderStream(const jsbind::String& label) : emlite::Val(emlite::Val::global("TextDecoderStream").new_(label)) {}

TextDecoderStream::TextDecoderStream(const jsbind::String& label, const jsbind::Any& options) : emlite::Val(emlite::Val::global("TextDecoderStream").new_(label, options)) {}

jsbind::String TextDecoderStream::encoding() const {
    return emlite::Val::get("encoding").as<jsbind::String>();
}

bool TextDecoderStream::fatal() const {
    return emlite::Val::get("fatal").as<bool>();
}

bool TextDecoderStream::ignoreBOM() const {
    return emlite::Val::get("ignoreBOM").as<bool>();
}

ReadableStream TextDecoderStream::readable() const {
    return emlite::Val::get("readable").as<ReadableStream>();
}

WritableStream TextDecoderStream::writable() const {
    return emlite::Val::get("writable").as<WritableStream>();
}

