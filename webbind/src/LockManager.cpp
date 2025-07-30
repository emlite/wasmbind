#include <webbind/LockManager.hpp>
#include <webbind/AbortSignal.hpp>


LockOptions::LockOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
LockOptions LockOptions::take_ownership(Handle h) noexcept {
        return LockOptions(h);
    }
LockOptions::LockOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
LockOptions::LockOptions() noexcept: emlite::Val(emlite::Val::object()) {}
LockOptions LockOptions::clone() const noexcept { return *this; }

LockMode LockOptions::mode() const {
    return emlite::Val::get("mode").as<LockMode>();
}

void LockOptions::mode(const LockMode& value) {
    emlite::Val::set("mode", value);
}

bool LockOptions::ifAvailable() const {
    return emlite::Val::get("ifAvailable").as<bool>();
}

void LockOptions::ifAvailable(bool value) {
    emlite::Val::set("ifAvailable", value);
}

bool LockOptions::steal() const {
    return emlite::Val::get("steal").as<bool>();
}

void LockOptions::steal(bool value) {
    emlite::Val::set("steal", value);
}

AbortSignal LockOptions::signal() const {
    return emlite::Val::get("signal").as<AbortSignal>();
}

void LockOptions::signal(const AbortSignal& value) {
    emlite::Val::set("signal", value);
}

LockManagerSnapshot::LockManagerSnapshot(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
LockManagerSnapshot LockManagerSnapshot::take_ownership(Handle h) noexcept {
        return LockManagerSnapshot(h);
    }
LockManagerSnapshot::LockManagerSnapshot(const emlite::Val &val) noexcept: emlite::Val(val) {}
LockManagerSnapshot::LockManagerSnapshot() noexcept: emlite::Val(emlite::Val::object()) {}
LockManagerSnapshot LockManagerSnapshot::clone() const noexcept { return *this; }

jsbind::TypedArray<jsbind::Any> LockManagerSnapshot::held() const {
    return emlite::Val::get("held").as<jsbind::TypedArray<jsbind::Any>>();
}

void LockManagerSnapshot::held(const jsbind::TypedArray<jsbind::Any>& value) {
    emlite::Val::set("held", value);
}

jsbind::TypedArray<jsbind::Any> LockManagerSnapshot::pending() const {
    return emlite::Val::get("pending").as<jsbind::TypedArray<jsbind::Any>>();
}

void LockManagerSnapshot::pending(const jsbind::TypedArray<jsbind::Any>& value) {
    emlite::Val::set("pending", value);
}

LockManager LockManager::take_ownership(Handle h) noexcept {
        return LockManager(h);
    }
LockManager LockManager::clone() const noexcept { return *this; }
LockManager::LockManager(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
LockManager::LockManager(const emlite::Val &val) noexcept: emlite::Val(val) {}


jsbind::Promise<jsbind::Any> LockManager::request(const jsbind::String& name, const LockOptions& options, const jsbind::Function& callback) {
    return emlite::Val::call("request", name, options, callback).as<jsbind::Promise<jsbind::Any>>();
}

jsbind::Promise<LockManagerSnapshot> LockManager::query() {
    return emlite::Val::call("query").as<jsbind::Promise<LockManagerSnapshot>>();
}

