#include <webbind/MediaCapabilitiesEncodingInfo.hpp>
#include <webbind/MediaEncodingConfiguration.hpp>

using emlite::Val;
namespace webbind {

MediaCapabilitiesEncodingInfo::MediaCapabilitiesEncodingInfo(Handle h) noexcept : MediaCapabilitiesInfo(emlite::Val::take_ownership(h)) {}
MediaCapabilitiesEncodingInfo MediaCapabilitiesEncodingInfo::take_ownership(Handle h) noexcept {
        return MediaCapabilitiesEncodingInfo(h);
    }
MediaCapabilitiesEncodingInfo::MediaCapabilitiesEncodingInfo(const emlite::Val &val) noexcept: MediaCapabilitiesInfo(val) {}
MediaCapabilitiesEncodingInfo::MediaCapabilitiesEncodingInfo() noexcept: MediaCapabilitiesInfo(emlite::Val::object()) {}
MediaCapabilitiesEncodingInfo MediaCapabilitiesEncodingInfo::clone() const noexcept { return *this; }

MediaEncodingConfiguration MediaCapabilitiesEncodingInfo::configuration() const {
    return emlite::Val::get("configuration").as<MediaEncodingConfiguration>();
}

void MediaCapabilitiesEncodingInfo::configuration(const MediaEncodingConfiguration& value) {
    emlite::Val::set("configuration", value);
}


} // namespace webbind