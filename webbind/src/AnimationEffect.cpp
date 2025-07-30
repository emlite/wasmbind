#include <webbind/AnimationEffect.hpp>
#include <webbind/WorkletAnimationEffect.hpp>
#include <webbind/GroupEffect.hpp>


OptionalEffectTiming::OptionalEffectTiming(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
OptionalEffectTiming OptionalEffectTiming::take_ownership(Handle h) noexcept {
        return OptionalEffectTiming(h);
    }
OptionalEffectTiming::OptionalEffectTiming(const emlite::Val &val) noexcept: emlite::Val(val) {}
OptionalEffectTiming::OptionalEffectTiming() noexcept: emlite::Val(emlite::Val::object()) {}
OptionalEffectTiming OptionalEffectTiming::clone() const noexcept { return *this; }

double OptionalEffectTiming::delay() const {
    return emlite::Val::get("delay").as<double>();
}

void OptionalEffectTiming::delay(double value) {
    emlite::Val::set("delay", value);
}

double OptionalEffectTiming::endDelay() const {
    return emlite::Val::get("endDelay").as<double>();
}

void OptionalEffectTiming::endDelay(double value) {
    emlite::Val::set("endDelay", value);
}

FillMode OptionalEffectTiming::fill() const {
    return emlite::Val::get("fill").as<FillMode>();
}

void OptionalEffectTiming::fill(const FillMode& value) {
    emlite::Val::set("fill", value);
}

double OptionalEffectTiming::iterationStart() const {
    return emlite::Val::get("iterationStart").as<double>();
}

void OptionalEffectTiming::iterationStart(double value) {
    emlite::Val::set("iterationStart", value);
}

double OptionalEffectTiming::iterations() const {
    return emlite::Val::get("iterations").as<double>();
}

void OptionalEffectTiming::iterations(double value) {
    emlite::Val::set("iterations", value);
}

jsbind::Any OptionalEffectTiming::duration() const {
    return emlite::Val::get("duration").as<jsbind::Any>();
}

void OptionalEffectTiming::duration(const jsbind::Any& value) {
    emlite::Val::set("duration", value);
}

PlaybackDirection OptionalEffectTiming::direction() const {
    return emlite::Val::get("direction").as<PlaybackDirection>();
}

void OptionalEffectTiming::direction(const PlaybackDirection& value) {
    emlite::Val::set("direction", value);
}

jsbind::String OptionalEffectTiming::easing() const {
    return emlite::Val::get("easing").as<jsbind::String>();
}

void OptionalEffectTiming::easing(const jsbind::String& value) {
    emlite::Val::set("easing", value);
}

AnimationEffect AnimationEffect::take_ownership(Handle h) noexcept {
        return AnimationEffect(h);
    }
AnimationEffect AnimationEffect::clone() const noexcept { return *this; }
AnimationEffect::AnimationEffect(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
AnimationEffect::AnimationEffect(const emlite::Val &val) noexcept: emlite::Val(val) {}


EffectTiming AnimationEffect::getTiming() {
    return emlite::Val::call("getTiming").as<EffectTiming>();
}

ComputedEffectTiming AnimationEffect::getComputedTiming() {
    return emlite::Val::call("getComputedTiming").as<ComputedEffectTiming>();
}

jsbind::Undefined AnimationEffect::updateTiming() {
    return emlite::Val::call("updateTiming").as<jsbind::Undefined>();
}

jsbind::Undefined AnimationEffect::updateTiming(const OptionalEffectTiming& timing) {
    return emlite::Val::call("updateTiming", timing).as<jsbind::Undefined>();
}

GroupEffect AnimationEffect::parent() const {
    return emlite::Val::get("parent").as<GroupEffect>();
}

AnimationEffect AnimationEffect::previousSibling() const {
    return emlite::Val::get("previousSibling").as<AnimationEffect>();
}

AnimationEffect AnimationEffect::nextSibling() const {
    return emlite::Val::get("nextSibling").as<AnimationEffect>();
}

jsbind::Undefined AnimationEffect::before(const AnimationEffect& effects) {
    return emlite::Val::call("before", effects).as<jsbind::Undefined>();
}

jsbind::Undefined AnimationEffect::after(const AnimationEffect& effects) {
    return emlite::Val::call("after", effects).as<jsbind::Undefined>();
}

jsbind::Undefined AnimationEffect::replace(const AnimationEffect& effects) {
    return emlite::Val::call("replace", effects).as<jsbind::Undefined>();
}

jsbind::Undefined AnimationEffect::remove() {
    return emlite::Val::call("remove").as<jsbind::Undefined>();
}

