#include <webbind/WakeLock.hpp>
#include <webbind/WakeLockSentinel.hpp>

namespace webbind {

WakeLock WakeLock::take_ownership(Handle h) noexcept {
    return WakeLock(h);
}

WakeLock WakeLock::clone() const noexcept { return *this; }

emlite::Val WakeLock::instance() noexcept { return emlite::Val::global("WakeLock"); }

WakeLock::WakeLock(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}

WakeLock::WakeLock(const emlite::Val &val) noexcept: emlite::Val(val) {}

jsbind::Promise<WakeLockSentinel> WakeLock::request() {
    return emlite::Val::call("request").as<jsbind::Promise<WakeLockSentinel>>();
}

jsbind::Promise<WakeLockSentinel> WakeLock::request(const WakeLockType& type) {
    return emlite::Val::call("request", type).as<jsbind::Promise<WakeLockSentinel>>();
}


} // namespace webbind