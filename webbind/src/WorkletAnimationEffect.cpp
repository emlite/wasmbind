#include <webbind/WorkletAnimationEffect.hpp>
#include <webbind/EffectTiming.hpp>
#include <webbind/ComputedEffectTiming.hpp>

namespace webbind {

WorkletAnimationEffect WorkletAnimationEffect::take_ownership(Handle h) noexcept {
    return WorkletAnimationEffect(h);
}

WorkletAnimationEffect WorkletAnimationEffect::clone() const noexcept { return *this; }

emlite::Val WorkletAnimationEffect::instance() noexcept { return emlite::Val::global("WorkletAnimationEffect"); }

WorkletAnimationEffect::WorkletAnimationEffect(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}

WorkletAnimationEffect::WorkletAnimationEffect(const emlite::Val &val) noexcept: emlite::Val(val) {}

EffectTiming WorkletAnimationEffect::getTiming() {
    return emlite::Val::call("getTiming").as<EffectTiming>();
}

ComputedEffectTiming WorkletAnimationEffect::getComputedTiming() {
    return emlite::Val::call("getComputedTiming").as<ComputedEffectTiming>();
}

double WorkletAnimationEffect::localTime() const {
    return emlite::Val::get("localTime").as<double>();
}

void WorkletAnimationEffect::localTime(double value) {
    emlite::Val::set("localTime", value);
}


} // namespace webbind