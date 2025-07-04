#include <webbind/WorkletAnimationEffect.hpp>


EffectTiming::EffectTiming(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
EffectTiming EffectTiming::take_ownership(Handle h) noexcept {
        return EffectTiming(h);
    }
EffectTiming::EffectTiming(const emlite::Val &val) noexcept: emlite::Val(val) {}
EffectTiming::EffectTiming() noexcept: emlite::Val(emlite::Val::object()) {}
EffectTiming EffectTiming::clone() const noexcept { return *this; }

FillMode EffectTiming::fill() const {
    return emlite::Val::get("fill").as<FillMode>();
}

void EffectTiming::fill(const FillMode& value) {
    emlite::Val::set("fill", value);
}

double EffectTiming::iterationStart() const {
    return emlite::Val::get("iterationStart").as<double>();
}

void EffectTiming::iterationStart(double value) {
    emlite::Val::set("iterationStart", value);
}

double EffectTiming::iterations() const {
    return emlite::Val::get("iterations").as<double>();
}

void EffectTiming::iterations(double value) {
    emlite::Val::set("iterations", value);
}

PlaybackDirection EffectTiming::direction() const {
    return emlite::Val::get("direction").as<PlaybackDirection>();
}

void EffectTiming::direction(const PlaybackDirection& value) {
    emlite::Val::set("direction", value);
}

jsbind::DOMString EffectTiming::easing() const {
    return emlite::Val::get("easing").as<jsbind::DOMString>();
}

void EffectTiming::easing(const jsbind::DOMString& value) {
    emlite::Val::set("easing", value);
}

ComputedEffectTiming::ComputedEffectTiming(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
ComputedEffectTiming ComputedEffectTiming::take_ownership(Handle h) noexcept {
        return ComputedEffectTiming(h);
    }
ComputedEffectTiming::ComputedEffectTiming(const emlite::Val &val) noexcept: emlite::Val(val) {}
ComputedEffectTiming::ComputedEffectTiming() noexcept: emlite::Val(emlite::Val::object()) {}
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

WorkletAnimationEffect WorkletAnimationEffect::take_ownership(Handle h) noexcept {
        return WorkletAnimationEffect(h);
    }
WorkletAnimationEffect WorkletAnimationEffect::clone() const noexcept { return *this; }
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

