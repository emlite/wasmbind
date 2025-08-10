#include <webbind/NavigationPreloadManager.hpp>
#include <webbind/NavigationPreloadState.hpp>

namespace webbind {

NavigationPreloadManager NavigationPreloadManager::take_ownership(Handle h) noexcept {
    return NavigationPreloadManager(h);
}

NavigationPreloadManager NavigationPreloadManager::clone() const noexcept { return *this; }

emlite::Val NavigationPreloadManager::instance() noexcept { return emlite::Val::global("NavigationPreloadManager"); }

NavigationPreloadManager::NavigationPreloadManager(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}

NavigationPreloadManager::NavigationPreloadManager(const emlite::Val &val) noexcept: emlite::Val(val) {}

jsbind::Promise<jsbind::Undefined> NavigationPreloadManager::enable() {
    return emlite::Val::call("enable").as<jsbind::Promise<jsbind::Undefined>>();
}

jsbind::Promise<jsbind::Undefined> NavigationPreloadManager::disable() {
    return emlite::Val::call("disable").as<jsbind::Promise<jsbind::Undefined>>();
}

jsbind::Promise<jsbind::Undefined> NavigationPreloadManager::setHeaderValue(const jsbind::String& value) {
    return emlite::Val::call("setHeaderValue", value).as<jsbind::Promise<jsbind::Undefined>>();
}

jsbind::Promise<NavigationPreloadState> NavigationPreloadManager::getState() {
    return emlite::Val::call("getState").as<jsbind::Promise<NavigationPreloadState>>();
}


} // namespace webbind