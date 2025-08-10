#include "webbind/MediaCapabilitiesKeySystemConfiguration.hpp"
#include "webbind/KeySystemTrackConfiguration.hpp"

using emlite::Val;
namespace webbind {

MediaCapabilitiesKeySystemConfiguration::MediaCapabilitiesKeySystemConfiguration(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
MediaCapabilitiesKeySystemConfiguration MediaCapabilitiesKeySystemConfiguration::take_ownership(Handle h) noexcept {
        return MediaCapabilitiesKeySystemConfiguration(h);
    }
MediaCapabilitiesKeySystemConfiguration::MediaCapabilitiesKeySystemConfiguration(const emlite::Val &val) noexcept: emlite::Val(val) {}
MediaCapabilitiesKeySystemConfiguration::MediaCapabilitiesKeySystemConfiguration() noexcept: emlite::Val(emlite::Val::object()) {}
MediaCapabilitiesKeySystemConfiguration MediaCapabilitiesKeySystemConfiguration::clone() const noexcept { return *this; }

jsbind::String MediaCapabilitiesKeySystemConfiguration::keySystem() const {
    return emlite::Val::get("keySystem").as<jsbind::String>();
}

void MediaCapabilitiesKeySystemConfiguration::keySystem(const jsbind::String& value) {
    emlite::Val::set("keySystem", value);
}

jsbind::String MediaCapabilitiesKeySystemConfiguration::initDataType() const {
    return emlite::Val::get("initDataType").as<jsbind::String>();
}

void MediaCapabilitiesKeySystemConfiguration::initDataType(const jsbind::String& value) {
    emlite::Val::set("initDataType", value);
}

MediaKeysRequirement MediaCapabilitiesKeySystemConfiguration::distinctiveIdentifier() const {
    return emlite::Val::get("distinctiveIdentifier").as<MediaKeysRequirement>();
}

void MediaCapabilitiesKeySystemConfiguration::distinctiveIdentifier(const MediaKeysRequirement& value) {
    emlite::Val::set("distinctiveIdentifier", value);
}

MediaKeysRequirement MediaCapabilitiesKeySystemConfiguration::persistentState() const {
    return emlite::Val::get("persistentState").as<MediaKeysRequirement>();
}

void MediaCapabilitiesKeySystemConfiguration::persistentState(const MediaKeysRequirement& value) {
    emlite::Val::set("persistentState", value);
}

jsbind::TypedArray<jsbind::String> MediaCapabilitiesKeySystemConfiguration::sessionTypes() const {
    return emlite::Val::get("sessionTypes").as<jsbind::TypedArray<jsbind::String>>();
}

void MediaCapabilitiesKeySystemConfiguration::sessionTypes(const jsbind::TypedArray<jsbind::String>& value) {
    emlite::Val::set("sessionTypes", value);
}

KeySystemTrackConfiguration MediaCapabilitiesKeySystemConfiguration::audio() const {
    return emlite::Val::get("audio").as<KeySystemTrackConfiguration>();
}

void MediaCapabilitiesKeySystemConfiguration::audio(const KeySystemTrackConfiguration& value) {
    emlite::Val::set("audio", value);
}

KeySystemTrackConfiguration MediaCapabilitiesKeySystemConfiguration::video() const {
    return emlite::Val::get("video").as<KeySystemTrackConfiguration>();
}

void MediaCapabilitiesKeySystemConfiguration::video(const KeySystemTrackConfiguration& value) {
    emlite::Val::set("video", value);
}


} // namespace webbind