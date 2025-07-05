#include <webbind/AnimationTrigger.hpp>
#include <webbind/AnimationTimeline.hpp>


AnimationTrigger AnimationTrigger::take_ownership(Handle h) noexcept {
        return AnimationTrigger(h);
    }
AnimationTrigger AnimationTrigger::clone() const noexcept { return *this; }
AnimationTrigger::AnimationTrigger(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
AnimationTrigger::AnimationTrigger(const emlite::Val &val) noexcept: emlite::Val(val) {}


AnimationTrigger::AnimationTrigger() : emlite::Val(emlite::Val::global("AnimationTrigger").new_()) {}

AnimationTrigger::AnimationTrigger(const jsbind::Any& options) : emlite::Val(emlite::Val::global("AnimationTrigger").new_(options)) {}

AnimationTimeline AnimationTrigger::timeline() const {
    return emlite::Val::get("timeline").as<AnimationTimeline>();
}

void AnimationTrigger::timeline(const AnimationTimeline& value) {
    emlite::Val::set("timeline", value);
}

AnimationTriggerBehavior AnimationTrigger::behavior() const {
    return emlite::Val::get("behavior").as<AnimationTriggerBehavior>();
}

void AnimationTrigger::behavior(const AnimationTriggerBehavior& value) {
    emlite::Val::set("behavior", value);
}

jsbind::Any AnimationTrigger::rangeStart() const {
    return emlite::Val::get("rangeStart").as<jsbind::Any>();
}

void AnimationTrigger::rangeStart(const jsbind::Any& value) {
    emlite::Val::set("rangeStart", value);
}

jsbind::Any AnimationTrigger::rangeEnd() const {
    return emlite::Val::get("rangeEnd").as<jsbind::Any>();
}

void AnimationTrigger::rangeEnd(const jsbind::Any& value) {
    emlite::Val::set("rangeEnd", value);
}

jsbind::Any AnimationTrigger::exitRangeStart() const {
    return emlite::Val::get("exitRangeStart").as<jsbind::Any>();
}

void AnimationTrigger::exitRangeStart(const jsbind::Any& value) {
    emlite::Val::set("exitRangeStart", value);
}

jsbind::Any AnimationTrigger::exitRangeEnd() const {
    return emlite::Val::get("exitRangeEnd").as<jsbind::Any>();
}

void AnimationTrigger::exitRangeEnd(const jsbind::Any& value) {
    emlite::Val::set("exitRangeEnd", value);
}

