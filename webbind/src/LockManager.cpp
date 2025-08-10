#include <webbind/LockManager.hpp>
#include <webbind/LockOptions.hpp>
#include <webbind/LockManagerSnapshot.hpp>

namespace webbind {

LockManager LockManager::take_ownership(Handle h) noexcept {
        return LockManager(h);
    }
LockManager LockManager::clone() const noexcept { return *this; }
emlite::Val LockManager::instance() noexcept { return emlite::Val::global("LockManager"); }
LockManager::LockManager(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
LockManager::LockManager(const emlite::Val &val) noexcept: emlite::Val(val) {}

jsbind::Promise<jsbind::Any> LockManager::request(const jsbind::String& name, const LockOptions& options, const jsbind::Function& callback) {
    return emlite::Val::call("request", name, options, callback).as<jsbind::Promise<jsbind::Any>>();
}

jsbind::Promise<LockManagerSnapshot> LockManager::query() {
    return emlite::Val::call("query").as<jsbind::Promise<LockManagerSnapshot>>();
}


} // namespace webbind