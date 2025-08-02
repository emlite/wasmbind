#include <webbind/ReadableStreamBYOBRequest.hpp>


ReadableStreamBYOBRequest ReadableStreamBYOBRequest::take_ownership(Handle h) noexcept {
        return ReadableStreamBYOBRequest(h);
    }
ReadableStreamBYOBRequest ReadableStreamBYOBRequest::clone() const noexcept { return *this; }
emlite::Val ReadableStreamBYOBRequest::instance() noexcept { return emlite::Val::global("ReadableStreamBYOBRequest"); }
ReadableStreamBYOBRequest::ReadableStreamBYOBRequest(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
ReadableStreamBYOBRequest::ReadableStreamBYOBRequest(const emlite::Val &val) noexcept: emlite::Val(val) {}


jsbind::Any ReadableStreamBYOBRequest::view() const {
    return emlite::Val::get("view").as<jsbind::Any>();
}

jsbind::Undefined ReadableStreamBYOBRequest::respond(long long bytesWritten) {
    return emlite::Val::call("respond", bytesWritten).as<jsbind::Undefined>();
}

jsbind::Undefined ReadableStreamBYOBRequest::respondWithNewView(const jsbind::Any& view) {
    return emlite::Val::call("respondWithNewView", view).as<jsbind::Undefined>();
}

