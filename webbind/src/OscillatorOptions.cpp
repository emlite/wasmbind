#include "webbind/OscillatorOptions.hpp"
#include "webbind/PeriodicWave.hpp"

using emlite::Val;
namespace webbind {

OscillatorOptions::OscillatorOptions(Handle h) noexcept : AudioNodeOptions(emlite::Val::take_ownership(h)) {}
OscillatorOptions OscillatorOptions::take_ownership(Handle h) noexcept {
        return OscillatorOptions(h);
    }
OscillatorOptions::OscillatorOptions(const emlite::Val &val) noexcept: AudioNodeOptions(val) {}
OscillatorOptions::OscillatorOptions() noexcept: AudioNodeOptions(emlite::Val::object()) {}
OscillatorOptions OscillatorOptions::clone() const noexcept { return *this; }

OscillatorType OscillatorOptions::type() const {
    return emlite::Val::get("type").as<OscillatorType>();
}

void OscillatorOptions::type(const OscillatorType& value) {
    emlite::Val::set("type", value);
}

float OscillatorOptions::frequency() const {
    return emlite::Val::get("frequency").as<float>();
}

void OscillatorOptions::frequency(float value) {
    emlite::Val::set("frequency", value);
}

float OscillatorOptions::detune() const {
    return emlite::Val::get("detune").as<float>();
}

void OscillatorOptions::detune(float value) {
    emlite::Val::set("detune", value);
}

PeriodicWave OscillatorOptions::periodicWave() const {
    return emlite::Val::get("periodicWave").as<PeriodicWave>();
}

void OscillatorOptions::periodicWave(const PeriodicWave& value) {
    emlite::Val::set("periodicWave", value);
}


} // namespace webbind