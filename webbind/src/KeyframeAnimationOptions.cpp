#include "webbind/KeyframeAnimationOptions.hpp"
#include "webbind/AnimationTimeline.hpp"

using emlite::Val;
namespace webbind {

KeyframeAnimationOptions::KeyframeAnimationOptions(Handle h) noexcept : KeyframeEffectOptions(emlite::Val::take_ownership(h)) {}
KeyframeAnimationOptions KeyframeAnimationOptions::take_ownership(Handle h) noexcept {
        return KeyframeAnimationOptions(h);
    }
KeyframeAnimationOptions::KeyframeAnimationOptions(const emlite::Val &val) noexcept: KeyframeEffectOptions(val) {}
KeyframeAnimationOptions::KeyframeAnimationOptions() noexcept: KeyframeEffectOptions(emlite::Val::object()) {}
KeyframeAnimationOptions KeyframeAnimationOptions::clone() const noexcept { return *this; }

jsbind::String KeyframeAnimationOptions::id() const {
    return emlite::Val::get("id").as<jsbind::String>();
}

void KeyframeAnimationOptions::id(const jsbind::String& value) {
    emlite::Val::set("id", value);
}

AnimationTimeline KeyframeAnimationOptions::timeline() const {
    return emlite::Val::get("timeline").as<AnimationTimeline>();
}

void KeyframeAnimationOptions::timeline(const AnimationTimeline& value) {
    emlite::Val::set("timeline", value);
}


} // namespace webbind