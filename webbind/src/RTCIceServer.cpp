#include <webbind/RTCIceServer.hpp>

namespace webbind {

RTCIceServer::RTCIceServer(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
RTCIceServer RTCIceServer::take_ownership(Handle h) noexcept {
    return RTCIceServer(h);
}

RTCIceServer::RTCIceServer(const emlite::Val &val) noexcept: emlite::Val(val) {}

RTCIceServer::RTCIceServer() noexcept: emlite::Val(emlite::Val::object()) {}

RTCIceServer RTCIceServer::clone() const noexcept { return *this; }

jsbind::Any RTCIceServer::urls() const {
    return emlite::Val::get("urls").as<jsbind::Any>();
}

void RTCIceServer::urls(const jsbind::Any& value) {
    emlite::Val::set("urls", value);
}

jsbind::String RTCIceServer::username() const {
    return emlite::Val::get("username").as<jsbind::String>();
}

void RTCIceServer::username(const jsbind::String& value) {
    emlite::Val::set("username", value);
}

jsbind::String RTCIceServer::credential() const {
    return emlite::Val::get("credential").as<jsbind::String>();
}

void RTCIceServer::credential(const jsbind::String& value) {
    emlite::Val::set("credential", value);
}


} // namespace webbind