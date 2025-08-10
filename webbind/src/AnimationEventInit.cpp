#include <webbind/AnimationEventInit.hpp>

namespace webbind {

AnimationEventInit::AnimationEventInit(Handle h) noexcept : EventInit(emlite::Val::take_ownership(h)) {}
AnimationEventInit AnimationEventInit::take_ownership(Handle h) noexcept {
    return AnimationEventInit(h);
}

AnimationEventInit::AnimationEventInit(const emlite::Val &val) noexcept: EventInit(val) {}

AnimationEventInit::AnimationEventInit() noexcept: EventInit(emlite::Val::object()) {}

AnimationEventInit AnimationEventInit::clone() const noexcept { return *this; }

jsbind::String AnimationEventInit::animationName() const {
    return emlite::Val::get("animationName").as<jsbind::String>();
}

void AnimationEventInit::animationName(const jsbind::String& value) {
    emlite::Val::set("animationName", value);
}

double AnimationEventInit::elapsedTime() const {
    return emlite::Val::get("elapsedTime").as<double>();
}

void AnimationEventInit::elapsedTime(double value) {
    emlite::Val::set("elapsedTime", value);
}

jsbind::String AnimationEventInit::pseudoElement() const {
    return emlite::Val::get("pseudoElement").as<jsbind::String>();
}

void AnimationEventInit::pseudoElement(const jsbind::String& value) {
    emlite::Val::set("pseudoElement", value);
}


} // namespace webbind