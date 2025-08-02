#include <webbind/ProximitySensor.hpp>


ProximitySensor ProximitySensor::take_ownership(Handle h) noexcept {
        return ProximitySensor(h);
    }
ProximitySensor ProximitySensor::clone() const noexcept { return *this; }
emlite::Val ProximitySensor::instance() noexcept { return emlite::Val::global("ProximitySensor"); }
ProximitySensor::ProximitySensor(Handle h) noexcept : Sensor(emlite::Val::take_ownership(h)) {}
ProximitySensor::ProximitySensor(const emlite::Val &val) noexcept: Sensor(val) {}


ProximitySensor::ProximitySensor() : Sensor(emlite::Val::global("ProximitySensor").new_()) {}

ProximitySensor::ProximitySensor(const jsbind::Any& sensorOptions) : Sensor(emlite::Val::global("ProximitySensor").new_(sensorOptions)) {}

double ProximitySensor::distance() const {
    return Sensor::get("distance").as<double>();
}

double ProximitySensor::max() const {
    return Sensor::get("max").as<double>();
}

bool ProximitySensor::near() const {
    return Sensor::get("near").as<bool>();
}

