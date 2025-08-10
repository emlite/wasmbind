#include "webbind/BatteryManager.hpp"

namespace webbind {

BatteryManager BatteryManager::take_ownership(Handle h) noexcept {
        return BatteryManager(h);
    }
BatteryManager BatteryManager::clone() const noexcept { return *this; }
emlite::Val BatteryManager::instance() noexcept { return emlite::Val::global("BatteryManager"); }
BatteryManager::BatteryManager(Handle h) noexcept : EventTarget(emlite::Val::take_ownership(h)) {}
BatteryManager::BatteryManager(const emlite::Val &val) noexcept: EventTarget(val) {}

bool BatteryManager::charging() const {
    return EventTarget::get("charging").as<bool>();
}

double BatteryManager::chargingTime() const {
    return EventTarget::get("chargingTime").as<double>();
}

double BatteryManager::dischargingTime() const {
    return EventTarget::get("dischargingTime").as<double>();
}

double BatteryManager::level() const {
    return EventTarget::get("level").as<double>();
}

jsbind::Any BatteryManager::onchargingchange() const {
    return EventTarget::get("onchargingchange").as<jsbind::Any>();
}

void BatteryManager::onchargingchange(const jsbind::Any& value) {
    EventTarget::set("onchargingchange", value);
}

jsbind::Any BatteryManager::onchargingtimechange() const {
    return EventTarget::get("onchargingtimechange").as<jsbind::Any>();
}

void BatteryManager::onchargingtimechange(const jsbind::Any& value) {
    EventTarget::set("onchargingtimechange", value);
}

jsbind::Any BatteryManager::ondischargingtimechange() const {
    return EventTarget::get("ondischargingtimechange").as<jsbind::Any>();
}

void BatteryManager::ondischargingtimechange(const jsbind::Any& value) {
    EventTarget::set("ondischargingtimechange", value);
}

jsbind::Any BatteryManager::onlevelchange() const {
    return EventTarget::get("onlevelchange").as<jsbind::Any>();
}

void BatteryManager::onlevelchange(const jsbind::Any& value) {
    EventTarget::set("onlevelchange", value);
}


} // namespace webbind