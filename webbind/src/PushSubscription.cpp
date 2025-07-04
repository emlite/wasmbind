#include <webbind/PushSubscription.hpp>
#include <webbind/PushSubscriptionOptions.hpp>


PushSubscriptionJSON::PushSubscriptionJSON(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
PushSubscriptionJSON PushSubscriptionJSON::take_ownership(Handle h) noexcept {
        return PushSubscriptionJSON(h);
    }
PushSubscriptionJSON::PushSubscriptionJSON(const emlite::Val &val) noexcept: emlite::Val(val) {}
PushSubscriptionJSON::PushSubscriptionJSON() noexcept: emlite::Val(emlite::Val::object()) {}
PushSubscriptionJSON PushSubscriptionJSON::clone() const noexcept { return *this; }

jsbind::USVString PushSubscriptionJSON::endpoint() const {
    return emlite::Val::get("endpoint").as<jsbind::USVString>();
}

void PushSubscriptionJSON::endpoint(const jsbind::USVString& value) {
    emlite::Val::set("endpoint", value);
}

jsbind::Any PushSubscriptionJSON::expirationTime() const {
    return emlite::Val::get("expirationTime").as<jsbind::Any>();
}

void PushSubscriptionJSON::expirationTime(const jsbind::Any& value) {
    emlite::Val::set("expirationTime", value);
}

jsbind::Record<jsbind::DOMString, jsbind::USVString> PushSubscriptionJSON::keys() const {
    return emlite::Val::get("keys").as<jsbind::Record<jsbind::DOMString, jsbind::USVString>>();
}

void PushSubscriptionJSON::keys(const jsbind::Record<jsbind::DOMString, jsbind::USVString>& value) {
    emlite::Val::set("keys", value);
}

PushSubscription PushSubscription::take_ownership(Handle h) noexcept {
        return PushSubscription(h);
    }
PushSubscription PushSubscription::clone() const noexcept { return *this; }
PushSubscription::PushSubscription(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
PushSubscription::PushSubscription(const emlite::Val &val) noexcept: emlite::Val(val) {}


jsbind::USVString PushSubscription::endpoint() const {
    return emlite::Val::get("endpoint").as<jsbind::USVString>();
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

jsbind::Promise PushSubscription::unsubscribe() {
    return emlite::Val::call("unsubscribe").as<jsbind::Promise>();
}

PushSubscriptionJSON PushSubscription::toJSON() {
    return emlite::Val::call("toJSON").as<PushSubscriptionJSON>();
}

