#include <webbind/CompressionStream.hpp>
#include <webbind/ReadableStream.hpp>
#include <webbind/WritableStream.hpp>


CompressionStream CompressionStream::take_ownership(Handle h) noexcept {
        return CompressionStream(h);
    }
CompressionStream CompressionStream::clone() const noexcept { return *this; }
CompressionStream::CompressionStream(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
CompressionStream::CompressionStream(const emlite::Val &val) noexcept: emlite::Val(val) {}


CompressionStream::CompressionStream(const CompressionFormat& format) : emlite::Val(emlite::Val::global("CompressionStream").new_(format)) {}

ReadableStream CompressionStream::readable() const {
    return emlite::Val::get("readable").as<ReadableStream>();
}

WritableStream CompressionStream::writable() const {
    return emlite::Val::get("writable").as<WritableStream>();
}

