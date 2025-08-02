#include <webbind/AbsoluteOrientationSensor.hpp>


AbsoluteOrientationSensor AbsoluteOrientationSensor::take_ownership(Handle h) noexcept {
        return AbsoluteOrientationSensor(h);
    }
AbsoluteOrientationSensor AbsoluteOrientationSensor::clone() const noexcept { return *this; }
emlite::Val AbsoluteOrientationSensor::instance() noexcept { return emlite::Val::global("AbsoluteOrientationSensor"); }
AbsoluteOrientationSensor::AbsoluteOrientationSensor(Handle h) noexcept : OrientationSensor(emlite::Val::take_ownership(h)) {}
AbsoluteOrientationSensor::AbsoluteOrientationSensor(const emlite::Val &val) noexcept: OrientationSensor(val) {}


AbsoluteOrientationSensor::AbsoluteOrientationSensor() : OrientationSensor(emlite::Val::global("AbsoluteOrientationSensor").new_()) {}

AbsoluteOrientationSensor::AbsoluteOrientationSensor(const jsbind::Any& sensorOptions) : OrientationSensor(emlite::Val::global("AbsoluteOrientationSensor").new_(sensorOptions)) {}

