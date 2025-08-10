#include <webbind/MediaCapabilities.hpp>
#include <webbind/MediaCapabilitiesDecodingInfo.hpp>
#include <webbind/MediaDecodingConfiguration.hpp>
#include <webbind/MediaCapabilitiesEncodingInfo.hpp>
#include <webbind/MediaEncodingConfiguration.hpp>

namespace webbind {

MediaCapabilities MediaCapabilities::take_ownership(Handle h) noexcept {
        return MediaCapabilities(h);
    }
MediaCapabilities MediaCapabilities::clone() const noexcept { return *this; }
emlite::Val MediaCapabilities::instance() noexcept { return emlite::Val::global("MediaCapabilities"); }
MediaCapabilities::MediaCapabilities(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
MediaCapabilities::MediaCapabilities(const emlite::Val &val) noexcept: emlite::Val(val) {}

jsbind::Promise<MediaCapabilitiesDecodingInfo> MediaCapabilities::decodingInfo(const MediaDecodingConfiguration& configuration) {
    return emlite::Val::call("decodingInfo", configuration).as<jsbind::Promise<MediaCapabilitiesDecodingInfo>>();
}

jsbind::Promise<MediaCapabilitiesEncodingInfo> MediaCapabilities::encodingInfo(const MediaEncodingConfiguration& configuration) {
    return emlite::Val::call("encodingInfo", configuration).as<jsbind::Promise<MediaCapabilitiesEncodingInfo>>();
}


} // namespace webbind