#include <webbind/CollectedClientPaymentData.hpp>

using emlite::Val;
namespace webbind {

CollectedClientPaymentData::CollectedClientPaymentData(Handle h) noexcept : CollectedClientData(emlite::Val::take_ownership(h)) {}
CollectedClientPaymentData CollectedClientPaymentData::take_ownership(Handle h) noexcept {
        return CollectedClientPaymentData(h);
    }
CollectedClientPaymentData::CollectedClientPaymentData(const emlite::Val &val) noexcept: CollectedClientData(val) {}
CollectedClientPaymentData::CollectedClientPaymentData() noexcept: CollectedClientData(emlite::Val::object()) {}
CollectedClientPaymentData CollectedClientPaymentData::clone() const noexcept { return *this; }

jsbind::Any CollectedClientPaymentData::payment() const {
    return emlite::Val::get("payment").as<jsbind::Any>();
}

void CollectedClientPaymentData::payment(const jsbind::Any& value) {
    emlite::Val::set("payment", value);
}


} // namespace webbind