#include <webbind/MediaKeySystemMediaCapability.hpp>

using emlite::Val;
namespace webbind {

MediaKeySystemMediaCapability::MediaKeySystemMediaCapability(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
MediaKeySystemMediaCapability MediaKeySystemMediaCapability::take_ownership(Handle h) noexcept {
        return MediaKeySystemMediaCapability(h);
    }
MediaKeySystemMediaCapability::MediaKeySystemMediaCapability(const emlite::Val &val) noexcept: emlite::Val(val) {}
MediaKeySystemMediaCapability::MediaKeySystemMediaCapability() noexcept: emlite::Val(emlite::Val::object()) {}
MediaKeySystemMediaCapability MediaKeySystemMediaCapability::clone() const noexcept { return *this; }

jsbind::String MediaKeySystemMediaCapability::contentType() const {
    return emlite::Val::get("contentType").as<jsbind::String>();
}

void MediaKeySystemMediaCapability::contentType(const jsbind::String& value) {
    emlite::Val::set("contentType", value);
}

jsbind::String MediaKeySystemMediaCapability::encryptionScheme() const {
    return emlite::Val::get("encryptionScheme").as<jsbind::String>();
}

void MediaKeySystemMediaCapability::encryptionScheme(const jsbind::String& value) {
    emlite::Val::set("encryptionScheme", value);
}

jsbind::String MediaKeySystemMediaCapability::robustness() const {
    return emlite::Val::get("robustness").as<jsbind::String>();
}

void MediaKeySystemMediaCapability::robustness(const jsbind::String& value) {
    emlite::Val::set("robustness", value);
}


} // namespace webbind