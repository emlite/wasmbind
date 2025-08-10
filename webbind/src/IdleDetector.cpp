#include <webbind/IdleDetector.hpp>
#include <webbind/IdleOptions.hpp>

namespace webbind {

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


} // namespace webbind