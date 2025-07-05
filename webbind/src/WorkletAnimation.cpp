#include <webbind/WorkletAnimation.hpp>
#include <webbind/AnimationTimeline.hpp>


WorkletAnimation WorkletAnimation::take_ownership(Handle h) noexcept {
        return WorkletAnimation(h);
    }
WorkletAnimation WorkletAnimation::clone() const noexcept { return *this; }
WorkletAnimation::WorkletAnimation(Handle h) noexcept : Animation(emlite::Val::take_ownership(h)) {}
WorkletAnimation::WorkletAnimation(const emlite::Val &val) noexcept: Animation(val) {}


WorkletAnimation::WorkletAnimation(const jsbind::DOMString& animatorName) : Animation(emlite::Val::global("WorkletAnimation").new_(animatorName)) {}

WorkletAnimation::WorkletAnimation(const jsbind::DOMString& animatorName, const jsbind::Any& effects) : Animation(emlite::Val::global("WorkletAnimation").new_(animatorName, effects)) {}

WorkletAnimation::WorkletAnimation(const jsbind::DOMString& animatorName, const jsbind::Any& effects, const AnimationTimeline& timeline) : Animation(emlite::Val::global("WorkletAnimation").new_(animatorName, effects, timeline)) {}

WorkletAnimation::WorkletAnimation(const jsbind::DOMString& animatorName, const jsbind::Any& effects, const AnimationTimeline& timeline, const jsbind::Any& options) : Animation(emlite::Val::global("WorkletAnimation").new_(animatorName, effects, timeline, options)) {}

jsbind::DOMString WorkletAnimation::animatorName() const {
    return Animation::get("animatorName").as<jsbind::DOMString>();
}

