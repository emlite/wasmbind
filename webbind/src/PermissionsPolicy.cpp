#include <webbind/PermissionsPolicy.hpp>

namespace webbind {

PermissionsPolicy PermissionsPolicy::take_ownership(Handle h) noexcept {
        return PermissionsPolicy(h);
    }
PermissionsPolicy PermissionsPolicy::clone() const noexcept { return *this; }
emlite::Val PermissionsPolicy::instance() noexcept { return emlite::Val::global("PermissionsPolicy"); }
PermissionsPolicy::PermissionsPolicy(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
PermissionsPolicy::PermissionsPolicy(const emlite::Val &val) noexcept: emlite::Val(val) {}

bool PermissionsPolicy::allowsFeature(const jsbind::String& feature) {
    return emlite::Val::call("allowsFeature", feature).as<bool>();
}

bool PermissionsPolicy::allowsFeature(const jsbind::String& feature, const jsbind::String& origin) {
    return emlite::Val::call("allowsFeature", feature, origin).as<bool>();
}

jsbind::TypedArray<jsbind::String> PermissionsPolicy::features() {
    return emlite::Val::call("features").as<jsbind::TypedArray<jsbind::String>>();
}

jsbind::TypedArray<jsbind::String> PermissionsPolicy::allowedFeatures() {
    return emlite::Val::call("allowedFeatures").as<jsbind::TypedArray<jsbind::String>>();
}

jsbind::TypedArray<jsbind::String> PermissionsPolicy::getAllowlistForFeature(const jsbind::String& feature) {
    return emlite::Val::call("getAllowlistForFeature", feature).as<jsbind::TypedArray<jsbind::String>>();
}


} // namespace webbind