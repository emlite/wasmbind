#include <webbind/BackgroundFetchManager.hpp>
#include <webbind/BackgroundFetchRegistration.hpp>
#include <webbind/BackgroundFetchOptions.hpp>

namespace webbind {

BackgroundFetchManager BackgroundFetchManager::take_ownership(Handle h) noexcept {
    return BackgroundFetchManager(h);
}

BackgroundFetchManager BackgroundFetchManager::clone() const noexcept { return *this; }

emlite::Val BackgroundFetchManager::instance() noexcept { return emlite::Val::global("BackgroundFetchManager"); }

BackgroundFetchManager::BackgroundFetchManager(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}

BackgroundFetchManager::BackgroundFetchManager(const emlite::Val &val) noexcept: emlite::Val(val) {}

jsbind::Promise<BackgroundFetchRegistration> BackgroundFetchManager::fetch(const jsbind::String& id, const jsbind::Any& requests) {
    return emlite::Val::call("fetch", id, requests).as<jsbind::Promise<BackgroundFetchRegistration>>();
}

jsbind::Promise<BackgroundFetchRegistration> BackgroundFetchManager::fetch(const jsbind::String& id, const jsbind::Any& requests, const BackgroundFetchOptions& options) {
    return emlite::Val::call("fetch", id, requests, options).as<jsbind::Promise<BackgroundFetchRegistration>>();
}

jsbind::Promise<BackgroundFetchRegistration> BackgroundFetchManager::get(const jsbind::String& id) {
    return emlite::Val::call("get", id).as<jsbind::Promise<BackgroundFetchRegistration>>();
}

jsbind::Promise<jsbind::TypedArray<jsbind::String>> BackgroundFetchManager::getIds() {
    return emlite::Val::call("getIds").as<jsbind::Promise<jsbind::TypedArray<jsbind::String>>>();
}


} // namespace webbind