#include "webbind/RTCLocalSessionDescriptionInit.hpp"

using emlite::Val;
namespace webbind {

RTCLocalSessionDescriptionInit::RTCLocalSessionDescriptionInit(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
RTCLocalSessionDescriptionInit RTCLocalSessionDescriptionInit::take_ownership(Handle h) noexcept {
        return RTCLocalSessionDescriptionInit(h);
    }
RTCLocalSessionDescriptionInit::RTCLocalSessionDescriptionInit(const emlite::Val &val) noexcept: emlite::Val(val) {}
RTCLocalSessionDescriptionInit::RTCLocalSessionDescriptionInit() noexcept: emlite::Val(emlite::Val::object()) {}
RTCLocalSessionDescriptionInit RTCLocalSessionDescriptionInit::clone() const noexcept { return *this; }

RTCSdpType RTCLocalSessionDescriptionInit::type() const {
    return emlite::Val::get("type").as<RTCSdpType>();
}

void RTCLocalSessionDescriptionInit::type(const RTCSdpType& value) {
    emlite::Val::set("type", value);
}

jsbind::String RTCLocalSessionDescriptionInit::sdp() const {
    return emlite::Val::get("sdp").as<jsbind::String>();
}

void RTCLocalSessionDescriptionInit::sdp(const jsbind::String& value) {
    emlite::Val::set("sdp", value);
}


} // namespace webbind