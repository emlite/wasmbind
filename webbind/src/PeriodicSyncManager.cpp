#include <webbind/PeriodicSyncManager.hpp>


BackgroundSyncOptions::BackgroundSyncOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
BackgroundSyncOptions BackgroundSyncOptions::take_ownership(Handle h) noexcept {
        return BackgroundSyncOptions(h);
    }
BackgroundSyncOptions::BackgroundSyncOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
BackgroundSyncOptions::BackgroundSyncOptions() noexcept: emlite::Val(emlite::Val::object()) {}
BackgroundSyncOptions BackgroundSyncOptions::clone() const noexcept { return *this; }

long long BackgroundSyncOptions::minInterval() const {
    return emlite::Val::get("minInterval").as<long long>();
}

void BackgroundSyncOptions::minInterval(long long value) {
    emlite::Val::set("minInterval", value);
}

PeriodicSyncManager PeriodicSyncManager::take_ownership(Handle h) noexcept {
        return PeriodicSyncManager(h);
    }
PeriodicSyncManager PeriodicSyncManager::clone() const noexcept { return *this; }
PeriodicSyncManager::PeriodicSyncManager(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
PeriodicSyncManager::PeriodicSyncManager(const emlite::Val &val) noexcept: emlite::Val(val) {}


jsbind::Promise PeriodicSyncManager::register_(const jsbind::DOMString& tag, const BackgroundSyncOptions& options) {
    return emlite::Val::call("register", tag, options).as<jsbind::Promise>();
}

jsbind::Promise PeriodicSyncManager::getTags() {
    return emlite::Val::call("getTags").as<jsbind::Promise>();
}

jsbind::Promise PeriodicSyncManager::unregister(const jsbind::DOMString& tag) {
    return emlite::Val::call("unregister", tag).as<jsbind::Promise>();
}

