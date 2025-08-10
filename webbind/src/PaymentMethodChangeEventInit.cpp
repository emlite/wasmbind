#include <webbind/PaymentMethodChangeEventInit.hpp>

using emlite::Val;
namespace webbind {

PaymentMethodChangeEventInit::PaymentMethodChangeEventInit(Handle h) noexcept : PaymentRequestUpdateEventInit(emlite::Val::take_ownership(h)) {}
PaymentMethodChangeEventInit PaymentMethodChangeEventInit::take_ownership(Handle h) noexcept {
        return PaymentMethodChangeEventInit(h);
    }
PaymentMethodChangeEventInit::PaymentMethodChangeEventInit(const emlite::Val &val) noexcept: PaymentRequestUpdateEventInit(val) {}
PaymentMethodChangeEventInit::PaymentMethodChangeEventInit() noexcept: PaymentRequestUpdateEventInit(emlite::Val::object()) {}
PaymentMethodChangeEventInit PaymentMethodChangeEventInit::clone() const noexcept { return *this; }

jsbind::String PaymentMethodChangeEventInit::methodName() const {
    return emlite::Val::get("methodName").as<jsbind::String>();
}

void PaymentMethodChangeEventInit::methodName(const jsbind::String& value) {
    emlite::Val::set("methodName", value);
}

jsbind::Object PaymentMethodChangeEventInit::methodDetails() const {
    return emlite::Val::get("methodDetails").as<jsbind::Object>();
}

void PaymentMethodChangeEventInit::methodDetails(const jsbind::Object& value) {
    emlite::Val::set("methodDetails", value);
}


} // namespace webbind