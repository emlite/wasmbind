#include <webbind/WritableStreamDefaultWriter.hpp>
#include <webbind/ReadableStream.hpp>
#include <webbind/WritableStream.hpp>


WritableStreamDefaultWriter WritableStreamDefaultWriter::take_ownership(Handle h) noexcept {
        return WritableStreamDefaultWriter(h);
    }
WritableStreamDefaultWriter WritableStreamDefaultWriter::clone() const noexcept { return *this; }
WritableStreamDefaultWriter::WritableStreamDefaultWriter(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
WritableStreamDefaultWriter::WritableStreamDefaultWriter(const emlite::Val &val) noexcept: emlite::Val(val) {}


WritableStreamDefaultWriter::WritableStreamDefaultWriter(const WritableStream& stream) : emlite::Val(emlite::Val::global("WritableStreamDefaultWriter").new_(stream)) {}

jsbind::Promise<jsbind::Undefined> WritableStreamDefaultWriter::closed() const {
    return emlite::Val::get("closed").as<jsbind::Promise<jsbind::Undefined>>();
}

double WritableStreamDefaultWriter::desiredSize() const {
    return emlite::Val::get("desiredSize").as<double>();
}

jsbind::Promise<jsbind::Undefined> WritableStreamDefaultWriter::ready() const {
    return emlite::Val::get("ready").as<jsbind::Promise<jsbind::Undefined>>();
}

jsbind::Promise<jsbind::Undefined> WritableStreamDefaultWriter::abort() {
    return emlite::Val::call("abort").as<jsbind::Promise<jsbind::Undefined>>();
}

jsbind::Promise<jsbind::Undefined> WritableStreamDefaultWriter::abort(const jsbind::Any& reason) {
    return emlite::Val::call("abort", reason).as<jsbind::Promise<jsbind::Undefined>>();
}

jsbind::Promise<jsbind::Undefined> WritableStreamDefaultWriter::close() {
    return emlite::Val::call("close").as<jsbind::Promise<jsbind::Undefined>>();
}

jsbind::Undefined WritableStreamDefaultWriter::releaseLock() {
    return emlite::Val::call("releaseLock").as<jsbind::Undefined>();
}

jsbind::Promise<jsbind::Undefined> WritableStreamDefaultWriter::write() {
    return emlite::Val::call("write").as<jsbind::Promise<jsbind::Undefined>>();
}

jsbind::Promise<jsbind::Undefined> WritableStreamDefaultWriter::write(const jsbind::Any& chunk) {
    return emlite::Val::call("write", chunk).as<jsbind::Promise<jsbind::Undefined>>();
}

