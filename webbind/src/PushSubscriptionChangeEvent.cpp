#include <webbind/PushSubscriptionChangeEvent.hpp>
#include <webbind/PushSubscription.hpp>


PushSubscriptionChangeEvent PushSubscriptionChangeEvent::take_ownership(Handle h) noexcept {
        return PushSubscriptionChangeEvent(h);
    }
PushSubscriptionChangeEvent PushSubscriptionChangeEvent::clone() const noexcept { return *this; }
PushSubscriptionChangeEvent::PushSubscriptionChangeEvent(Handle h) noexcept : ExtendableEvent(emlite::Val::take_ownership(h)) {}
PushSubscriptionChangeEvent::PushSubscriptionChangeEvent(const emlite::Val &val) noexcept: ExtendableEvent(val) {}


PushSubscriptionChangeEvent::PushSubscriptionChangeEvent(const jsbind::DOMString& type, const jsbind::Any& eventInitDict): ExtendableEvent(emlite::Val::global("PushSubscriptionChangeEvent").new_(type, eventInitDict)) {}

PushSubscription PushSubscriptionChangeEvent::newSubscription() const {
    return ExtendableEvent::get("newSubscription").as<PushSubscription>();
}

PushSubscription PushSubscriptionChangeEvent::oldSubscription() const {
    return ExtendableEvent::get("oldSubscription").as<PushSubscription>();
}

