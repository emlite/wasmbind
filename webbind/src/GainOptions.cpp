#include "webbind/GainOptions.hpp"

using emlite::Val;
namespace webbind {

GainOptions::GainOptions(Handle h) noexcept : AudioNodeOptions(emlite::Val::take_ownership(h)) {}
GainOptions GainOptions::take_ownership(Handle h) noexcept {
        return GainOptions(h);
    }
GainOptions::GainOptions(const emlite::Val &val) noexcept: AudioNodeOptions(val) {}
GainOptions::GainOptions() noexcept: AudioNodeOptions(emlite::Val::object()) {}
GainOptions GainOptions::clone() const noexcept { return *this; }

float GainOptions::gain() const {
    return emlite::Val::get("gain").as<float>();
}

void GainOptions::gain(float value) {
    emlite::Val::set("gain", value);
}


} // namespace webbind