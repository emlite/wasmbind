#include <webbind/AnimationEffect.hpp>
#include <webbind/EffectTiming.hpp>
#include <webbind/ComputedEffectTiming.hpp>
#include <webbind/OptionalEffectTiming.hpp>
#include <webbind/GroupEffect.hpp>
#include <webbind/AnimationEffect.hpp>

namespace webbind {

AnimationEffect AnimationEffect::take_ownership(Handle h) noexcept {
    return AnimationEffect(h);
}

AnimationEffect AnimationEffect::clone() const noexcept { return *this; }

emlite::Val AnimationEffect::instance() noexcept { return emlite::Val::global("AnimationEffect"); }

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


} // namespace webbind