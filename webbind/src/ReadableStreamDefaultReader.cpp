#include <webbind/ReadableStreamDefaultReader.hpp>
#include <webbind/ReadableStream.hpp>


ReadableStreamReadResult::ReadableStreamReadResult(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
ReadableStreamReadResult ReadableStreamReadResult::take_ownership(Handle h) noexcept {
        return ReadableStreamReadResult(h);
    }
ReadableStreamReadResult::ReadableStreamReadResult(const emlite::Val &val) noexcept: emlite::Val(val) {}
ReadableStreamReadResult::ReadableStreamReadResult() noexcept: emlite::Val(emlite::Val::object()) {}
ReadableStreamReadResult ReadableStreamReadResult::clone() const noexcept { return *this; }

jsbind::Any ReadableStreamReadResult::value() const {
    return emlite::Val::get("value").as<jsbind::Any>();
}

void ReadableStreamReadResult::value(const jsbind::Any& value) {
    emlite::Val::set("value", value);
}

bool ReadableStreamReadResult::done() const {
    return emlite::Val::get("done").as<bool>();
}

void ReadableStreamReadResult::done(bool value) {
    emlite::Val::set("done", value);
}

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

