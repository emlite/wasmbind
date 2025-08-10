#include <webbind/PushSubscriptionChangeEvent.hpp>
#include <webbind/PushSubscriptionChangeEventInit.hpp>
#include <webbind/PushSubscription.hpp>

namespace webbind {

PushSubscriptionChangeEvent PushSubscriptionChangeEvent::take_ownership(Handle h) noexcept {
    return PushSubscriptionChangeEvent(h);
}

PushSubscriptionChangeEvent PushSubscriptionChangeEvent::clone() const noexcept { return *this; }

emlite::Val PushSubscriptionChangeEvent::instance() noexcept { return emlite::Val::global("PushSubscriptionChangeEvent"); }

PushSubscriptionChangeEvent::PushSubscriptionChangeEvent(Handle h) noexcept : ExtendableEvent(emlite::Val::take_ownership(h)) {}

PushSubscriptionChangeEvent::PushSubscriptionChangeEvent(const emlite::Val &val) noexcept: ExtendableEvent(val) {}

PushSubscriptionChangeEvent::PushSubscriptionChangeEvent(const jsbind::String& type) : ExtendableEvent(emlite::Val::global("PushSubscriptionChangeEvent").new_(type)) {}

PushSubscriptionChangeEvent::PushSubscriptionChangeEvent(const jsbind::String& type, const PushSubscriptionChangeEventInit& eventInitDict) : ExtendableEvent(emlite::Val::global("PushSubscriptionChangeEvent").new_(type, eventInitDict)) {}

PushSubscription PushSubscriptionChangeEvent::newSubscription() const {
    return ExtendableEvent::get("newSubscription").as<PushSubscription>();
}

PushSubscription PushSubscriptionChangeEvent::oldSubscription() const {
    return ExtendableEvent::get("oldSubscription").as<PushSubscription>();
}


} // namespace webbind