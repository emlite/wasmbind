#include <webbind/BackgroundFetchManager.hpp>
#include <webbind/BackgroundFetchRegistration.hpp>


BackgroundFetchOptions::BackgroundFetchOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
BackgroundFetchOptions BackgroundFetchOptions::take_ownership(Handle h) noexcept {
        return BackgroundFetchOptions(h);
    }
BackgroundFetchOptions::BackgroundFetchOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
BackgroundFetchOptions::BackgroundFetchOptions() noexcept: emlite::Val(emlite::Val::object()) {}
BackgroundFetchOptions BackgroundFetchOptions::clone() const noexcept { return *this; }

long long BackgroundFetchOptions::downloadTotal() const {
    return emlite::Val::get("downloadTotal").as<long long>();
}

void BackgroundFetchOptions::downloadTotal(long long value) {
    emlite::Val::set("downloadTotal", value);
}

BackgroundFetchManager BackgroundFetchManager::take_ownership(Handle h) noexcept {
        return BackgroundFetchManager(h);
    }
BackgroundFetchManager BackgroundFetchManager::clone() const noexcept { return *this; }
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

