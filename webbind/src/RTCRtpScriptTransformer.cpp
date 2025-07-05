#include <webbind/RTCRtpScriptTransformer.hpp>
#include <webbind/ReadableStream.hpp>
#include <webbind/WritableStream.hpp>


RTCRtpScriptTransformer RTCRtpScriptTransformer::take_ownership(Handle h) noexcept {
        return RTCRtpScriptTransformer(h);
    }
RTCRtpScriptTransformer RTCRtpScriptTransformer::clone() const noexcept { return *this; }
RTCRtpScriptTransformer::RTCRtpScriptTransformer(Handle h) noexcept : EventTarget(emlite::Val::take_ownership(h)) {}
RTCRtpScriptTransformer::RTCRtpScriptTransformer(const emlite::Val &val) noexcept: EventTarget(val) {}


ReadableStream RTCRtpScriptTransformer::readable() const {
    return EventTarget::get("readable").as<ReadableStream>();
}

jsbind::Promise RTCRtpScriptTransformer::generateKeyFrame() {
    return EventTarget::call("generateKeyFrame").as<jsbind::Promise>();
}

jsbind::Promise RTCRtpScriptTransformer::generateKeyFrame(const jsbind::DOMString& rid) {
    return EventTarget::call("generateKeyFrame", rid).as<jsbind::Promise>();
}

jsbind::Promise RTCRtpScriptTransformer::sendKeyFrameRequest() {
    return EventTarget::call("sendKeyFrameRequest").as<jsbind::Promise>();
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

