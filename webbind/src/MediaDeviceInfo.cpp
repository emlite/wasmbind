#include "webbind/MediaDeviceInfo.hpp"

namespace webbind {

MediaDeviceInfo MediaDeviceInfo::take_ownership(Handle h) noexcept {
        return MediaDeviceInfo(h);
    }
MediaDeviceInfo MediaDeviceInfo::clone() const noexcept { return *this; }
emlite::Val MediaDeviceInfo::instance() noexcept { return emlite::Val::global("MediaDeviceInfo"); }
MediaDeviceInfo::MediaDeviceInfo(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
MediaDeviceInfo::MediaDeviceInfo(const emlite::Val &val) noexcept: emlite::Val(val) {}

jsbind::String MediaDeviceInfo::deviceId() const {
    return emlite::Val::get("deviceId").as<jsbind::String>();
}

MediaDeviceKind MediaDeviceInfo::kind() const {
    return emlite::Val::get("kind").as<MediaDeviceKind>();
}

jsbind::String MediaDeviceInfo::label() const {
    return emlite::Val::get("label").as<jsbind::String>();
}

jsbind::String MediaDeviceInfo::groupId() const {
    return emlite::Val::get("groupId").as<jsbind::String>();
}

jsbind::Object MediaDeviceInfo::toJSON() {
    return emlite::Val::call("toJSON").as<jsbind::Object>();
}


} // namespace webbind