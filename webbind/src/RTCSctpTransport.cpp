#include <webbind/RTCSctpTransport.hpp>
#include <webbind/RTCDtlsTransport.hpp>

namespace webbind {

RTCSctpTransport RTCSctpTransport::take_ownership(Handle h) noexcept {
    return RTCSctpTransport(h);
}

RTCSctpTransport RTCSctpTransport::clone() const noexcept { return *this; }

emlite::Val RTCSctpTransport::instance() noexcept { return emlite::Val::global("RTCSctpTransport"); }

RTCSctpTransport::RTCSctpTransport(Handle h) noexcept : EventTarget(emlite::Val::take_ownership(h)) {}

RTCSctpTransport::RTCSctpTransport(const emlite::Val &val) noexcept: EventTarget(val) {}

RTCDtlsTransport RTCSctpTransport::transport() const {
    return EventTarget::get("transport").as<RTCDtlsTransport>();
}

RTCSctpTransportState RTCSctpTransport::state() const {
    return EventTarget::get("state").as<RTCSctpTransportState>();
}

double RTCSctpTransport::maxMessageSize() const {
    return EventTarget::get("maxMessageSize").as<double>();
}

unsigned short RTCSctpTransport::maxChannels() const {
    return EventTarget::get("maxChannels").as<unsigned short>();
}

jsbind::Any RTCSctpTransport::onstatechange() const {
    return EventTarget::get("onstatechange").as<jsbind::Any>();
}

void RTCSctpTransport::onstatechange(const jsbind::Any& value) {
    EventTarget::set("onstatechange", value);
}


} // namespace webbind