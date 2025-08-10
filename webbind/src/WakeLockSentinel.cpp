#include <webbind/WakeLockSentinel.hpp>

namespace webbind {

WakeLockSentinel WakeLockSentinel::take_ownership(Handle h) noexcept {
        return WakeLockSentinel(h);
    }
WakeLockSentinel WakeLockSentinel::clone() const noexcept { return *this; }
emlite::Val WakeLockSentinel::instance() noexcept { return emlite::Val::global("WakeLockSentinel"); }
WakeLockSentinel::WakeLockSentinel(Handle h) noexcept : EventTarget(emlite::Val::take_ownership(h)) {}
WakeLockSentinel::WakeLockSentinel(const emlite::Val &val) noexcept: EventTarget(val) {}

bool WakeLockSentinel::released() const {
    return EventTarget::get("released").as<bool>();
}

WakeLockType WakeLockSentinel::type() const {
    return EventTarget::get("type").as<WakeLockType>();
}

jsbind::Promise<jsbind::Undefined> WakeLockSentinel::release() {
    return EventTarget::call("release").as<jsbind::Promise<jsbind::Undefined>>();
}

jsbind::Any WakeLockSentinel::onrelease() const {
    return EventTarget::get("onrelease").as<jsbind::Any>();
}

void WakeLockSentinel::onrelease(const jsbind::Any& value) {
    EventTarget::set("onrelease", value);
}


} // namespace webbind