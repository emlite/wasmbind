#include <webbind/MediaKeysPolicy.hpp>

namespace webbind {

MediaKeysPolicy::MediaKeysPolicy(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
MediaKeysPolicy MediaKeysPolicy::take_ownership(Handle h) noexcept {
    return MediaKeysPolicy(h);
}

MediaKeysPolicy::MediaKeysPolicy(const emlite::Val &val) noexcept: emlite::Val(val) {}

MediaKeysPolicy::MediaKeysPolicy() noexcept: emlite::Val(emlite::Val::object()) {}

MediaKeysPolicy MediaKeysPolicy::clone() const noexcept { return *this; }

jsbind::String MediaKeysPolicy::minHdcpVersion() const {
    return emlite::Val::get("minHdcpVersion").as<jsbind::String>();
}

void MediaKeysPolicy::minHdcpVersion(const jsbind::String& value) {
    emlite::Val::set("minHdcpVersion", value);
}


} // namespace webbind