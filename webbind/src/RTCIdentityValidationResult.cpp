#include "webbind/RTCIdentityValidationResult.hpp"

using emlite::Val;
namespace webbind {

RTCIdentityValidationResult::RTCIdentityValidationResult(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
RTCIdentityValidationResult RTCIdentityValidationResult::take_ownership(Handle h) noexcept {
        return RTCIdentityValidationResult(h);
    }
RTCIdentityValidationResult::RTCIdentityValidationResult(const emlite::Val &val) noexcept: emlite::Val(val) {}
RTCIdentityValidationResult::RTCIdentityValidationResult() noexcept: emlite::Val(emlite::Val::object()) {}
RTCIdentityValidationResult RTCIdentityValidationResult::clone() const noexcept { return *this; }

jsbind::String RTCIdentityValidationResult::identity() const {
    return emlite::Val::get("identity").as<jsbind::String>();
}

void RTCIdentityValidationResult::identity(const jsbind::String& value) {
    emlite::Val::set("identity", value);
}

jsbind::String RTCIdentityValidationResult::contents() const {
    return emlite::Val::get("contents").as<jsbind::String>();
}

void RTCIdentityValidationResult::contents(const jsbind::String& value) {
    emlite::Val::set("contents", value);
}


} // namespace webbind