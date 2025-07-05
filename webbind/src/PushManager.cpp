#include <webbind/PushManager.hpp>
#include <webbind/PushSubscription.hpp>


PushSubscriptionOptionsInit::PushSubscriptionOptionsInit(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
PushSubscriptionOptionsInit PushSubscriptionOptionsInit::take_ownership(Handle h) noexcept {
        return PushSubscriptionOptionsInit(h);
    }
PushSubscriptionOptionsInit::PushSubscriptionOptionsInit(const emlite::Val &val) noexcept: emlite::Val(val) {}
PushSubscriptionOptionsInit::PushSubscriptionOptionsInit() noexcept: emlite::Val(emlite::Val::object()) {}
PushSubscriptionOptionsInit PushSubscriptionOptionsInit::clone() const noexcept { return *this; }

bool PushSubscriptionOptionsInit::userVisibleOnly() const {
    return emlite::Val::get("userVisibleOnly").as<bool>();
}

void PushSubscriptionOptionsInit::userVisibleOnly(bool value) {
    emlite::Val::set("userVisibleOnly", value);
}

jsbind::Any PushSubscriptionOptionsInit::applicationServerKey() const {
    return emlite::Val::get("applicationServerKey").as<jsbind::Any>();
}

void PushSubscriptionOptionsInit::applicationServerKey(const jsbind::Any& value) {
    emlite::Val::set("applicationServerKey", value);
}

PushManager PushManager::take_ownership(Handle h) noexcept {
        return PushManager(h);
    }
PushManager PushManager::clone() const noexcept { return *this; }
PushManager::PushManager(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
PushManager::PushManager(const emlite::Val &val) noexcept: emlite::Val(val) {}


jsbind::FrozenArray<jsbind::DOMString> PushManager::supportedContentEncodings() {
    return emlite::Val::global("pushmanager").get("supportedContentEncodings").as<jsbind::FrozenArray<jsbind::DOMString>>();
}

jsbind::Promise PushManager::subscribe() {
    return emlite::Val::call("subscribe").as<jsbind::Promise>();
}

jsbind::Promise PushManager::subscribe(const PushSubscriptionOptionsInit& options) {
    return emlite::Val::call("subscribe", options).as<jsbind::Promise>();
}

jsbind::Promise PushManager::getSubscription() {
    return emlite::Val::call("getSubscription").as<jsbind::Promise>();
}

jsbind::Promise PushManager::permissionState() {
    return emlite::Val::call("permissionState").as<jsbind::Promise>();
}

jsbind::Promise PushManager::permissionState(const PushSubscriptionOptionsInit& options) {
    return emlite::Val::call("permissionState", options).as<jsbind::Promise>();
}

