#include <webbind/MediaCapabilitiesInfo.hpp>

using emlite::Val;
namespace webbind {

MediaCapabilitiesInfo::MediaCapabilitiesInfo(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
MediaCapabilitiesInfo MediaCapabilitiesInfo::take_ownership(Handle h) noexcept {
        return MediaCapabilitiesInfo(h);
    }
MediaCapabilitiesInfo::MediaCapabilitiesInfo(const emlite::Val &val) noexcept: emlite::Val(val) {}
MediaCapabilitiesInfo::MediaCapabilitiesInfo() noexcept: emlite::Val(emlite::Val::object()) {}
MediaCapabilitiesInfo MediaCapabilitiesInfo::clone() const noexcept { return *this; }

bool MediaCapabilitiesInfo::supported() const {
    return emlite::Val::get("supported").as<bool>();
}

void MediaCapabilitiesInfo::supported(bool value) {
    emlite::Val::set("supported", value);
}

bool MediaCapabilitiesInfo::smooth() const {
    return emlite::Val::get("smooth").as<bool>();
}

void MediaCapabilitiesInfo::smooth(bool value) {
    emlite::Val::set("smooth", value);
}

bool MediaCapabilitiesInfo::powerEfficient() const {
    return emlite::Val::get("powerEfficient").as<bool>();
}

void MediaCapabilitiesInfo::powerEfficient(bool value) {
    emlite::Val::set("powerEfficient", value);
}


} // namespace webbind