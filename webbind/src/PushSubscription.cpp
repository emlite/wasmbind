#include "webbind/PushSubscription.hpp"
#include "webbind/PushSubscriptionOptions.hpp"
#include "webbind/PushSubscriptionJSON.hpp"

namespace webbind {

PushSubscription PushSubscription::take_ownership(Handle h) noexcept {
        return PushSubscription(h);
    }
PushSubscription PushSubscription::clone() const noexcept { return *this; }
emlite::Val PushSubscription::instance() noexcept { return emlite::Val::global("PushSubscription"); }
PushSubscription::PushSubscription(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
PushSubscription::PushSubscription(const emlite::Val &val) noexcept: emlite::Val(val) {}

jsbind::String PushSubscription::endpoint() const {
    return emlite::Val::get("endpoint").as<jsbind::String>();
}

jsbind::Any PushSubscription::expirationTime() const {
    return emlite::Val::get("expirationTime").as<jsbind::Any>();
}

PushSubscriptionOptions PushSubscription::options() const {
    return emlite::Val::get("options").as<PushSubscriptionOptions>();
}

jsbind::ArrayBuffer PushSubscription::getKey(const PushEncryptionKeyName& name) {
    return emlite::Val::call("getKey", name).as<jsbind::ArrayBuffer>();
}

jsbind::Promise<bool> PushSubscription::unsubscribe() {
    return emlite::Val::call("unsubscribe").as<jsbind::Promise<bool>>();
}

PushSubscriptionJSON PushSubscription::toJSON() {
    return emlite::Val::call("toJSON").as<PushSubscriptionJSON>();
}


} // namespace webbind