#include <webbind/PushManager.hpp>
#include <webbind/PushSubscription.hpp>
#include <webbind/PushSubscriptionOptionsInit.hpp>

namespace webbind {

PushManager PushManager::take_ownership(Handle h) noexcept {
        return PushManager(h);
    }
PushManager PushManager::clone() const noexcept { return *this; }
emlite::Val PushManager::instance() noexcept { return emlite::Val::global("PushManager"); }
PushManager::PushManager(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
PushManager::PushManager(const emlite::Val &val) noexcept: emlite::Val(val) {}

jsbind::TypedArray<jsbind::String> PushManager::supportedContentEncodings() {
    return emlite::Val::global("pushmanager").get("supportedContentEncodings").as<jsbind::TypedArray<jsbind::String>>();
}

jsbind::Promise<PushSubscription> PushManager::subscribe() {
    return emlite::Val::call("subscribe").as<jsbind::Promise<PushSubscription>>();
}

jsbind::Promise<PushSubscription> PushManager::subscribe(const PushSubscriptionOptionsInit& options) {
    return emlite::Val::call("subscribe", options).as<jsbind::Promise<PushSubscription>>();
}

jsbind::Promise<PushSubscription> PushManager::getSubscription() {
    return emlite::Val::call("getSubscription").as<jsbind::Promise<PushSubscription>>();
}

jsbind::Promise<PermissionState> PushManager::permissionState() {
    return emlite::Val::call("permissionState").as<jsbind::Promise<PermissionState>>();
}

jsbind::Promise<PermissionState> PushManager::permissionState(const PushSubscriptionOptionsInit& options) {
    return emlite::Val::call("permissionState", options).as<jsbind::Promise<PermissionState>>();
}


} // namespace webbind