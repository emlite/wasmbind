#include "webbind/ReadableStreamBYOBReader.hpp"
#include "webbind/ReadableStream.hpp"
#include "webbind/ReadableStreamReadResult.hpp"
#include "webbind/ReadableStreamBYOBReaderReadOptions.hpp"

namespace webbind {

ReadableStreamBYOBReader ReadableStreamBYOBReader::take_ownership(Handle h) noexcept {
        return ReadableStreamBYOBReader(h);
    }
ReadableStreamBYOBReader ReadableStreamBYOBReader::clone() const noexcept { return *this; }
emlite::Val ReadableStreamBYOBReader::instance() noexcept { return emlite::Val::global("ReadableStreamBYOBReader"); }
ReadableStreamBYOBReader::ReadableStreamBYOBReader(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
ReadableStreamBYOBReader::ReadableStreamBYOBReader(const emlite::Val &val) noexcept: emlite::Val(val) {}

ReadableStreamBYOBReader::ReadableStreamBYOBReader(const ReadableStream& stream) : emlite::Val(emlite::Val::global("ReadableStreamBYOBReader").new_(stream)) {}

jsbind::Promise<ReadableStreamReadResult> ReadableStreamBYOBReader::read(const jsbind::Any& view) {
    return emlite::Val::call("read", view).as<jsbind::Promise<ReadableStreamReadResult>>();
}

jsbind::Promise<ReadableStreamReadResult> ReadableStreamBYOBReader::read(const jsbind::Any& view, const ReadableStreamBYOBReaderReadOptions& options) {
    return emlite::Val::call("read", view, options).as<jsbind::Promise<ReadableStreamReadResult>>();
}

jsbind::Undefined ReadableStreamBYOBReader::releaseLock() {
    return emlite::Val::call("releaseLock").as<jsbind::Undefined>();
}

jsbind::Promise<jsbind::Undefined> ReadableStreamBYOBReader::closed() const {
    return emlite::Val::get("closed").as<jsbind::Promise<jsbind::Undefined>>();
}

jsbind::Promise<jsbind::Undefined> ReadableStreamBYOBReader::cancel() {
    return emlite::Val::call("cancel").as<jsbind::Promise<jsbind::Undefined>>();
}

jsbind::Promise<jsbind::Undefined> ReadableStreamBYOBReader::cancel(const jsbind::Any& reason) {
    return emlite::Val::call("cancel", reason).as<jsbind::Promise<jsbind::Undefined>>();
}


} // namespace webbind