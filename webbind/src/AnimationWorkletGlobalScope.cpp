#include <webbind/AnimationWorkletGlobalScope.hpp>


AnimationWorkletGlobalScope AnimationWorkletGlobalScope::take_ownership(Handle h) noexcept {
        return AnimationWorkletGlobalScope(h);
    }
AnimationWorkletGlobalScope AnimationWorkletGlobalScope::clone() const noexcept { return *this; }
emlite::Val AnimationWorkletGlobalScope::instance() noexcept { return emlite::Val::global("AnimationWorkletGlobalScope"); }
AnimationWorkletGlobalScope::AnimationWorkletGlobalScope(Handle h) noexcept : WorkletGlobalScope(emlite::Val::take_ownership(h)) {}
AnimationWorkletGlobalScope::AnimationWorkletGlobalScope(const emlite::Val &val) noexcept: WorkletGlobalScope(val) {}


jsbind::Undefined AnimationWorkletGlobalScope::registerAnimator(const jsbind::String& name, const jsbind::Function& animatorCtor) {
    return WorkletGlobalScope::call("registerAnimator", name, animatorCtor).as<jsbind::Undefined>();
}

