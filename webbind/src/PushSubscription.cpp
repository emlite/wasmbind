#include <webbind/PushSubscription.hpp>
#include <webbind/PushSubscriptionOptions.hpp>


PushSubscriptionJSON::PushSubscriptionJSON(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
PushSubscriptionJSON PushSubscriptionJSON::take_ownership(Handle h) noexcept {
        return PushSubscriptionJSON(h);
    }
PushSubscriptionJSON::PushSubscriptionJSON(const emlite::Val &val) noexcept: emlite::Val(val) {}
PushSubscriptionJSON::PushSubscriptionJSON() noexcept: emlite::Val(emlite::Val::object()) {}
PushSubscriptionJSON PushSubscriptionJSON::clone() const noexcept { return *this; }

jsbind::String PushSubscriptionJSON::endpoint() const {
    return emlite::Val::get("endpoint").as<jsbind::String>();
}

void PushSubscriptionJSON::endpoint(const jsbind::String& value) {
    emlite::Val::set("endpoint", value);
}

jsbind::Any PushSubscriptionJSON::expirationTime() const {
    return emlite::Val::get("expirationTime").as<jsbind::Any>();
}

void PushSubscriptionJSON::expirationTime(const jsbind::Any& value) {
    emlite::Val::set("expirationTime", value);
}

jsbind::Record<jsbind::String, jsbind::String> PushSubscriptionJSON::keys() const {
    return emlite::Val::get("keys").as<jsbind::Record<jsbind::String, jsbind::String>>();
}

void PushSubscriptionJSON::keys(const jsbind::Record<jsbind::String, jsbind::String>& value) {
    emlite::Val::set("keys", value);
}

PushSubscription PushSubscription::take_ownership(Handle h) noexcept {
        return PushSubscription(h);
    }
PushSubscription PushSubscription::clone() const noexcept { return *this; }
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

