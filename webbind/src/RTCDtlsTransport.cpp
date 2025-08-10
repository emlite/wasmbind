#include <webbind/RTCDtlsTransport.hpp>
#include <webbind/RTCIceTransport.hpp>

namespace webbind {

RTCDtlsTransport RTCDtlsTransport::take_ownership(Handle h) noexcept {
    return RTCDtlsTransport(h);
}

RTCDtlsTransport RTCDtlsTransport::clone() const noexcept { return *this; }

emlite::Val RTCDtlsTransport::instance() noexcept { return emlite::Val::global("RTCDtlsTransport"); }

RTCDtlsTransport::RTCDtlsTransport(Handle h) noexcept : EventTarget(emlite::Val::take_ownership(h)) {}

RTCDtlsTransport::RTCDtlsTransport(const emlite::Val &val) noexcept: EventTarget(val) {}

RTCIceTransport RTCDtlsTransport::iceTransport() const {
    return EventTarget::get("iceTransport").as<RTCIceTransport>();
}

RTCDtlsTransportState RTCDtlsTransport::state() const {
    return EventTarget::get("state").as<RTCDtlsTransportState>();
}

jsbind::TypedArray<jsbind::ArrayBuffer> RTCDtlsTransport::getRemoteCertificates() {
    return EventTarget::call("getRemoteCertificates").as<jsbind::TypedArray<jsbind::ArrayBuffer>>();
}

jsbind::Any RTCDtlsTransport::onstatechange() const {
    return EventTarget::get("onstatechange").as<jsbind::Any>();
}

void RTCDtlsTransport::onstatechange(const jsbind::Any& value) {
    EventTarget::set("onstatechange", value);
}

jsbind::Any RTCDtlsTransport::onerror() const {
    return EventTarget::get("onerror").as<jsbind::Any>();
}

void RTCDtlsTransport::onerror(const jsbind::Any& value) {
    EventTarget::set("onerror", value);
}


} // namespace webbind