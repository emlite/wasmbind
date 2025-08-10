#include <webbind/PaymentDetailsInit.hpp>
#include <webbind/PaymentItem.hpp>

namespace webbind {

PaymentDetailsInit::PaymentDetailsInit(Handle h) noexcept : PaymentDetailsBase(emlite::Val::take_ownership(h)) {}
PaymentDetailsInit PaymentDetailsInit::take_ownership(Handle h) noexcept {
    return PaymentDetailsInit(h);
}

PaymentDetailsInit::PaymentDetailsInit(const emlite::Val &val) noexcept: PaymentDetailsBase(val) {}

PaymentDetailsInit::PaymentDetailsInit() noexcept: PaymentDetailsBase(emlite::Val::object()) {}

PaymentDetailsInit PaymentDetailsInit::clone() const noexcept { return *this; }

jsbind::String PaymentDetailsInit::id() const {
    return emlite::Val::get("id").as<jsbind::String>();
}

void PaymentDetailsInit::id(const jsbind::String& value) {
    emlite::Val::set("id", value);
}

PaymentItem PaymentDetailsInit::total() const {
    return emlite::Val::get("total").as<PaymentItem>();
}

void PaymentDetailsInit::total(const PaymentItem& value) {
    emlite::Val::set("total", value);
}


} // namespace webbind