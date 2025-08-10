#include <webbind/CookieStoreManager.hpp>
#include <webbind/CookieStoreGetOptions.hpp>

namespace webbind {

CookieStoreManager CookieStoreManager::take_ownership(Handle h) noexcept {
    return CookieStoreManager(h);
}

CookieStoreManager CookieStoreManager::clone() const noexcept { return *this; }

emlite::Val CookieStoreManager::instance() noexcept { return emlite::Val::global("CookieStoreManager"); }

CookieStoreManager::CookieStoreManager(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}

CookieStoreManager::CookieStoreManager(const emlite::Val &val) noexcept: emlite::Val(val) {}

jsbind::Promise<jsbind::Undefined> CookieStoreManager::subscribe(const jsbind::TypedArray<CookieStoreGetOptions>& subscriptions) {
    return emlite::Val::call("subscribe", subscriptions).as<jsbind::Promise<jsbind::Undefined>>();
}

jsbind::Promise<jsbind::TypedArray<CookieStoreGetOptions>> CookieStoreManager::getSubscriptions() {
    return emlite::Val::call("getSubscriptions").as<jsbind::Promise<jsbind::TypedArray<CookieStoreGetOptions>>>();
}

jsbind::Promise<jsbind::Undefined> CookieStoreManager::unsubscribe(const jsbind::TypedArray<CookieStoreGetOptions>& subscriptions) {
    return emlite::Val::call("unsubscribe", subscriptions).as<jsbind::Promise<jsbind::Undefined>>();
}


} // namespace webbind