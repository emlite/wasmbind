#include <webbind/RTCIdentityProvider.hpp>

using emlite::Val;
namespace webbind {

RTCIdentityProvider::RTCIdentityProvider(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
RTCIdentityProvider RTCIdentityProvider::take_ownership(Handle h) noexcept {
        return RTCIdentityProvider(h);
    }
RTCIdentityProvider::RTCIdentityProvider(const emlite::Val &val) noexcept: emlite::Val(val) {}
RTCIdentityProvider::RTCIdentityProvider() noexcept: emlite::Val(emlite::Val::object()) {}
RTCIdentityProvider RTCIdentityProvider::clone() const noexcept { return *this; }

jsbind::Function RTCIdentityProvider::generateAssertion() const {
    return emlite::Val::get("generateAssertion").as<jsbind::Function>();
}

void RTCIdentityProvider::generateAssertion(const jsbind::Function& value) {
    emlite::Val::set("generateAssertion", value);
}

jsbind::Function RTCIdentityProvider::validateAssertion() const {
    return emlite::Val::get("validateAssertion").as<jsbind::Function>();
}

void RTCIdentityProvider::validateAssertion(const jsbind::Function& value) {
    emlite::Val::set("validateAssertion", value);
}


} // namespace webbind