#include <webbind/MediaKeys.hpp>
#include <webbind/MediaKeySession.hpp>


MediaKeysPolicy::MediaKeysPolicy(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
MediaKeysPolicy MediaKeysPolicy::take_ownership(Handle h) noexcept {
        return MediaKeysPolicy(h);
    }
MediaKeysPolicy::MediaKeysPolicy(const emlite::Val &val) noexcept: emlite::Val(val) {}
MediaKeysPolicy::MediaKeysPolicy() noexcept: emlite::Val(emlite::Val::object()) {}
MediaKeysPolicy MediaKeysPolicy::clone() const noexcept { return *this; }

jsbind::DOMString MediaKeysPolicy::minHdcpVersion() const {
    return emlite::Val::get("minHdcpVersion").as<jsbind::DOMString>();
}

void MediaKeysPolicy::minHdcpVersion(const jsbind::DOMString& value) {
    emlite::Val::set("minHdcpVersion", value);
}

MediaKeys MediaKeys::take_ownership(Handle h) noexcept {
        return MediaKeys(h);
    }
MediaKeys MediaKeys::clone() const noexcept { return *this; }
MediaKeys::MediaKeys(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
MediaKeys::MediaKeys(const emlite::Val &val) noexcept: emlite::Val(val) {}


MediaKeySession MediaKeys::createSession() {
    return emlite::Val::call("createSession").as<MediaKeySession>();
}

MediaKeySession MediaKeys::createSession(const MediaKeySessionType& sessionType) {
    return emlite::Val::call("createSession", sessionType).as<MediaKeySession>();
}

jsbind::Promise<MediaKeyStatus> MediaKeys::getStatusForPolicy() {
    return emlite::Val::call("getStatusForPolicy").as<jsbind::Promise<MediaKeyStatus>>();
}

jsbind::Promise<MediaKeyStatus> MediaKeys::getStatusForPolicy(const MediaKeysPolicy& policy) {
    return emlite::Val::call("getStatusForPolicy", policy).as<jsbind::Promise<MediaKeyStatus>>();
}

jsbind::Promise<bool> MediaKeys::setServerCertificate(const jsbind::Any& serverCertificate) {
    return emlite::Val::call("setServerCertificate", serverCertificate).as<jsbind::Promise<bool>>();
}

