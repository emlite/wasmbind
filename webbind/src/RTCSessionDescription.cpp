#include <webbind/RTCSessionDescription.hpp>
#include <webbind/RTCPeerConnection.hpp>


RTCSessionDescription RTCSessionDescription::take_ownership(Handle h) noexcept {
        return RTCSessionDescription(h);
    }
RTCSessionDescription RTCSessionDescription::clone() const noexcept { return *this; }
RTCSessionDescription::RTCSessionDescription(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
RTCSessionDescription::RTCSessionDescription(const emlite::Val &val) noexcept: emlite::Val(val) {}


RTCSessionDescription::RTCSessionDescription(const RTCSessionDescriptionInit& descriptionInitDict): emlite::Val(emlite::Val::global("RTCSessionDescription").new_(descriptionInitDict)) {}

RTCSdpType RTCSessionDescription::type() const {
    return emlite::Val::get("type").as<RTCSdpType>();
}

jsbind::DOMString RTCSessionDescription::sdp() const {
    return emlite::Val::get("sdp").as<jsbind::DOMString>();
}

RTCSessionDescriptionInit RTCSessionDescription::toJSON() {
    return emlite::Val::call("toJSON").as<RTCSessionDescriptionInit>();
}

