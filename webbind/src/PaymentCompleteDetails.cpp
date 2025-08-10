#include <webbind/PaymentCompleteDetails.hpp>

using emlite::Val;
namespace webbind {

PaymentCompleteDetails::PaymentCompleteDetails(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
PaymentCompleteDetails PaymentCompleteDetails::take_ownership(Handle h) noexcept {
        return PaymentCompleteDetails(h);
    }
PaymentCompleteDetails::PaymentCompleteDetails(const emlite::Val &val) noexcept: emlite::Val(val) {}
PaymentCompleteDetails::PaymentCompleteDetails() noexcept: emlite::Val(emlite::Val::object()) {}
PaymentCompleteDetails PaymentCompleteDetails::clone() const noexcept { return *this; }

jsbind::Object PaymentCompleteDetails::data() const {
    return emlite::Val::get("data").as<jsbind::Object>();
}

void PaymentCompleteDetails::data(const jsbind::Object& value) {
    emlite::Val::set("data", value);
}


} // namespace webbind