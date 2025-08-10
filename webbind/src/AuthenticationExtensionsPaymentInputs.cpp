#include "webbind/AuthenticationExtensionsPaymentInputs.hpp"
#include "webbind/PublicKeyCredentialParameters.hpp"
#include "webbind/PaymentEntityLogo.hpp"
#include "webbind/PaymentCurrencyAmount.hpp"
#include "webbind/PaymentCredentialInstrument.hpp"

using emlite::Val;
namespace webbind {

AuthenticationExtensionsPaymentInputs::AuthenticationExtensionsPaymentInputs(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
AuthenticationExtensionsPaymentInputs AuthenticationExtensionsPaymentInputs::take_ownership(Handle h) noexcept {
        return AuthenticationExtensionsPaymentInputs(h);
    }
AuthenticationExtensionsPaymentInputs::AuthenticationExtensionsPaymentInputs(const emlite::Val &val) noexcept: emlite::Val(val) {}
AuthenticationExtensionsPaymentInputs::AuthenticationExtensionsPaymentInputs() noexcept: emlite::Val(emlite::Val::object()) {}
AuthenticationExtensionsPaymentInputs AuthenticationExtensionsPaymentInputs::clone() const noexcept { return *this; }

bool AuthenticationExtensionsPaymentInputs::isPayment() const {
    return emlite::Val::get("isPayment").as<bool>();
}

void AuthenticationExtensionsPaymentInputs::isPayment(bool value) {
    emlite::Val::set("isPayment", value);
}

jsbind::TypedArray<PublicKeyCredentialParameters> AuthenticationExtensionsPaymentInputs::browserBoundPubKeyCredParams() const {
    return emlite::Val::get("browserBoundPubKeyCredParams").as<jsbind::TypedArray<PublicKeyCredentialParameters>>();
}

void AuthenticationExtensionsPaymentInputs::browserBoundPubKeyCredParams(const jsbind::TypedArray<PublicKeyCredentialParameters>& value) {
    emlite::Val::set("browserBoundPubKeyCredParams", value);
}

jsbind::String AuthenticationExtensionsPaymentInputs::rpId() const {
    return emlite::Val::get("rpId").as<jsbind::String>();
}

void AuthenticationExtensionsPaymentInputs::rpId(const jsbind::String& value) {
    emlite::Val::set("rpId", value);
}

jsbind::String AuthenticationExtensionsPaymentInputs::topOrigin() const {
    return emlite::Val::get("topOrigin").as<jsbind::String>();
}

void AuthenticationExtensionsPaymentInputs::topOrigin(const jsbind::String& value) {
    emlite::Val::set("topOrigin", value);
}

jsbind::String AuthenticationExtensionsPaymentInputs::payeeName() const {
    return emlite::Val::get("payeeName").as<jsbind::String>();
}

void AuthenticationExtensionsPaymentInputs::payeeName(const jsbind::String& value) {
    emlite::Val::set("payeeName", value);
}

jsbind::String AuthenticationExtensionsPaymentInputs::payeeOrigin() const {
    return emlite::Val::get("payeeOrigin").as<jsbind::String>();
}

void AuthenticationExtensionsPaymentInputs::payeeOrigin(const jsbind::String& value) {
    emlite::Val::set("payeeOrigin", value);
}

jsbind::TypedArray<PaymentEntityLogo> AuthenticationExtensionsPaymentInputs::paymentEntitiesLogos() const {
    return emlite::Val::get("paymentEntitiesLogos").as<jsbind::TypedArray<PaymentEntityLogo>>();
}

void AuthenticationExtensionsPaymentInputs::paymentEntitiesLogos(const jsbind::TypedArray<PaymentEntityLogo>& value) {
    emlite::Val::set("paymentEntitiesLogos", value);
}

PaymentCurrencyAmount AuthenticationExtensionsPaymentInputs::total() const {
    return emlite::Val::get("total").as<PaymentCurrencyAmount>();
}

void AuthenticationExtensionsPaymentInputs::total(const PaymentCurrencyAmount& value) {
    emlite::Val::set("total", value);
}

PaymentCredentialInstrument AuthenticationExtensionsPaymentInputs::instrument() const {
    return emlite::Val::get("instrument").as<PaymentCredentialInstrument>();
}

void AuthenticationExtensionsPaymentInputs::instrument(const PaymentCredentialInstrument& value) {
    emlite::Val::set("instrument", value);
}


} // namespace webbind