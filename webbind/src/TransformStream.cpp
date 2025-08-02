#include <webbind/TransformStream.hpp>
#include <webbind/ReadableStream.hpp>
#include <webbind/WritableStream.hpp>


TransformStream TransformStream::take_ownership(Handle h) noexcept {
        return TransformStream(h);
    }
TransformStream TransformStream::clone() const noexcept { return *this; }
emlite::Val TransformStream::instance() noexcept { return emlite::Val::global("TransformStream"); }
TransformStream::TransformStream(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
TransformStream::TransformStream(const emlite::Val &val) noexcept: emlite::Val(val) {}


TransformStream::TransformStream() : emlite::Val(emlite::Val::global("TransformStream").new_()) {}

TransformStream::TransformStream(const jsbind::Object& transformer) : emlite::Val(emlite::Val::global("TransformStream").new_(transformer)) {}

TransformStream::TransformStream(const jsbind::Object& transformer, const jsbind::Any& writableStrategy) : emlite::Val(emlite::Val::global("TransformStream").new_(transformer, writableStrategy)) {}

TransformStream::TransformStream(const jsbind::Object& transformer, const jsbind::Any& writableStrategy, const jsbind::Any& readableStrategy) : emlite::Val(emlite::Val::global("TransformStream").new_(transformer, writableStrategy, readableStrategy)) {}

ReadableStream TransformStream::readable() const {
    return emlite::Val::get("readable").as<ReadableStream>();
}

WritableStream TransformStream::writable() const {
    return emlite::Val::get("writable").as<WritableStream>();
}

