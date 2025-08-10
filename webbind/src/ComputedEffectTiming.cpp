#include <webbind/ComputedEffectTiming.hpp>

namespace webbind {

ComputedEffectTiming::ComputedEffectTiming(Handle h) noexcept : EffectTiming(emlite::Val::take_ownership(h)) {}
ComputedEffectTiming ComputedEffectTiming::take_ownership(Handle h) noexcept {
    return ComputedEffectTiming(h);
}

ComputedEffectTiming::ComputedEffectTiming(const emlite::Val &val) noexcept: EffectTiming(val) {}

ComputedEffectTiming::ComputedEffectTiming() noexcept: EffectTiming(emlite::Val::object()) {}

ComputedEffectTiming ComputedEffectTiming::clone() const noexcept { return *this; }

double ComputedEffectTiming::progress() const {
    return emlite::Val::get("progress").as<double>();
}

void ComputedEffectTiming::progress(double value) {
    emlite::Val::set("progress", value);
}

double ComputedEffectTiming::currentIteration() const {
    return emlite::Val::get("currentIteration").as<double>();
}

void ComputedEffectTiming::currentIteration(double value) {
    emlite::Val::set("currentIteration", value);
}


} // namespace webbind