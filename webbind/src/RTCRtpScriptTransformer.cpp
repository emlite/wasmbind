#include <webbind/RTCRtpScriptTransformer.hpp>
#include <webbind/ReadableStream.hpp>
#include <webbind/WritableStream.hpp>

namespace webbind {

RTCRtpScriptTransformer RTCRtpScriptTransformer::take_ownership(Handle h) noexcept {
        return RTCRtpScriptTransformer(h);
    }
RTCRtpScriptTransformer RTCRtpScriptTransformer::clone() const noexcept { return *this; }
emlite::Val RTCRtpScriptTransformer::instance() noexcept { return emlite::Val::global("RTCRtpScriptTransformer"); }
RTCRtpScriptTransformer::RTCRtpScriptTransformer(Handle h) noexcept : EventTarget(emlite::Val::take_ownership(h)) {}
RTCRtpScriptTransformer::RTCRtpScriptTransformer(const emlite::Val &val) noexcept: EventTarget(val) {}

ReadableStream RTCRtpScriptTransformer::readable() const {
    return EventTarget::get("readable").as<ReadableStream>();
}

jsbind::Promise<long long> RTCRtpScriptTransformer::generateKeyFrame() {
    return EventTarget::call("generateKeyFrame").as<jsbind::Promise<long long>>();
}

jsbind::Promise<long long> RTCRtpScriptTransformer::generateKeyFrame(const jsbind::String& rid) {
    return EventTarget::call("generateKeyFrame", rid).as<jsbind::Promise<long long>>();
}

jsbind::Promise<jsbind::Undefined> RTCRtpScriptTransformer::sendKeyFrameRequest() {
    return EventTarget::call("sendKeyFrameRequest").as<jsbind::Promise<jsbind::Undefined>>();
}

WritableStream RTCRtpScriptTransformer::writable() const {
    return EventTarget::get("writable").as<WritableStream>();
}

jsbind::Any RTCRtpScriptTransformer::onkeyframerequest() const {
    return EventTarget::get("onkeyframerequest").as<jsbind::Any>();
}

void RTCRtpScriptTransformer::onkeyframerequest(const jsbind::Any& value) {
    EventTarget::set("onkeyframerequest", value);
}

jsbind::Any RTCRtpScriptTransformer::options() const {
    return EventTarget::get("options").as<jsbind::Any>();
}


} // namespace webbind