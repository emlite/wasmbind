#include <webbind/MediaKeySystemAccess.hpp>
#include <webbind/MediaKeySystemConfiguration.hpp>
#include <webbind/MediaKeys.hpp>

namespace webbind {

MediaKeySystemAccess MediaKeySystemAccess::take_ownership(Handle h) noexcept {
        return MediaKeySystemAccess(h);
    }
MediaKeySystemAccess MediaKeySystemAccess::clone() const noexcept { return *this; }
emlite::Val MediaKeySystemAccess::instance() noexcept { return emlite::Val::global("MediaKeySystemAccess"); }
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


} // namespace webbind