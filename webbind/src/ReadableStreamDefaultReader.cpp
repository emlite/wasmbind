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
ReadableStreamDefaultReader::ReadableStreamDefaultReader(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
ReadableStreamDefaultReader::ReadableStreamDefaultReader(const emlite::Val &val) noexcept: emlite::Val(val) {}


ReadableStreamDefaultReader::ReadableStreamDefaultReader(const ReadableStream& stream): emlite::Val(emlite::Val::global("ReadableStreamDefaultReader").new_(stream)) {}

jsbind::Promise ReadableStreamDefaultReader::read() {
    return emlite::Val::call("read").as<jsbind::Promise>();
}

jsbind::Undefined ReadableStreamDefaultReader::releaseLock() {
    return emlite::Val::call("releaseLock").as<jsbind::Undefined>();
}

jsbind::Promise ReadableStreamDefaultReader::closed() const {
    return emlite::Val::get("closed").as<jsbind::Promise>();
}

jsbind::Promise ReadableStreamDefaultReader::cancel(const jsbind::Any& reason) {
    return emlite::Val::call("cancel", reason).as<jsbind::Promise>();
}

