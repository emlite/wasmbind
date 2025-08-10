#include <webbind/ReadableStreamDefaultReader.hpp>
#include <webbind/ReadableStream.hpp>
#include <webbind/ReadableStreamReadResult.hpp>

namespace webbind {

ReadableStreamDefaultReader ReadableStreamDefaultReader::take_ownership(Handle h) noexcept {
    return ReadableStreamDefaultReader(h);
}

ReadableStreamDefaultReader ReadableStreamDefaultReader::clone() const noexcept { return *this; }

emlite::Val ReadableStreamDefaultReader::instance() noexcept { return emlite::Val::global("ReadableStreamDefaultReader"); }

ReadableStreamDefaultReader::ReadableStreamDefaultReader(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}

ReadableStreamDefaultReader::ReadableStreamDefaultReader(const emlite::Val &val) noexcept: emlite::Val(val) {}

ReadableStreamDefaultReader::ReadableStreamDefaultReader(const ReadableStream& stream) : emlite::Val(emlite::Val::global("ReadableStreamDefaultReader").new_(stream)) {}

jsbind::Promise<ReadableStreamReadResult> ReadableStreamDefaultReader::read() {
    return emlite::Val::call("read").as<jsbind::Promise<ReadableStreamReadResult>>();
}

jsbind::Undefined ReadableStreamDefaultReader::releaseLock() {
    return emlite::Val::call("releaseLock").as<jsbind::Undefined>();
}

jsbind::Promise<jsbind::Undefined> ReadableStreamDefaultReader::closed() const {
    return emlite::Val::get("closed").as<jsbind::Promise<jsbind::Undefined>>();
}

jsbind::Promise<jsbind::Undefined> ReadableStreamDefaultReader::cancel() {
    return emlite::Val::call("cancel").as<jsbind::Promise<jsbind::Undefined>>();
}

jsbind::Promise<jsbind::Undefined> ReadableStreamDefaultReader::cancel(const jsbind::Any& reason) {
    return emlite::Val::call("cancel", reason).as<jsbind::Promise<jsbind::Undefined>>();
}


} // namespace webbind