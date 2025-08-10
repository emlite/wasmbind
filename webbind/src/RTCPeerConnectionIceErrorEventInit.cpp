#include <webbind/RTCPeerConnectionIceErrorEventInit.hpp>

namespace webbind {

RTCPeerConnectionIceErrorEventInit::RTCPeerConnectionIceErrorEventInit(Handle h) noexcept : EventInit(emlite::Val::take_ownership(h)) {}
RTCPeerConnectionIceErrorEventInit RTCPeerConnectionIceErrorEventInit::take_ownership(Handle h) noexcept {
    return RTCPeerConnectionIceErrorEventInit(h);
}

RTCPeerConnectionIceErrorEventInit::RTCPeerConnectionIceErrorEventInit(const emlite::Val &val) noexcept: EventInit(val) {}

RTCPeerConnectionIceErrorEventInit::RTCPeerConnectionIceErrorEventInit() noexcept: EventInit(emlite::Val::object()) {}

RTCPeerConnectionIceErrorEventInit RTCPeerConnectionIceErrorEventInit::clone() const noexcept { return *this; }

jsbind::String RTCPeerConnectionIceErrorEventInit::address() const {
    return emlite::Val::get("address").as<jsbind::String>();
}

void RTCPeerConnectionIceErrorEventInit::address(const jsbind::String& value) {
    emlite::Val::set("address", value);
}

unsigned short RTCPeerConnectionIceErrorEventInit::port() const {
    return emlite::Val::get("port").as<unsigned short>();
}

void RTCPeerConnectionIceErrorEventInit::port(unsigned short value) {
    emlite::Val::set("port", value);
}

jsbind::String RTCPeerConnectionIceErrorEventInit::url() const {
    return emlite::Val::get("url").as<jsbind::String>();
}

void RTCPeerConnectionIceErrorEventInit::url(const jsbind::String& value) {
    emlite::Val::set("url", value);
}

unsigned short RTCPeerConnectionIceErrorEventInit::errorCode() const {
    return emlite::Val::get("errorCode").as<unsigned short>();
}

void RTCPeerConnectionIceErrorEventInit::errorCode(unsigned short value) {
    emlite::Val::set("errorCode", value);
}

jsbind::String RTCPeerConnectionIceErrorEventInit::errorText() const {
    return emlite::Val::get("errorText").as<jsbind::String>();
}

void RTCPeerConnectionIceErrorEventInit::errorText(const jsbind::String& value) {
    emlite::Val::set("errorText", value);
}


} // namespace webbind