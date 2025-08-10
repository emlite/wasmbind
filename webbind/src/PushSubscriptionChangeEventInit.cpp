#include "webbind/PushSubscriptionChangeEventInit.hpp"
#include "webbind/PushSubscription.hpp"

using emlite::Val;
namespace webbind {

PushSubscriptionChangeEventInit::PushSubscriptionChangeEventInit(Handle h) noexcept : ExtendableEventInit(emlite::Val::take_ownership(h)) {}
PushSubscriptionChangeEventInit PushSubscriptionChangeEventInit::take_ownership(Handle h) noexcept {
        return PushSubscriptionChangeEventInit(h);
    }
PushSubscriptionChangeEventInit::PushSubscriptionChangeEventInit(const emlite::Val &val) noexcept: ExtendableEventInit(val) {}
PushSubscriptionChangeEventInit::PushSubscriptionChangeEventInit() noexcept: ExtendableEventInit(emlite::Val::object()) {}
PushSubscriptionChangeEventInit PushSubscriptionChangeEventInit::clone() const noexcept { return *this; }

PushSubscription PushSubscriptionChangeEventInit::newSubscription() const {
    return emlite::Val::get("newSubscription").as<PushSubscription>();
}

void PushSubscriptionChangeEventInit::newSubscription(const PushSubscription& value) {
    emlite::Val::set("newSubscription", value);
}

PushSubscription PushSubscriptionChangeEventInit::oldSubscription() const {
    return emlite::Val::get("oldSubscription").as<PushSubscription>();
}

void PushSubscriptionChangeEventInit::oldSubscription(const PushSubscription& value) {
    emlite::Val::set("oldSubscription", value);
}


} // namespace webbind