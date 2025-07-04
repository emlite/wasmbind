#include <webbind/ProtectedAudience.hpp>


ProtectedAudience ProtectedAudience::take_ownership(Handle h) noexcept {
        return ProtectedAudience(h);
    }
ProtectedAudience ProtectedAudience::clone() const noexcept { return *this; }
ProtectedAudience::ProtectedAudience(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
ProtectedAudience::ProtectedAudience(const emlite::Val &val) noexcept: emlite::Val(val) {}


jsbind::Any ProtectedAudience::queryFeatureSupport(const jsbind::DOMString& feature) {
    return emlite::Val::call("queryFeatureSupport", feature).as<jsbind::Any>();
}

