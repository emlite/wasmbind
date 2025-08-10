#include <webbind/MediaKeySystemConfiguration.hpp>
#include <webbind/MediaKeySystemMediaCapability.hpp>

namespace webbind {

MediaKeySystemConfiguration::MediaKeySystemConfiguration(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
MediaKeySystemConfiguration MediaKeySystemConfiguration::take_ownership(Handle h) noexcept {
    return MediaKeySystemConfiguration(h);
}

MediaKeySystemConfiguration::MediaKeySystemConfiguration(const emlite::Val &val) noexcept: emlite::Val(val) {}

MediaKeySystemConfiguration::MediaKeySystemConfiguration() noexcept: emlite::Val(emlite::Val::object()) {}

MediaKeySystemConfiguration MediaKeySystemConfiguration::clone() const noexcept { return *this; }

jsbind::String MediaKeySystemConfiguration::label() const {
    return emlite::Val::get("label").as<jsbind::String>();
}

void MediaKeySystemConfiguration::label(const jsbind::String& value) {
    emlite::Val::set("label", value);
}

jsbind::TypedArray<jsbind::String> MediaKeySystemConfiguration::initDataTypes() const {
    return emlite::Val::get("initDataTypes").as<jsbind::TypedArray<jsbind::String>>();
}

void MediaKeySystemConfiguration::initDataTypes(const jsbind::TypedArray<jsbind::String>& value) {
    emlite::Val::set("initDataTypes", value);
}

jsbind::TypedArray<MediaKeySystemMediaCapability> MediaKeySystemConfiguration::audioCapabilities() const {
    return emlite::Val::get("audioCapabilities").as<jsbind::TypedArray<MediaKeySystemMediaCapability>>();
}

void MediaKeySystemConfiguration::audioCapabilities(const jsbind::TypedArray<MediaKeySystemMediaCapability>& value) {
    emlite::Val::set("audioCapabilities", value);
}

jsbind::TypedArray<MediaKeySystemMediaCapability> MediaKeySystemConfiguration::videoCapabilities() const {
    return emlite::Val::get("videoCapabilities").as<jsbind::TypedArray<MediaKeySystemMediaCapability>>();
}

void MediaKeySystemConfiguration::videoCapabilities(const jsbind::TypedArray<MediaKeySystemMediaCapability>& value) {
    emlite::Val::set("videoCapabilities", value);
}

MediaKeysRequirement MediaKeySystemConfiguration::distinctiveIdentifier() const {
    return emlite::Val::get("distinctiveIdentifier").as<MediaKeysRequirement>();
}

void MediaKeySystemConfiguration::distinctiveIdentifier(const MediaKeysRequirement& value) {
    emlite::Val::set("distinctiveIdentifier", value);
}

MediaKeysRequirement MediaKeySystemConfiguration::persistentState() const {
    return emlite::Val::get("persistentState").as<MediaKeysRequirement>();
}

void MediaKeySystemConfiguration::persistentState(const MediaKeysRequirement& value) {
    emlite::Val::set("persistentState", value);
}

jsbind::TypedArray<jsbind::String> MediaKeySystemConfiguration::sessionTypes() const {
    return emlite::Val::get("sessionTypes").as<jsbind::TypedArray<jsbind::String>>();
}

void MediaKeySystemConfiguration::sessionTypes(const jsbind::TypedArray<jsbind::String>& value) {
    emlite::Val::set("sessionTypes", value);
}


} // namespace webbind