#include <webbind/SyncManager.hpp>


SyncManager SyncManager::take_ownership(Handle h) noexcept {
        return SyncManager(h);
    }
SyncManager SyncManager::clone() const noexcept { return *this; }
SyncManager::SyncManager(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
SyncManager::SyncManager(const emlite::Val &val) noexcept: emlite::Val(val) {}


jsbind::Promise SyncManager::register_(const jsbind::DOMString& tag) {
    return emlite::Val::call("register", tag).as<jsbind::Promise>();
}

jsbind::Promise SyncManager::getTags() {
    return emlite::Val::call("getTags").as<jsbind::Promise>();
}

