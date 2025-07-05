#include <webbind/WakeLock.hpp>
#include <webbind/WakeLockSentinel.hpp>


WakeLock WakeLock::take_ownership(Handle h) noexcept {
        return WakeLock(h);
    }
WakeLock WakeLock::clone() const noexcept { return *this; }
WakeLock::WakeLock(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
WakeLock::WakeLock(const emlite::Val &val) noexcept: emlite::Val(val) {}


jsbind::Promise WakeLock::request() {
    return emlite::Val::call("request").as<jsbind::Promise>();
}

jsbind::Promise WakeLock::request(const WakeLockType& type) {
    return emlite::Val::call("request", type).as<jsbind::Promise>();
}

