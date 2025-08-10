#include "webbind/AnimationTriggerOptions.hpp"
#include "webbind/AnimationTimeline.hpp"

using emlite::Val;
namespace webbind {

AnimationTriggerOptions::AnimationTriggerOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
AnimationTriggerOptions AnimationTriggerOptions::take_ownership(Handle h) noexcept {
        return AnimationTriggerOptions(h);
    }
AnimationTriggerOptions::AnimationTriggerOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
AnimationTriggerOptions::AnimationTriggerOptions() noexcept: emlite::Val(emlite::Val::object()) {}
AnimationTriggerOptions AnimationTriggerOptions::clone() const noexcept { return *this; }

AnimationTimeline AnimationTriggerOptions::timeline() const {
    return emlite::Val::get("timeline").as<AnimationTimeline>();
}

void AnimationTriggerOptions::timeline(const AnimationTimeline& value) {
    emlite::Val::set("timeline", value);
}

AnimationTriggerBehavior AnimationTriggerOptions::behavior() const {
    return emlite::Val::get("behavior").as<AnimationTriggerBehavior>();
}

void AnimationTriggerOptions::behavior(const AnimationTriggerBehavior& value) {
    emlite::Val::set("behavior", value);
}

jsbind::Any AnimationTriggerOptions::rangeStart() const {
    return emlite::Val::get("rangeStart").as<jsbind::Any>();
}

void AnimationTriggerOptions::rangeStart(const jsbind::Any& value) {
    emlite::Val::set("rangeStart", value);
}

jsbind::Any AnimationTriggerOptions::rangeEnd() const {
    return emlite::Val::get("rangeEnd").as<jsbind::Any>();
}

void AnimationTriggerOptions::rangeEnd(const jsbind::Any& value) {
    emlite::Val::set("rangeEnd", value);
}

jsbind::Any AnimationTriggerOptions::exitRangeStart() const {
    return emlite::Val::get("exitRangeStart").as<jsbind::Any>();
}

void AnimationTriggerOptions::exitRangeStart(const jsbind::Any& value) {
    emlite::Val::set("exitRangeStart", value);
}

jsbind::Any AnimationTriggerOptions::exitRangeEnd() const {
    return emlite::Val::get("exitRangeEnd").as<jsbind::Any>();
}

void AnimationTriggerOptions::exitRangeEnd(const jsbind::Any& value) {
    emlite::Val::set("exitRangeEnd", value);
}


} // namespace webbind