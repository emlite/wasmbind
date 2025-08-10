#include <webbind/AuthenticationExtensionsPaymentOutputs.hpp>
#include <webbind/BrowserBoundSignature.hpp>

using emlite::Val;
namespace webbind {

AuthenticationExtensionsPaymentOutputs::AuthenticationExtensionsPaymentOutputs(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
AuthenticationExtensionsPaymentOutputs AuthenticationExtensionsPaymentOutputs::take_ownership(Handle h) noexcept {
        return AuthenticationExtensionsPaymentOutputs(h);
    }
AuthenticationExtensionsPaymentOutputs::AuthenticationExtensionsPaymentOutputs(const emlite::Val &val) noexcept: emlite::Val(val) {}
AuthenticationExtensionsPaymentOutputs::AuthenticationExtensionsPaymentOutputs() noexcept: emlite::Val(emlite::Val::object()) {}
AuthenticationExtensionsPaymentOutputs AuthenticationExtensionsPaymentOutputs::clone() const noexcept { return *this; }

BrowserBoundSignature AuthenticationExtensionsPaymentOutputs::browserBoundSignature() const {
    return emlite::Val::get("browserBoundSignature").as<BrowserBoundSignature>();
}

void AuthenticationExtensionsPaymentOutputs::browserBoundSignature(const BrowserBoundSignature& value) {
    emlite::Val::set("browserBoundSignature", value);
}


} // namespace webbind