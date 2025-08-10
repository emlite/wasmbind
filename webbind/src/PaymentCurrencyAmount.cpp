#include <webbind/PaymentCurrencyAmount.hpp>

namespace webbind {

PaymentCurrencyAmount::PaymentCurrencyAmount(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
PaymentCurrencyAmount PaymentCurrencyAmount::take_ownership(Handle h) noexcept {
    return PaymentCurrencyAmount(h);
}

PaymentCurrencyAmount::PaymentCurrencyAmount(const emlite::Val &val) noexcept: emlite::Val(val) {}

PaymentCurrencyAmount::PaymentCurrencyAmount() noexcept: emlite::Val(emlite::Val::object()) {}

PaymentCurrencyAmount PaymentCurrencyAmount::clone() const noexcept { return *this; }

jsbind::String PaymentCurrencyAmount::currency() const {
    return emlite::Val::get("currency").as<jsbind::String>();
}

void PaymentCurrencyAmount::currency(const jsbind::String& value) {
    emlite::Val::set("currency", value);
}

jsbind::String PaymentCurrencyAmount::value() const {
    return emlite::Val::get("value").as<jsbind::String>();
}

void PaymentCurrencyAmount::value(const jsbind::String& value) {
    emlite::Val::set("value", value);
}


} // namespace webbind