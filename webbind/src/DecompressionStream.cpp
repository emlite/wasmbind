#include <webbind/DecompressionStream.hpp>
#include <webbind/ReadableStream.hpp>
#include <webbind/WritableStream.hpp>


DecompressionStream DecompressionStream::take_ownership(Handle h) noexcept {
        return DecompressionStream(h);
    }
DecompressionStream DecompressionStream::clone() const noexcept { return *this; }
DecompressionStream::DecompressionStream(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
DecompressionStream::DecompressionStream(const emlite::Val &val) noexcept: emlite::Val(val) {}


DecompressionStream::DecompressionStream(const CompressionFormat& format) : emlite::Val(emlite::Val::global("DecompressionStream").new_(format)) {}

ReadableStream DecompressionStream::readable() const {
    return emlite::Val::get("readable").as<ReadableStream>();
}

WritableStream DecompressionStream::writable() const {
    return emlite::Val::get("writable").as<WritableStream>();
}

