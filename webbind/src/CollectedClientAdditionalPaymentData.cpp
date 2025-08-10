#include "webbind/CollectedClientAdditionalPaymentData.hpp"
#include "webbind/PaymentEntityLogo.hpp"
#include "webbind/PaymentCurrencyAmount.hpp"
#include "webbind/PaymentCredentialInstrument.hpp"

using emlite::Val;
namespace webbind {

CollectedClientAdditionalPaymentData::CollectedClientAdditionalPaymentData(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
CollectedClientAdditionalPaymentData CollectedClientAdditionalPaymentData::take_ownership(Handle h) noexcept {
        return CollectedClientAdditionalPaymentData(h);
    }
CollectedClientAdditionalPaymentData::CollectedClientAdditionalPaymentData(const emlite::Val &val) noexcept: emlite::Val(val) {}
CollectedClientAdditionalPaymentData::CollectedClientAdditionalPaymentData() noexcept: emlite::Val(emlite::Val::object()) {}
CollectedClientAdditionalPaymentData CollectedClientAdditionalPaymentData::clone() const noexcept { return *this; }

jsbind::String CollectedClientAdditionalPaymentData::rpId() const {
    return emlite::Val::get("rpId").as<jsbind::String>();
}

void CollectedClientAdditionalPaymentData::rpId(const jsbind::String& value) {
    emlite::Val::set("rpId", value);
}

jsbind::String CollectedClientAdditionalPaymentData::topOrigin() const {
    return emlite::Val::get("topOrigin").as<jsbind::String>();
}

void CollectedClientAdditionalPaymentData::topOrigin(const jsbind::String& value) {
    emlite::Val::set("topOrigin", value);
}

jsbind::String CollectedClientAdditionalPaymentData::payeeName() const {
    return emlite::Val::get("payeeName").as<jsbind::String>();
}

void CollectedClientAdditionalPaymentData::payeeName(const jsbind::String& value) {
    emlite::Val::set("payeeName", value);
}

jsbind::String CollectedClientAdditionalPaymentData::payeeOrigin() const {
    return emlite::Val::get("payeeOrigin").as<jsbind::String>();
}

void CollectedClientAdditionalPaymentData::payeeOrigin(const jsbind::String& value) {
    emlite::Val::set("payeeOrigin", value);
}

jsbind::TypedArray<PaymentEntityLogo> CollectedClientAdditionalPaymentData::paymentEntitiesLogos() const {
    return emlite::Val::get("paymentEntitiesLogos").as<jsbind::TypedArray<PaymentEntityLogo>>();
}

void CollectedClientAdditionalPaymentData::paymentEntitiesLogos(const jsbind::TypedArray<PaymentEntityLogo>& value) {
    emlite::Val::set("paymentEntitiesLogos", value);
}

PaymentCurrencyAmount CollectedClientAdditionalPaymentData::total() const {
    return emlite::Val::get("total").as<PaymentCurrencyAmount>();
}

void CollectedClientAdditionalPaymentData::total(const PaymentCurrencyAmount& value) {
    emlite::Val::set("total", value);
}

PaymentCredentialInstrument CollectedClientAdditionalPaymentData::instrument() const {
    return emlite::Val::get("instrument").as<PaymentCredentialInstrument>();
}

void CollectedClientAdditionalPaymentData::instrument(const PaymentCredentialInstrument& value) {
    emlite::Val::set("instrument", value);
}

jsbind::String CollectedClientAdditionalPaymentData::browserBoundPublicKey() const {
    return emlite::Val::get("browserBoundPublicKey").as<jsbind::String>();
}

void CollectedClientAdditionalPaymentData::browserBoundPublicKey(const jsbind::String& value) {
    emlite::Val::set("browserBoundPublicKey", value);
}


} // namespace webbind