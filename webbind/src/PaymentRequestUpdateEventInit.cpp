#include <webbind/PaymentRequestUpdateEventInit.hpp>

namespace webbind {

PaymentRequestUpdateEventInit::PaymentRequestUpdateEventInit(Handle h) noexcept : EventInit(emlite::Val::take_ownership(h)) {}
PaymentRequestUpdateEventInit PaymentRequestUpdateEventInit::take_ownership(Handle h) noexcept {
    return PaymentRequestUpdateEventInit(h);
}

PaymentRequestUpdateEventInit::PaymentRequestUpdateEventInit(const emlite::Val &val) noexcept: EventInit(val) {}

PaymentRequestUpdateEventInit::PaymentRequestUpdateEventInit() noexcept: EventInit(emlite::Val::object()) {}

PaymentRequestUpdateEventInit PaymentRequestUpdateEventInit::clone() const noexcept { return *this; }


} // namespace webbind