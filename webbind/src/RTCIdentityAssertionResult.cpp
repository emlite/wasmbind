#include "webbind/RTCIdentityAssertionResult.hpp"
#include "webbind/RTCIdentityProviderDetails.hpp"

using emlite::Val;
namespace webbind {

RTCIdentityAssertionResult::RTCIdentityAssertionResult(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
RTCIdentityAssertionResult RTCIdentityAssertionResult::take_ownership(Handle h) noexcept {
        return RTCIdentityAssertionResult(h);
    }
RTCIdentityAssertionResult::RTCIdentityAssertionResult(const emlite::Val &val) noexcept: emlite::Val(val) {}
RTCIdentityAssertionResult::RTCIdentityAssertionResult() noexcept: emlite::Val(emlite::Val::object()) {}
RTCIdentityAssertionResult RTCIdentityAssertionResult::clone() const noexcept { return *this; }

RTCIdentityProviderDetails RTCIdentityAssertionResult::idp() const {
    return emlite::Val::get("idp").as<RTCIdentityProviderDetails>();
}

void RTCIdentityAssertionResult::idp(const RTCIdentityProviderDetails& value) {
    emlite::Val::set("idp", value);
}

jsbind::String RTCIdentityAssertionResult::assertion() const {
    return emlite::Val::get("assertion").as<jsbind::String>();
}

void RTCIdentityAssertionResult::assertion(const jsbind::String& value) {
    emlite::Val::set("assertion", value);
}


} // namespace webbind