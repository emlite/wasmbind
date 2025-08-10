#include <webbind/MediaKeyStatusMap.hpp>

namespace webbind {

MediaKeyStatusMap MediaKeyStatusMap::take_ownership(Handle h) noexcept {
    return MediaKeyStatusMap(h);
}

MediaKeyStatusMap MediaKeyStatusMap::clone() const noexcept { return *this; }

emlite::Val MediaKeyStatusMap::instance() noexcept { return emlite::Val::global("MediaKeyStatusMap"); }

MediaKeyStatusMap::MediaKeyStatusMap(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}

MediaKeyStatusMap::MediaKeyStatusMap(const emlite::Val &val) noexcept: emlite::Val(val) {}

unsigned long MediaKeyStatusMap::size() const {
    return emlite::Val::get("size").as<unsigned long>();
}

bool MediaKeyStatusMap::has(const jsbind::Any& keyId) {
    return emlite::Val::call("has", keyId).as<bool>();
}

jsbind::Any MediaKeyStatusMap::get(const jsbind::Any& keyId) {
    return emlite::Val::call("get", keyId).as<jsbind::Any>();
}


} // namespace webbind