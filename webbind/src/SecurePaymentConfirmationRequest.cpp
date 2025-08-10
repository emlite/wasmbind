#include "webbind/SecurePaymentConfirmationRequest.hpp"
#include "webbind/PaymentCredentialInstrument.hpp"
#include "webbind/PaymentEntityLogo.hpp"
#include "webbind/AuthenticationExtensionsClientInputs.hpp"
#include "webbind/PublicKeyCredentialParameters.hpp"

using emlite::Val;
namespace webbind {

SecurePaymentConfirmationRequest::SecurePaymentConfirmationRequest(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
SecurePaymentConfirmationRequest SecurePaymentConfirmationRequest::take_ownership(Handle h) noexcept {
        return SecurePaymentConfirmationRequest(h);
    }
SecurePaymentConfirmationRequest::SecurePaymentConfirmationRequest(const emlite::Val &val) noexcept: emlite::Val(val) {}
SecurePaymentConfirmationRequest::SecurePaymentConfirmationRequest() noexcept: emlite::Val(emlite::Val::object()) {}
SecurePaymentConfirmationRequest SecurePaymentConfirmationRequest::clone() const noexcept { return *this; }

jsbind::Any SecurePaymentConfirmationRequest::challenge() const {
    return emlite::Val::get("challenge").as<jsbind::Any>();
}

void SecurePaymentConfirmationRequest::challenge(const jsbind::Any& value) {
    emlite::Val::set("challenge", value);
}

jsbind::String SecurePaymentConfirmationRequest::rpId() const {
    return emlite::Val::get("rpId").as<jsbind::String>();
}

void SecurePaymentConfirmationRequest::rpId(const jsbind::String& value) {
    emlite::Val::set("rpId", value);
}

jsbind::TypedArray<jsbind::Any> SecurePaymentConfirmationRequest::credentialIds() const {
    return emlite::Val::get("credentialIds").as<jsbind::TypedArray<jsbind::Any>>();
}

void SecurePaymentConfirmationRequest::credentialIds(const jsbind::TypedArray<jsbind::Any>& value) {
    emlite::Val::set("credentialIds", value);
}

PaymentCredentialInstrument SecurePaymentConfirmationRequest::instrument() const {
    return emlite::Val::get("instrument").as<PaymentCredentialInstrument>();
}

void SecurePaymentConfirmationRequest::instrument(const PaymentCredentialInstrument& value) {
    emlite::Val::set("instrument", value);
}

unsigned long SecurePaymentConfirmationRequest::timeout() const {
    return emlite::Val::get("timeout").as<unsigned long>();
}

void SecurePaymentConfirmationRequest::timeout(unsigned long value) {
    emlite::Val::set("timeout", value);
}

jsbind::String SecurePaymentConfirmationRequest::payeeName() const {
    return emlite::Val::get("payeeName").as<jsbind::String>();
}

void SecurePaymentConfirmationRequest::payeeName(const jsbind::String& value) {
    emlite::Val::set("payeeName", value);
}

jsbind::String SecurePaymentConfirmationRequest::payeeOrigin() const {
    return emlite::Val::get("payeeOrigin").as<jsbind::String>();
}

void SecurePaymentConfirmationRequest::payeeOrigin(const jsbind::String& value) {
    emlite::Val::set("payeeOrigin", value);
}

jsbind::TypedArray<PaymentEntityLogo> SecurePaymentConfirmationRequest::paymentEntitiesLogos() const {
    return emlite::Val::get("paymentEntitiesLogos").as<jsbind::TypedArray<PaymentEntityLogo>>();
}

void SecurePaymentConfirmationRequest::paymentEntitiesLogos(const jsbind::TypedArray<PaymentEntityLogo>& value) {
    emlite::Val::set("paymentEntitiesLogos", value);
}

AuthenticationExtensionsClientInputs SecurePaymentConfirmationRequest::extensions() const {
    return emlite::Val::get("extensions").as<AuthenticationExtensionsClientInputs>();
}

void SecurePaymentConfirmationRequest::extensions(const AuthenticationExtensionsClientInputs& value) {
    emlite::Val::set("extensions", value);
}

jsbind::TypedArray<PublicKeyCredentialParameters> SecurePaymentConfirmationRequest::browserBoundPubKeyCredParams() const {
    return emlite::Val::get("browserBoundPubKeyCredParams").as<jsbind::TypedArray<PublicKeyCredentialParameters>>();
}

void SecurePaymentConfirmationRequest::browserBoundPubKeyCredParams(const jsbind::TypedArray<PublicKeyCredentialParameters>& value) {
    emlite::Val::set("browserBoundPubKeyCredParams", value);
}

jsbind::TypedArray<jsbind::String> SecurePaymentConfirmationRequest::locale() const {
    return emlite::Val::get("locale").as<jsbind::TypedArray<jsbind::String>>();
}

void SecurePaymentConfirmationRequest::locale(const jsbind::TypedArray<jsbind::String>& value) {
    emlite::Val::set("locale", value);
}

bool SecurePaymentConfirmationRequest::showOptOut() const {
    return emlite::Val::get("showOptOut").as<bool>();
}

void SecurePaymentConfirmationRequest::showOptOut(bool value) {
    emlite::Val::set("showOptOut", value);
}


} // namespace webbind