#include <webbind/CookieStoreManager.hpp>
#include <webbind/CookieStore.hpp>


CookieStoreManager CookieStoreManager::take_ownership(Handle h) noexcept {
        return CookieStoreManager(h);
    }
CookieStoreManager CookieStoreManager::clone() const noexcept { return *this; }
CookieStoreManager::CookieStoreManager(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
CookieStoreManager::CookieStoreManager(const emlite::Val &val) noexcept: emlite::Val(val) {}


jsbind::Promise<jsbind::Undefined> CookieStoreManager::subscribe(const jsbind::Sequence<CookieStoreGetOptions>& subscriptions) {
    return emlite::Val::call("subscribe", subscriptions).as<jsbind::Promise<jsbind::Undefined>>();
}

jsbind::Promise<jsbind::Sequence<CookieStoreGetOptions>> CookieStoreManager::getSubscriptions() {
    return emlite::Val::call("getSubscriptions").as<jsbind::Promise<jsbind::Sequence<CookieStoreGetOptions>>>();
}

jsbind::Promise<jsbind::Undefined> CookieStoreManager::unsubscribe(const jsbind::Sequence<CookieStoreGetOptions>& subscriptions) {
    return emlite::Val::call("unsubscribe", subscriptions).as<jsbind::Promise<jsbind::Undefined>>();
}

