#include <webbind/IdleDetector.hpp>
#include <webbind/AbortSignal.hpp>


IdleOptions::IdleOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
IdleOptions IdleOptions::take_ownership(Handle h) noexcept {
        return IdleOptions(h);
    }
IdleOptions::IdleOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
IdleOptions::IdleOptions() noexcept: emlite::Val(emlite::Val::object()) {}
IdleOptions IdleOptions::clone() const noexcept { return *this; }

long long IdleOptions::threshold() const {
    return emlite::Val::get("threshold").as<long long>();
}

void IdleOptions::threshold(long long value) {
    emlite::Val::set("threshold", value);
}

AbortSignal IdleOptions::signal() const {
    return emlite::Val::get("signal").as<AbortSignal>();
}

void IdleOptions::signal(const AbortSignal& value) {
    emlite::Val::set("signal", value);
}

IdleDetector IdleDetector::take_ownership(Handle h) noexcept {
        return IdleDetector(h);
    }
IdleDetector IdleDetector::clone() const noexcept { return *this; }
emlite::Val IdleDetector::instance() noexcept { return emlite::Val::global("IdleDetector"); }
IdleDetector::IdleDetector(Handle h) noexcept : EventTarget(emlite::Val::take_ownership(h)) {}
IdleDetector::IdleDetector(const emlite::Val &val) noexcept: EventTarget(val) {}


IdleDetector::IdleDetector() : EventTarget(emlite::Val::global("IdleDetector").new_()) {}

UserIdleState IdleDetector::userState() const {
    return EventTarget::get("userState").as<UserIdleState>();
}

ScreenIdleState IdleDetector::screenState() const {
    return EventTarget::get("screenState").as<ScreenIdleState>();
}

jsbind::Any IdleDetector::onchange() const {
    return EventTarget::get("onchange").as<jsbind::Any>();
}

void IdleDetector::onchange(const jsbind::Any& value) {
    EventTarget::set("onchange", value);
}

jsbind::Promise<PermissionState> IdleDetector::requestPermission() {
    return emlite::Val::global("idledetector").call("requestPermission").as<jsbind::Promise<PermissionState>>();
}

jsbind::Promise<jsbind::Undefined> IdleDetector::start() {
    return EventTarget::call("start").as<jsbind::Promise<jsbind::Undefined>>();
}

jsbind::Promise<jsbind::Undefined> IdleDetector::start(const IdleOptions& options) {
    return EventTarget::call("start", options).as<jsbind::Promise<jsbind::Undefined>>();
}

