#include <webbind/ReadableStream.hpp>
#include <webbind/WritableStream.hpp>
#include <webbind/AbortSignal.hpp>


ReadableStreamGetReaderOptions::ReadableStreamGetReaderOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
ReadableStreamGetReaderOptions ReadableStreamGetReaderOptions::take_ownership(Handle h) noexcept {
        return ReadableStreamGetReaderOptions(h);
    }
ReadableStreamGetReaderOptions::ReadableStreamGetReaderOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
ReadableStreamGetReaderOptions::ReadableStreamGetReaderOptions() noexcept: emlite::Val(emlite::Val::object()) {}
ReadableStreamGetReaderOptions ReadableStreamGetReaderOptions::clone() const noexcept { return *this; }

ReadableStreamReaderMode ReadableStreamGetReaderOptions::mode() const {
    return emlite::Val::get("mode").as<ReadableStreamReaderMode>();
}

void ReadableStreamGetReaderOptions::mode(const ReadableStreamReaderMode& value) {
    emlite::Val::set("mode", value);
}

ReadableWritablePair::ReadableWritablePair(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
ReadableWritablePair ReadableWritablePair::take_ownership(Handle h) noexcept {
        return ReadableWritablePair(h);
    }
ReadableWritablePair::ReadableWritablePair(const emlite::Val &val) noexcept: emlite::Val(val) {}
ReadableWritablePair::ReadableWritablePair() noexcept: emlite::Val(emlite::Val::object()) {}
ReadableWritablePair ReadableWritablePair::clone() const noexcept { return *this; }

ReadableStream ReadableWritablePair::readable() const {
    return emlite::Val::get("readable").as<ReadableStream>();
}

void ReadableWritablePair::readable(const ReadableStream& value) {
    emlite::Val::set("readable", value);
}

WritableStream ReadableWritablePair::writable() const {
    return emlite::Val::get("writable").as<WritableStream>();
}

void ReadableWritablePair::writable(const WritableStream& value) {
    emlite::Val::set("writable", value);
}

StreamPipeOptions::StreamPipeOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
StreamPipeOptions StreamPipeOptions::take_ownership(Handle h) noexcept {
        return StreamPipeOptions(h);
    }
StreamPipeOptions::StreamPipeOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
StreamPipeOptions::StreamPipeOptions() noexcept: emlite::Val(emlite::Val::object()) {}
StreamPipeOptions StreamPipeOptions::clone() const noexcept { return *this; }

bool StreamPipeOptions::preventClose() const {
    return emlite::Val::get("preventClose").as<bool>();
}

void StreamPipeOptions::preventClose(bool value) {
    emlite::Val::set("preventClose", value);
}

bool StreamPipeOptions::preventAbort() const {
    return emlite::Val::get("preventAbort").as<bool>();
}

void StreamPipeOptions::preventAbort(bool value) {
    emlite::Val::set("preventAbort", value);
}

bool StreamPipeOptions::preventCancel() const {
    return emlite::Val::get("preventCancel").as<bool>();
}

void StreamPipeOptions::preventCancel(bool value) {
    emlite::Val::set("preventCancel", value);
}

AbortSignal StreamPipeOptions::signal() const {
    return emlite::Val::get("signal").as<AbortSignal>();
}

void StreamPipeOptions::signal(const AbortSignal& value) {
    emlite::Val::set("signal", value);
}

ReadableStream ReadableStream::take_ownership(Handle h) noexcept {
        return ReadableStream(h);
    }
ReadableStream ReadableStream::clone() const noexcept { return *this; }
ReadableStream::ReadableStream(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
ReadableStream::ReadableStream(const emlite::Val &val) noexcept: emlite::Val(val) {}


ReadableStream::ReadableStream() : emlite::Val(emlite::Val::global("ReadableStream").new_()) {}

ReadableStream::ReadableStream(const jsbind::Object& underlyingSource) : emlite::Val(emlite::Val::global("ReadableStream").new_(underlyingSource)) {}

ReadableStream::ReadableStream(const jsbind::Object& underlyingSource, const jsbind::Any& strategy) : emlite::Val(emlite::Val::global("ReadableStream").new_(underlyingSource, strategy)) {}

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

jsbind::Sequence<ReadableStream> ReadableStream::tee() {
    return emlite::Val::call("tee").as<jsbind::Sequence<ReadableStream>>();
}

