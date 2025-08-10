#include <webbind/PaymentShippingOption.hpp>
#include <webbind/PaymentCurrencyAmount.hpp>

using emlite::Val;
namespace webbind {

PaymentShippingOption::PaymentShippingOption(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
PaymentShippingOption PaymentShippingOption::take_ownership(Handle h) noexcept {
        return PaymentShippingOption(h);
    }
PaymentShippingOption::PaymentShippingOption(const emlite::Val &val) noexcept: emlite::Val(val) {}
PaymentShippingOption::PaymentShippingOption() noexcept: emlite::Val(emlite::Val::object()) {}
PaymentShippingOption PaymentShippingOption::clone() const noexcept { return *this; }

jsbind::String PaymentShippingOption::id() const {
    return emlite::Val::get("id").as<jsbind::String>();
}

void PaymentShippingOption::id(const jsbind::String& value) {
    emlite::Val::set("id", value);
}

jsbind::String PaymentShippingOption::label() const {
    return emlite::Val::get("label").as<jsbind::String>();
}

void PaymentShippingOption::label(const jsbind::String& value) {
    emlite::Val::set("label", value);
}

PaymentCurrencyAmount PaymentShippingOption::amount() const {
    return emlite::Val::get("amount").as<PaymentCurrencyAmount>();
}

void PaymentShippingOption::amount(const PaymentCurrencyAmount& value) {
    emlite::Val::set("amount", value);
}

bool PaymentShippingOption::selected() const {
    return emlite::Val::get("selected").as<bool>();
}

void PaymentShippingOption::selected(bool value) {
    emlite::Val::set("selected", value);
}


} // namespace webbind