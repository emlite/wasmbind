#include <webbind/WritableStream.hpp>
#include <webbind/QueuingStrategy.hpp>
#include <webbind/WritableStreamDefaultWriter.hpp>

namespace webbind {

WritableStream WritableStream::take_ownership(Handle h) noexcept {
        return WritableStream(h);
    }
WritableStream WritableStream::clone() const noexcept { return *this; }
emlite::Val WritableStream::instance() noexcept { return emlite::Val::global("WritableStream"); }
WritableStream::WritableStream(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
WritableStream::WritableStream(const emlite::Val &val) noexcept: emlite::Val(val) {}

WritableStream::WritableStream() : emlite::Val(emlite::Val::global("WritableStream").new_()) {}

WritableStream::WritableStream(const jsbind::Object& underlyingSink) : emlite::Val(emlite::Val::global("WritableStream").new_(underlyingSink)) {}

WritableStream::WritableStream(const jsbind::Object& underlyingSink, const QueuingStrategy& strategy) : emlite::Val(emlite::Val::global("WritableStream").new_(underlyingSink, strategy)) {}

bool WritableStream::locked() const {
    return emlite::Val::get("locked").as<bool>();
}

jsbind::Promise<jsbind::Undefined> WritableStream::abort() {
    return emlite::Val::call("abort").as<jsbind::Promise<jsbind::Undefined>>();
}

jsbind::Promise<jsbind::Undefined> WritableStream::abort(const jsbind::Any& reason) {
    return emlite::Val::call("abort", reason).as<jsbind::Promise<jsbind::Undefined>>();
}

jsbind::Promise<jsbind::Undefined> WritableStream::close() {
    return emlite::Val::call("close").as<jsbind::Promise<jsbind::Undefined>>();
}

WritableStreamDefaultWriter WritableStream::getWriter() {
    return emlite::Val::call("getWriter").as<WritableStreamDefaultWriter>();
}


} // namespace webbind