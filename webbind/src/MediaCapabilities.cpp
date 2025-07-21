#include <webbind/MediaCapabilities.hpp>
#include <webbind/MediaKeySystemAccess.hpp>


MediaCapabilitiesDecodingInfo::MediaCapabilitiesDecodingInfo(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
MediaCapabilitiesDecodingInfo MediaCapabilitiesDecodingInfo::take_ownership(Handle h) noexcept {
        return MediaCapabilitiesDecodingInfo(h);
    }
MediaCapabilitiesDecodingInfo::MediaCapabilitiesDecodingInfo(const emlite::Val &val) noexcept: emlite::Val(val) {}
MediaCapabilitiesDecodingInfo::MediaCapabilitiesDecodingInfo() noexcept: emlite::Val(emlite::Val::object()) {}
MediaCapabilitiesDecodingInfo MediaCapabilitiesDecodingInfo::clone() const noexcept { return *this; }

MediaKeySystemAccess MediaCapabilitiesDecodingInfo::keySystemAccess() const {
    return emlite::Val::get("keySystemAccess").as<MediaKeySystemAccess>();
}

void MediaCapabilitiesDecodingInfo::keySystemAccess(const MediaKeySystemAccess& value) {
    emlite::Val::set("keySystemAccess", value);
}

MediaDecodingConfiguration MediaCapabilitiesDecodingInfo::configuration() const {
    return emlite::Val::get("configuration").as<MediaDecodingConfiguration>();
}

void MediaCapabilitiesDecodingInfo::configuration(const MediaDecodingConfiguration& value) {
    emlite::Val::set("configuration", value);
}

MediaDecodingConfiguration::MediaDecodingConfiguration(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
MediaDecodingConfiguration MediaDecodingConfiguration::take_ownership(Handle h) noexcept {
        return MediaDecodingConfiguration(h);
    }
MediaDecodingConfiguration::MediaDecodingConfiguration(const emlite::Val &val) noexcept: emlite::Val(val) {}
MediaDecodingConfiguration::MediaDecodingConfiguration() noexcept: emlite::Val(emlite::Val::object()) {}
MediaDecodingConfiguration MediaDecodingConfiguration::clone() const noexcept { return *this; }

MediaDecodingType MediaDecodingConfiguration::type() const {
    return emlite::Val::get("type").as<MediaDecodingType>();
}

void MediaDecodingConfiguration::type(const MediaDecodingType& value) {
    emlite::Val::set("type", value);
}

jsbind::Any MediaDecodingConfiguration::keySystemConfiguration() const {
    return emlite::Val::get("keySystemConfiguration").as<jsbind::Any>();
}

void MediaDecodingConfiguration::keySystemConfiguration(const jsbind::Any& value) {
    emlite::Val::set("keySystemConfiguration", value);
}

MediaCapabilitiesEncodingInfo::MediaCapabilitiesEncodingInfo(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
MediaCapabilitiesEncodingInfo MediaCapabilitiesEncodingInfo::take_ownership(Handle h) noexcept {
        return MediaCapabilitiesEncodingInfo(h);
    }
MediaCapabilitiesEncodingInfo::MediaCapabilitiesEncodingInfo(const emlite::Val &val) noexcept: emlite::Val(val) {}
MediaCapabilitiesEncodingInfo::MediaCapabilitiesEncodingInfo() noexcept: emlite::Val(emlite::Val::object()) {}
MediaCapabilitiesEncodingInfo MediaCapabilitiesEncodingInfo::clone() const noexcept { return *this; }

MediaEncodingConfiguration MediaCapabilitiesEncodingInfo::configuration() const {
    return emlite::Val::get("configuration").as<MediaEncodingConfiguration>();
}

void MediaCapabilitiesEncodingInfo::configuration(const MediaEncodingConfiguration& value) {
    emlite::Val::set("configuration", value);
}

MediaEncodingConfiguration::MediaEncodingConfiguration(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
MediaEncodingConfiguration MediaEncodingConfiguration::take_ownership(Handle h) noexcept {
        return MediaEncodingConfiguration(h);
    }
MediaEncodingConfiguration::MediaEncodingConfiguration(const emlite::Val &val) noexcept: emlite::Val(val) {}
MediaEncodingConfiguration::MediaEncodingConfiguration() noexcept: emlite::Val(emlite::Val::object()) {}
MediaEncodingConfiguration MediaEncodingConfiguration::clone() const noexcept { return *this; }

MediaEncodingType MediaEncodingConfiguration::type() const {
    return emlite::Val::get("type").as<MediaEncodingType>();
}

void MediaEncodingConfiguration::type(const MediaEncodingType& value) {
    emlite::Val::set("type", value);
}

MediaCapabilities MediaCapabilities::take_ownership(Handle h) noexcept {
        return MediaCapabilities(h);
    }
MediaCapabilities MediaCapabilities::clone() const noexcept { return *this; }
MediaCapabilities::MediaCapabilities(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
MediaCapabilities::MediaCapabilities(const emlite::Val &val) noexcept: emlite::Val(val) {}


jsbind::Promise<MediaCapabilitiesDecodingInfo> MediaCapabilities::decodingInfo(const MediaDecodingConfiguration& configuration) {
    return emlite::Val::call("decodingInfo", configuration).as<jsbind::Promise<MediaCapabilitiesDecodingInfo>>();
}

jsbind::Promise<MediaCapabilitiesEncodingInfo> MediaCapabilities::encodingInfo(const MediaEncodingConfiguration& configuration) {
    return emlite::Val::call("encodingInfo", configuration).as<jsbind::Promise<MediaCapabilitiesEncodingInfo>>();
}

