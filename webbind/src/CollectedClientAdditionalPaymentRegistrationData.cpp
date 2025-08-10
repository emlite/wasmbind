#include "webbind/CollectedClientAdditionalPaymentRegistrationData.hpp"

using emlite::Val;
namespace webbind {

CollectedClientAdditionalPaymentRegistrationData::CollectedClientAdditionalPaymentRegistrationData(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
CollectedClientAdditionalPaymentRegistrationData CollectedClientAdditionalPaymentRegistrationData::take_ownership(Handle h) noexcept {
        return CollectedClientAdditionalPaymentRegistrationData(h);
    }
CollectedClientAdditionalPaymentRegistrationData::CollectedClientAdditionalPaymentRegistrationData(const emlite::Val &val) noexcept: emlite::Val(val) {}
CollectedClientAdditionalPaymentRegistrationData::CollectedClientAdditionalPaymentRegistrationData() noexcept: emlite::Val(emlite::Val::object()) {}
CollectedClientAdditionalPaymentRegistrationData CollectedClientAdditionalPaymentRegistrationData::clone() const noexcept { return *this; }

jsbind::String CollectedClientAdditionalPaymentRegistrationData::browserBoundPublicKey() const {
    return emlite::Val::get("browserBoundPublicKey").as<jsbind::String>();
}

void CollectedClientAdditionalPaymentRegistrationData::browserBoundPublicKey(const jsbind::String& value) {
    emlite::Val::set("browserBoundPublicKey", value);
}


} // namespace webbind