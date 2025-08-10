#include "webbind/MediaCapabilitiesDecodingInfo.hpp"
#include "webbind/MediaKeySystemAccess.hpp"
#include "webbind/MediaDecodingConfiguration.hpp"

using emlite::Val;
namespace webbind {

MediaCapabilitiesDecodingInfo::MediaCapabilitiesDecodingInfo(Handle h) noexcept : MediaCapabilitiesInfo(emlite::Val::take_ownership(h)) {}
MediaCapabilitiesDecodingInfo MediaCapabilitiesDecodingInfo::take_ownership(Handle h) noexcept {
        return MediaCapabilitiesDecodingInfo(h);
    }
MediaCapabilitiesDecodingInfo::MediaCapabilitiesDecodingInfo(const emlite::Val &val) noexcept: MediaCapabilitiesInfo(val) {}
MediaCapabilitiesDecodingInfo::MediaCapabilitiesDecodingInfo() noexcept: MediaCapabilitiesInfo(emlite::Val::object()) {}
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


} // namespace webbind