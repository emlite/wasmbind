#include <webbind/MediaKeySystemAccess.hpp>
#include <webbind/Navigator.hpp>
#include <webbind/MediaKeys.hpp>


MediaKeySystemAccess MediaKeySystemAccess::take_ownership(Handle h) noexcept {
        return MediaKeySystemAccess(h);
    }
MediaKeySystemAccess MediaKeySystemAccess::clone() const noexcept { return *this; }
MediaKeySystemAccess::MediaKeySystemAccess(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
MediaKeySystemAccess::MediaKeySystemAccess(const emlite::Val &val) noexcept: emlite::Val(val) {}


jsbind::String MediaKeySystemAccess::keySystem() const {
    return emlite::Val::get("keySystem").as<jsbind::String>();
}

MediaKeySystemConfiguration MediaKeySystemAccess::getConfiguration() {
    return emlite::Val::call("getConfiguration").as<MediaKeySystemConfiguration>();
}

jsbind::Promise<MediaKeys> MediaKeySystemAccess::createMediaKeys() {
    return emlite::Val::call("createMediaKeys").as<jsbind::Promise<MediaKeys>>();
}

