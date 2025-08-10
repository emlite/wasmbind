#include <webbind/ProtectedAudience.hpp>

namespace webbind {

ProtectedAudience ProtectedAudience::take_ownership(Handle h) noexcept {
        return ProtectedAudience(h);
    }
ProtectedAudience ProtectedAudience::clone() const noexcept { return *this; }
emlite::Val ProtectedAudience::instance() noexcept { return emlite::Val::global("ProtectedAudience"); }
ProtectedAudience::ProtectedAudience(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
ProtectedAudience::ProtectedAudience(const emlite::Val &val) noexcept: emlite::Val(val) {}

jsbind::Any ProtectedAudience::queryFeatureSupport(const jsbind::String& feature) {
    return emlite::Val::call("queryFeatureSupport", feature).as<jsbind::Any>();
}


} // namespace webbind