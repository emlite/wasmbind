#include <webbind/Geolocation.hpp>


PositionOptions::PositionOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
PositionOptions PositionOptions::take_ownership(Handle h) noexcept {
        return PositionOptions(h);
    }
PositionOptions::PositionOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
PositionOptions::PositionOptions() noexcept: emlite::Val(emlite::Val::object()) {}
PositionOptions PositionOptions::clone() const noexcept { return *this; }

bool PositionOptions::enableHighAccuracy() const {
    return emlite::Val::get("enableHighAccuracy").as<bool>();
}

void PositionOptions::enableHighAccuracy(bool value) {
    emlite::Val::set("enableHighAccuracy", value);
}

unsigned long PositionOptions::timeout() const {
    return emlite::Val::get("timeout").as<unsigned long>();
}

void PositionOptions::timeout(unsigned long value) {
    emlite::Val::set("timeout", value);
}

unsigned long PositionOptions::maximumAge() const {
    return emlite::Val::get("maximumAge").as<unsigned long>();
}

void PositionOptions::maximumAge(unsigned long value) {
    emlite::Val::set("maximumAge", value);
}

Geolocation Geolocation::take_ownership(Handle h) noexcept {
        return Geolocation(h);
    }
Geolocation Geolocation::clone() const noexcept { return *this; }
Geolocation::Geolocation(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
Geolocation::Geolocation(const emlite::Val &val) noexcept: emlite::Val(val) {}


jsbind::Undefined Geolocation::getCurrentPosition(const jsbind::Function& successCallback, const jsbind::Function& errorCallback, const PositionOptions& options) {
    return emlite::Val::call("getCurrentPosition", successCallback, errorCallback, options).as<jsbind::Undefined>();
}

long Geolocation::watchPosition(const jsbind::Function& successCallback, const jsbind::Function& errorCallback, const PositionOptions& options) {
    return emlite::Val::call("watchPosition", successCallback, errorCallback, options).as<long>();
}

jsbind::Undefined Geolocation::clearWatch(long watchId) {
    return emlite::Val::call("clearWatch", watchId).as<jsbind::Undefined>();
}

