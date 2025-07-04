#include <webbind/NavigationPreloadManager.hpp>


NavigationPreloadState::NavigationPreloadState(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
NavigationPreloadState NavigationPreloadState::take_ownership(Handle h) noexcept {
        return NavigationPreloadState(h);
    }
NavigationPreloadState::NavigationPreloadState(const emlite::Val &val) noexcept: emlite::Val(val) {}
NavigationPreloadState::NavigationPreloadState() noexcept: emlite::Val(emlite::Val::object()) {}
NavigationPreloadState NavigationPreloadState::clone() const noexcept { return *this; }

bool NavigationPreloadState::enabled() const {
    return emlite::Val::get("enabled").as<bool>();
}

void NavigationPreloadState::enabled(bool value) {
    emlite::Val::set("enabled", value);
}

jsbind::ByteString NavigationPreloadState::headerValue() const {
    return emlite::Val::get("headerValue").as<jsbind::ByteString>();
}

void NavigationPreloadState::headerValue(const jsbind::ByteString& value) {
    emlite::Val::set("headerValue", value);
}

NavigationPreloadManager NavigationPreloadManager::take_ownership(Handle h) noexcept {
        return NavigationPreloadManager(h);
    }
NavigationPreloadManager NavigationPreloadManager::clone() const noexcept { return *this; }
NavigationPreloadManager::NavigationPreloadManager(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
NavigationPreloadManager::NavigationPreloadManager(const emlite::Val &val) noexcept: emlite::Val(val) {}


jsbind::Promise NavigationPreloadManager::enable() {
    return emlite::Val::call("enable").as<jsbind::Promise>();
}

jsbind::Promise NavigationPreloadManager::disable() {
    return emlite::Val::call("disable").as<jsbind::Promise>();
}

jsbind::Promise NavigationPreloadManager::setHeaderValue(const jsbind::ByteString& value) {
    return emlite::Val::call("setHeaderValue", value).as<jsbind::Promise>();
}

jsbind::Promise NavigationPreloadManager::getState() {
    return emlite::Val::call("getState").as<jsbind::Promise>();
}

