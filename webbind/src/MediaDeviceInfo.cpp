#include <webbind/MediaDeviceInfo.hpp>


MediaDeviceInfo MediaDeviceInfo::take_ownership(Handle h) noexcept {
        return MediaDeviceInfo(h);
    }
MediaDeviceInfo MediaDeviceInfo::clone() const noexcept { return *this; }
MediaDeviceInfo::MediaDeviceInfo(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
MediaDeviceInfo::MediaDeviceInfo(const emlite::Val &val) noexcept: emlite::Val(val) {}


jsbind::DOMString MediaDeviceInfo::deviceId() const {
    return emlite::Val::get("deviceId").as<jsbind::DOMString>();
}

MediaDeviceKind MediaDeviceInfo::kind() const {
    return emlite::Val::get("kind").as<MediaDeviceKind>();
}

jsbind::DOMString MediaDeviceInfo::label() const {
    return emlite::Val::get("label").as<jsbind::DOMString>();
}

jsbind::DOMString MediaDeviceInfo::groupId() const {
    return emlite::Val::get("groupId").as<jsbind::DOMString>();
}

jsbind::Object MediaDeviceInfo::toJSON() {
    return emlite::Val::call("toJSON").as<jsbind::Object>();
}

