#include <webbind/SensorOptions.hpp>

namespace webbind {

SensorOptions::SensorOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
SensorOptions SensorOptions::take_ownership(Handle h) noexcept {
    return SensorOptions(h);
}

SensorOptions::SensorOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}

SensorOptions::SensorOptions() noexcept: emlite::Val(emlite::Val::object()) {}

SensorOptions SensorOptions::clone() const noexcept { return *this; }

double SensorOptions::frequency() const {
    return emlite::Val::get("frequency").as<double>();
}

void SensorOptions::frequency(double value) {
    emlite::Val::set("frequency", value);
}


} // namespace webbind