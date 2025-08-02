#include <webbind/AnimationEvent.hpp>


AnimationEvent AnimationEvent::take_ownership(Handle h) noexcept {
        return AnimationEvent(h);
    }
AnimationEvent AnimationEvent::clone() const noexcept { return *this; }
emlite::Val AnimationEvent::instance() noexcept { return emlite::Val::global("AnimationEvent"); }
AnimationEvent::AnimationEvent(Handle h) noexcept : Event(emlite::Val::take_ownership(h)) {}
AnimationEvent::AnimationEvent(const emlite::Val &val) noexcept: Event(val) {}


AnimationEvent::AnimationEvent(const jsbind::String& type) : Event(emlite::Val::global("AnimationEvent").new_(type)) {}

AnimationEvent::AnimationEvent(const jsbind::String& type, const jsbind::Any& animationEventInitDict) : Event(emlite::Val::global("AnimationEvent").new_(type, animationEventInitDict)) {}

jsbind::String AnimationEvent::animationName() const {
    return Event::get("animationName").as<jsbind::String>();
}

double AnimationEvent::elapsedTime() const {
    return Event::get("elapsedTime").as<double>();
}

jsbind::String AnimationEvent::pseudoElement() const {
    return Event::get("pseudoElement").as<jsbind::String>();
}

