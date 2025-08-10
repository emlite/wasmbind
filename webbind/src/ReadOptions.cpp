#include <webbind/ReadOptions.hpp>
#include <webbind/AbortSignal.hpp>

using emlite::Val;
namespace webbind {

ReadOptions::ReadOptions(Handle h) noexcept : GeolocationSensorOptions(emlite::Val::take_ownership(h)) {}
ReadOptions ReadOptions::take_ownership(Handle h) noexcept {
        return ReadOptions(h);
    }
ReadOptions::ReadOptions(const emlite::Val &val) noexcept: GeolocationSensorOptions(val) {}
ReadOptions::ReadOptions() noexcept: GeolocationSensorOptions(emlite::Val::object()) {}
ReadOptions ReadOptions::clone() const noexcept { return *this; }

AbortSignal ReadOptions::signal() const {
    return emlite::Val::get("signal").as<AbortSignal>();
}

void ReadOptions::signal(const AbortSignal& value) {
    emlite::Val::set("signal", value);
}


} // namespace webbind