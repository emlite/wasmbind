#include <webbind/AnimationTimeline.hpp>
#include <webbind/Animation.hpp>
#include <webbind/AnimationEffect.hpp>


AnimationTimeline AnimationTimeline::take_ownership(Handle h) noexcept {
        return AnimationTimeline(h);
    }
AnimationTimeline AnimationTimeline::clone() const noexcept { return *this; }
AnimationTimeline::AnimationTimeline(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
AnimationTimeline::AnimationTimeline(const emlite::Val &val) noexcept: emlite::Val(val) {}


jsbind::Any AnimationTimeline::currentTime() const {
    return emlite::Val::get("currentTime").as<jsbind::Any>();
}

jsbind::Any AnimationTimeline::duration() const {
    return emlite::Val::get("duration").as<jsbind::Any>();
}

Animation AnimationTimeline::play(const AnimationEffect& effect) {
    return emlite::Val::call("play", effect).as<Animation>();
}

