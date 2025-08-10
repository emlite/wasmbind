#include <webbind/BiquadFilterOptions.hpp>

namespace webbind {

BiquadFilterOptions::BiquadFilterOptions(Handle h) noexcept : AudioNodeOptions(emlite::Val::take_ownership(h)) {}
BiquadFilterOptions BiquadFilterOptions::take_ownership(Handle h) noexcept {
    return BiquadFilterOptions(h);
}

BiquadFilterOptions::BiquadFilterOptions(const emlite::Val &val) noexcept: AudioNodeOptions(val) {}

BiquadFilterOptions::BiquadFilterOptions() noexcept: AudioNodeOptions(emlite::Val::object()) {}

BiquadFilterOptions BiquadFilterOptions::clone() const noexcept { return *this; }

BiquadFilterType BiquadFilterOptions::type() const {
    return emlite::Val::get("type").as<BiquadFilterType>();
}

void BiquadFilterOptions::type(const BiquadFilterType& value) {
    emlite::Val::set("type", value);
}

float BiquadFilterOptions::Q() const {
    return emlite::Val::get("Q").as<float>();
}

void BiquadFilterOptions::Q(float value) {
    emlite::Val::set("Q", value);
}

float BiquadFilterOptions::detune() const {
    return emlite::Val::get("detune").as<float>();
}

void BiquadFilterOptions::detune(float value) {
    emlite::Val::set("detune", value);
}

float BiquadFilterOptions::frequency() const {
    return emlite::Val::get("frequency").as<float>();
}

void BiquadFilterOptions::frequency(float value) {
    emlite::Val::set("frequency", value);
}

float BiquadFilterOptions::gain() const {
    return emlite::Val::get("gain").as<float>();
}

void BiquadFilterOptions::gain(float value) {
    emlite::Val::set("gain", value);
}


} // namespace webbind