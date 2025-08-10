#include "webbind/AnalyserOptions.hpp"

using emlite::Val;
namespace webbind {

AnalyserOptions::AnalyserOptions(Handle h) noexcept : AudioNodeOptions(emlite::Val::take_ownership(h)) {}
AnalyserOptions AnalyserOptions::take_ownership(Handle h) noexcept {
        return AnalyserOptions(h);
    }
AnalyserOptions::AnalyserOptions(const emlite::Val &val) noexcept: AudioNodeOptions(val) {}
AnalyserOptions::AnalyserOptions() noexcept: AudioNodeOptions(emlite::Val::object()) {}
AnalyserOptions AnalyserOptions::clone() const noexcept { return *this; }

unsigned long AnalyserOptions::fftSize() const {
    return emlite::Val::get("fftSize").as<unsigned long>();
}

void AnalyserOptions::fftSize(unsigned long value) {
    emlite::Val::set("fftSize", value);
}

double AnalyserOptions::maxDecibels() const {
    return emlite::Val::get("maxDecibels").as<double>();
}

void AnalyserOptions::maxDecibels(double value) {
    emlite::Val::set("maxDecibels", value);
}

double AnalyserOptions::minDecibels() const {
    return emlite::Val::get("minDecibels").as<double>();
}

void AnalyserOptions::minDecibels(double value) {
    emlite::Val::set("minDecibels", value);
}

double AnalyserOptions::smoothingTimeConstant() const {
    return emlite::Val::get("smoothingTimeConstant").as<double>();
}

void AnalyserOptions::smoothingTimeConstant(double value) {
    emlite::Val::set("smoothingTimeConstant", value);
}


} // namespace webbind