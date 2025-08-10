#include <webbind/RTCSessionDescriptionInit.hpp>

using emlite::Val;
namespace webbind {

RTCSessionDescriptionInit::RTCSessionDescriptionInit(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
RTCSessionDescriptionInit RTCSessionDescriptionInit::take_ownership(Handle h) noexcept {
        return RTCSessionDescriptionInit(h);
    }
RTCSessionDescriptionInit::RTCSessionDescriptionInit(const emlite::Val &val) noexcept: emlite::Val(val) {}
RTCSessionDescriptionInit::RTCSessionDescriptionInit() noexcept: emlite::Val(emlite::Val::object()) {}
RTCSessionDescriptionInit RTCSessionDescriptionInit::clone() const noexcept { return *this; }

RTCSdpType RTCSessionDescriptionInit::type() const {
    return emlite::Val::get("type").as<RTCSdpType>();
}

void RTCSessionDescriptionInit::type(const RTCSdpType& value) {
    emlite::Val::set("type", value);
}

jsbind::String RTCSessionDescriptionInit::sdp() const {
    return emlite::Val::get("sdp").as<jsbind::String>();
}

void RTCSessionDescriptionInit::sdp(const jsbind::String& value) {
    emlite::Val::set("sdp", value);
}


} // namespace webbind