#include <webbind/LinearAccelerationSensor.hpp>
#include <webbind/AccelerometerSensorOptions.hpp>

namespace webbind {

LinearAccelerationSensor LinearAccelerationSensor::take_ownership(Handle h) noexcept {
        return LinearAccelerationSensor(h);
    }
LinearAccelerationSensor LinearAccelerationSensor::clone() const noexcept { return *this; }
emlite::Val LinearAccelerationSensor::instance() noexcept { return emlite::Val::global("LinearAccelerationSensor"); }
LinearAccelerationSensor::LinearAccelerationSensor(Handle h) noexcept : Accelerometer(emlite::Val::take_ownership(h)) {}
LinearAccelerationSensor::LinearAccelerationSensor(const emlite::Val &val) noexcept: Accelerometer(val) {}

LinearAccelerationSensor::LinearAccelerationSensor() : Accelerometer(emlite::Val::global("LinearAccelerationSensor").new_()) {}

LinearAccelerationSensor::LinearAccelerationSensor(const AccelerometerSensorOptions& options) : Accelerometer(emlite::Val::global("LinearAccelerationSensor").new_(options)) {}


} // namespace webbind