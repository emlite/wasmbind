#include <webbind/MediaDecodingConfiguration.hpp>
#include <webbind/MediaCapabilitiesKeySystemConfiguration.hpp>

using emlite::Val;
namespace webbind {

MediaDecodingConfiguration::MediaDecodingConfiguration(Handle h) noexcept : MediaConfiguration(emlite::Val::take_ownership(h)) {}
MediaDecodingConfiguration MediaDecodingConfiguration::take_ownership(Handle h) noexcept {
        return MediaDecodingConfiguration(h);
    }
MediaDecodingConfiguration::MediaDecodingConfiguration(const emlite::Val &val) noexcept: MediaConfiguration(val) {}
MediaDecodingConfiguration::MediaDecodingConfiguration() noexcept: MediaConfiguration(emlite::Val::object()) {}
MediaDecodingConfiguration MediaDecodingConfiguration::clone() const noexcept { return *this; }

MediaDecodingType MediaDecodingConfiguration::type() const {
    return emlite::Val::get("type").as<MediaDecodingType>();
}

void MediaDecodingConfiguration::type(const MediaDecodingType& value) {
    emlite::Val::set("type", value);
}

MediaCapabilitiesKeySystemConfiguration MediaDecodingConfiguration::keySystemConfiguration() const {
    return emlite::Val::get("keySystemConfiguration").as<MediaCapabilitiesKeySystemConfiguration>();
}

void MediaDecodingConfiguration::keySystemConfiguration(const MediaCapabilitiesKeySystemConfiguration& value) {
    emlite::Val::set("keySystemConfiguration", value);
}


} // namespace webbind