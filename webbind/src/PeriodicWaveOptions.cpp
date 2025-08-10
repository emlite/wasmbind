#include "webbind/PeriodicWaveOptions.hpp"

using emlite::Val;
namespace webbind {

PeriodicWaveOptions::PeriodicWaveOptions(Handle h) noexcept : PeriodicWaveConstraints(emlite::Val::take_ownership(h)) {}
PeriodicWaveOptions PeriodicWaveOptions::take_ownership(Handle h) noexcept {
        return PeriodicWaveOptions(h);
    }
PeriodicWaveOptions::PeriodicWaveOptions(const emlite::Val &val) noexcept: PeriodicWaveConstraints(val) {}
PeriodicWaveOptions::PeriodicWaveOptions() noexcept: PeriodicWaveConstraints(emlite::Val::object()) {}
PeriodicWaveOptions PeriodicWaveOptions::clone() const noexcept { return *this; }

jsbind::TypedArray<float> PeriodicWaveOptions::real() const {
    return emlite::Val::get("real").as<jsbind::TypedArray<float>>();
}

void PeriodicWaveOptions::real(jsbind::TypedArray<float> value) {
    emlite::Val::set("real", value);
}

jsbind::TypedArray<float> PeriodicWaveOptions::imag() const {
    return emlite::Val::get("imag").as<jsbind::TypedArray<float>>();
}

void PeriodicWaveOptions::imag(jsbind::TypedArray<float> value) {
    emlite::Val::set("imag", value);
}


} // namespace webbind