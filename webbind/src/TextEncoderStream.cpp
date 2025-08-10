#include <webbind/TextEncoderStream.hpp>
#include <webbind/ReadableStream.hpp>
#include <webbind/WritableStream.hpp>

namespace webbind {

TextEncoderStream TextEncoderStream::take_ownership(Handle h) noexcept {
        return TextEncoderStream(h);
    }
TextEncoderStream TextEncoderStream::clone() const noexcept { return *this; }
emlite::Val TextEncoderStream::instance() noexcept { return emlite::Val::global("TextEncoderStream"); }
TextEncoderStream::TextEncoderStream(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
TextEncoderStream::TextEncoderStream(const emlite::Val &val) noexcept: emlite::Val(val) {}

TextEncoderStream::TextEncoderStream() : emlite::Val(emlite::Val::global("TextEncoderStream").new_()) {}

jsbind::String TextEncoderStream::encoding() const {
    return emlite::Val::get("encoding").as<jsbind::String>();
}

ReadableStream TextEncoderStream::readable() const {
    return emlite::Val::get("readable").as<ReadableStream>();
}

WritableStream TextEncoderStream::writable() const {
    return emlite::Val::get("writable").as<WritableStream>();
}


} // namespace webbind