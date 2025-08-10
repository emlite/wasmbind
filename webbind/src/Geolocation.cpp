#include <webbind/Geolocation.hpp>
#include <webbind/PositionOptions.hpp>

namespace webbind {

Geolocation Geolocation::take_ownership(Handle h) noexcept {
        return Geolocation(h);
    }
Geolocation Geolocation::clone() const noexcept { return *this; }
emlite::Val Geolocation::instance() noexcept { return emlite::Val::global("Geolocation"); }
Geolocation::Geolocation(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
Geolocation::Geolocation(const emlite::Val &val) noexcept: emlite::Val(val) {}

jsbind::Undefined Geolocation::getCurrentPosition(const jsbind::Function& successCallback) {
    return emlite::Val::call("getCurrentPosition", successCallback).as<jsbind::Undefined>();
}

jsbind::Undefined Geolocation::getCurrentPosition(const jsbind::Function& successCallback, const jsbind::Function& errorCallback) {
    return emlite::Val::call("getCurrentPosition", successCallback, errorCallback).as<jsbind::Undefined>();
}

jsbind::Undefined Geolocation::getCurrentPosition(const jsbind::Function& successCallback, const jsbind::Function& errorCallback, const PositionOptions& options) {
    return emlite::Val::call("getCurrentPosition", successCallback, errorCallback, options).as<jsbind::Undefined>();
}

long Geolocation::watchPosition(const jsbind::Function& successCallback) {
    return emlite::Val::call("watchPosition", successCallback).as<long>();
}

long Geolocation::watchPosition(const jsbind::Function& successCallback, const jsbind::Function& errorCallback) {
    return emlite::Val::call("watchPosition", successCallback, errorCallback).as<long>();
}

long Geolocation::watchPosition(const jsbind::Function& successCallback, const jsbind::Function& errorCallback, const PositionOptions& options) {
    return emlite::Val::call("watchPosition", successCallback, errorCallback, options).as<long>();
}

jsbind::Undefined Geolocation::clearWatch(long watchId) {
    return emlite::Val::call("clearWatch", watchId).as<jsbind::Undefined>();
}


} // namespace webbind