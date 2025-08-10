#include "webbind/ReadableStream.hpp"
#include "webbind/QueuingStrategy.hpp"
#include "webbind/ReadableStream.hpp"
#include "webbind/ReadableStreamGetReaderOptions.hpp"
#include "webbind/ReadableWritablePair.hpp"
#include "webbind/StreamPipeOptions.hpp"
#include "webbind/WritableStream.hpp"

namespace webbind {

ReadableStream ReadableStream::take_ownership(Handle h) noexcept {
        return ReadableStream(h);
    }
ReadableStream ReadableStream::clone() const noexcept { return *this; }
emlite::Val ReadableStream::instance() noexcept { return emlite::Val::global("ReadableStream"); }
ReadableStream::ReadableStream(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
ReadableStream::ReadableStream(const emlite::Val &val) noexcept: emlite::Val(val) {}

ReadableStream::ReadableStream() : emlite::Val(emlite::Val::global("ReadableStream").new_()) {}

ReadableStream::ReadableStream(const jsbind::Object& underlyingSource) : emlite::Val(emlite::Val::global("ReadableStream").new_(underlyingSource)) {}

ReadableStream::ReadableStream(const jsbind::Object& underlyingSource, const QueuingStrategy& strategy) : emlite::Val(emlite::Val::global("ReadableStream").new_(underlyingSource, strategy)) {}

ReadableStream ReadableStream::from(const jsbind::Any& asyncIterable) {
    return emlite::Val::global("readablestream").call("from", asyncIterable).as<ReadableStream>();
}

bool ReadableStream::locked() const {
    return emlite::Val::get("locked").as<bool>();
}

jsbind::Promise<jsbind::Undefined> ReadableStream::cancel() {
    return emlite::Val::call("cancel").as<jsbind::Promise<jsbind::Undefined>>();
}

jsbind::Promise<jsbind::Undefined> ReadableStream::cancel(const jsbind::Any& reason) {
    return emlite::Val::call("cancel", reason).as<jsbind::Promise<jsbind::Undefined>>();
}

jsbind::Any ReadableStream::getReader() {
    return emlite::Val::call("getReader").as<jsbind::Any>();
}

jsbind::Any ReadableStream::getReader(const ReadableStreamGetReaderOptions& options) {
    return emlite::Val::call("getReader", options).as<jsbind::Any>();
}

ReadableStream ReadableStream::pipeThrough(const ReadableWritablePair& transform) {
    return emlite::Val::call("pipeThrough", transform).as<ReadableStream>();
}

ReadableStream ReadableStream::pipeThrough(const ReadableWritablePair& transform, const StreamPipeOptions& options) {
    return emlite::Val::call("pipeThrough", transform, options).as<ReadableStream>();
}

jsbind::Promise<jsbind::Undefined> ReadableStream::pipeTo(const WritableStream& destination) {
    return emlite::Val::call("pipeTo", destination).as<jsbind::Promise<jsbind::Undefined>>();
}

jsbind::Promise<jsbind::Undefined> ReadableStream::pipeTo(const WritableStream& destination, const StreamPipeOptions& options) {
    return emlite::Val::call("pipeTo", destination, options).as<jsbind::Promise<jsbind::Undefined>>();
}

jsbind::TypedArray<ReadableStream> ReadableStream::tee() {
    return emlite::Val::call("tee").as<jsbind::TypedArray<ReadableStream>>();
}


} // namespace webbind