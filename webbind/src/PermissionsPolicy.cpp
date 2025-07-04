#include <webbind/PermissionsPolicy.hpp>


PermissionsPolicy PermissionsPolicy::take_ownership(Handle h) noexcept {
        return PermissionsPolicy(h);
    }
PermissionsPolicy PermissionsPolicy::clone() const noexcept { return *this; }
PermissionsPolicy::PermissionsPolicy(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
PermissionsPolicy::PermissionsPolicy(const emlite::Val &val) noexcept: emlite::Val(val) {}


bool PermissionsPolicy::allowsFeature(const jsbind::DOMString& feature, const jsbind::DOMString& origin) {
    return emlite::Val::call("allowsFeature", feature, origin).as<bool>();
}

jsbind::Sequence<jsbind::DOMString> PermissionsPolicy::features() {
    return emlite::Val::call("features").as<jsbind::Sequence<jsbind::DOMString>>();
}

jsbind::Sequence<jsbind::DOMString> PermissionsPolicy::allowedFeatures() {
    return emlite::Val::call("allowedFeatures").as<jsbind::Sequence<jsbind::DOMString>>();
}

jsbind::Sequence<jsbind::DOMString> PermissionsPolicy::getAllowlistForFeature(const jsbind::DOMString& feature) {
    return emlite::Val::call("getAllowlistForFeature", feature).as<jsbind::Sequence<jsbind::DOMString>>();
}

