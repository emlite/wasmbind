#include <webbind/PeriodicSyncManager.hpp>
#include <webbind/BackgroundSyncOptions.hpp>

namespace webbind {

PeriodicSyncManager PeriodicSyncManager::take_ownership(Handle h) noexcept {
    return PeriodicSyncManager(h);
}

PeriodicSyncManager PeriodicSyncManager::clone() const noexcept { return *this; }

emlite::Val PeriodicSyncManager::instance() noexcept { return emlite::Val::global("PeriodicSyncManager"); }

PeriodicSyncManager::PeriodicSyncManager(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}

PeriodicSyncManager::PeriodicSyncManager(const emlite::Val &val) noexcept: emlite::Val(val) {}

jsbind::Promise<jsbind::Undefined> PeriodicSyncManager::register_(const jsbind::String& tag) {
    return emlite::Val::call("register", tag).as<jsbind::Promise<jsbind::Undefined>>();
}

jsbind::Promise<jsbind::Undefined> PeriodicSyncManager::register_(const jsbind::String& tag, const BackgroundSyncOptions& options) {
    return emlite::Val::call("register", tag, options).as<jsbind::Promise<jsbind::Undefined>>();
}

jsbind::Promise<jsbind::TypedArray<jsbind::String>> PeriodicSyncManager::getTags() {
    return emlite::Val::call("getTags").as<jsbind::Promise<jsbind::TypedArray<jsbind::String>>>();
}

jsbind::Promise<jsbind::Undefined> PeriodicSyncManager::unregister(const jsbind::String& tag) {
    return emlite::Val::call("unregister", tag).as<jsbind::Promise<jsbind::Undefined>>();
}


} // namespace webbind