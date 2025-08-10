#include <webbind/CanMakePaymentEvent.hpp>

namespace webbind {

CanMakePaymentEvent CanMakePaymentEvent::take_ownership(Handle h) noexcept {
        return CanMakePaymentEvent(h);
    }
CanMakePaymentEvent CanMakePaymentEvent::clone() const noexcept { return *this; }
emlite::Val CanMakePaymentEvent::instance() noexcept { return emlite::Val::global("CanMakePaymentEvent"); }
CanMakePaymentEvent::CanMakePaymentEvent(Handle h) noexcept : ExtendableEvent(emlite::Val::take_ownership(h)) {}
CanMakePaymentEvent::CanMakePaymentEvent(const emlite::Val &val) noexcept: ExtendableEvent(val) {}

CanMakePaymentEvent::CanMakePaymentEvent(const jsbind::String& type) : ExtendableEvent(emlite::Val::global("CanMakePaymentEvent").new_(type)) {}

jsbind::Undefined CanMakePaymentEvent::respondWith(jsbind::Promise<bool> canMakePaymentResponse) {
    return ExtendableEvent::call("respondWith", canMakePaymentResponse).as<jsbind::Undefined>();
}


} // namespace webbind