#include "webbind/MediaEncodingConfiguration.hpp"

using emlite::Val;
namespace webbind {

MediaEncodingConfiguration::MediaEncodingConfiguration(Handle h) noexcept : MediaConfiguration(emlite::Val::take_ownership(h)) {}
MediaEncodingConfiguration MediaEncodingConfiguration::take_ownership(Handle h) noexcept {
        return MediaEncodingConfiguration(h);
    }
MediaEncodingConfiguration::MediaEncodingConfiguration(const emlite::Val &val) noexcept: MediaConfiguration(val) {}
MediaEncodingConfiguration::MediaEncodingConfiguration() noexcept: MediaConfiguration(emlite::Val::object()) {}
MediaEncodingConfiguration MediaEncodingConfiguration::clone() const noexcept { return *this; }

MediaEncodingType MediaEncodingConfiguration::type() const {
    return emlite::Val::get("type").as<MediaEncodingType>();
}

void MediaEncodingConfiguration::type(const MediaEncodingType& value) {
    emlite::Val::set("type", value);
}


} // namespace webbind