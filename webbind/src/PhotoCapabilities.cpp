#include <webbind/PhotoCapabilities.hpp>
#include <webbind/MediaSettingsRange.hpp>

namespace webbind {

PhotoCapabilities::PhotoCapabilities(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
PhotoCapabilities PhotoCapabilities::take_ownership(Handle h) noexcept {
    return PhotoCapabilities(h);
}

PhotoCapabilities::PhotoCapabilities(const emlite::Val &val) noexcept: emlite::Val(val) {}

PhotoCapabilities::PhotoCapabilities() noexcept: emlite::Val(emlite::Val::object()) {}

PhotoCapabilities PhotoCapabilities::clone() const noexcept { return *this; }

RedEyeReduction PhotoCapabilities::redEyeReduction() const {
    return emlite::Val::get("redEyeReduction").as<RedEyeReduction>();
}

void PhotoCapabilities::redEyeReduction(const RedEyeReduction& value) {
    emlite::Val::set("redEyeReduction", value);
}

MediaSettingsRange PhotoCapabilities::imageHeight() const {
    return emlite::Val::get("imageHeight").as<MediaSettingsRange>();
}

void PhotoCapabilities::imageHeight(const MediaSettingsRange& value) {
    emlite::Val::set("imageHeight", value);
}

MediaSettingsRange PhotoCapabilities::imageWidth() const {
    return emlite::Val::get("imageWidth").as<MediaSettingsRange>();
}

void PhotoCapabilities::imageWidth(const MediaSettingsRange& value) {
    emlite::Val::set("imageWidth", value);
}

jsbind::TypedArray<FillLightMode> PhotoCapabilities::fillLightMode() const {
    return emlite::Val::get("fillLightMode").as<jsbind::TypedArray<FillLightMode>>();
}

void PhotoCapabilities::fillLightMode(const jsbind::TypedArray<FillLightMode>& value) {
    emlite::Val::set("fillLightMode", value);
}


} // namespace webbind