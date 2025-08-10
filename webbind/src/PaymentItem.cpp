#include <webbind/PaymentItem.hpp>
#include <webbind/PaymentCurrencyAmount.hpp>

namespace webbind {

PaymentItem::PaymentItem(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
PaymentItem PaymentItem::take_ownership(Handle h) noexcept {
    return PaymentItem(h);
}

PaymentItem::PaymentItem(const emlite::Val &val) noexcept: emlite::Val(val) {}

PaymentItem::PaymentItem() noexcept: emlite::Val(emlite::Val::object()) {}

PaymentItem PaymentItem::clone() const noexcept { return *this; }

jsbind::String PaymentItem::label() const {
    return emlite::Val::get("label").as<jsbind::String>();
}

void PaymentItem::label(const jsbind::String& value) {
    emlite::Val::set("label", value);
}

PaymentCurrencyAmount PaymentItem::amount() const {
    return emlite::Val::get("amount").as<PaymentCurrencyAmount>();
}

void PaymentItem::amount(const PaymentCurrencyAmount& value) {
    emlite::Val::set("amount", value);
}

bool PaymentItem::pending() const {
    return emlite::Val::get("pending").as<bool>();
}

void PaymentItem::pending(bool value) {
    emlite::Val::set("pending", value);
}


} // namespace webbind