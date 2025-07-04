#include <webbind/AnimationEvent.hpp>


AnimationEvent AnimationEvent::take_ownership(Handle h) noexcept {
        return AnimationEvent(h);
    }
AnimationEvent AnimationEvent::clone() const noexcept { return *this; }
AnimationEvent::AnimationEvent(Handle h) noexcept : Event(emlite::Val::take_ownership(h)) {}
AnimationEvent::AnimationEvent(const emlite::Val &val) noexcept: Event(val) {}


AnimationEvent::AnimationEvent(const jsbind::CSSOMString& type, const jsbind::Any& animationEventInitDict): Event(emlite::Val::global("AnimationEvent").new_(type, animationEventInitDict)) {}

jsbind::CSSOMString AnimationEvent::animationName() const {
    return Event::get("animationName").as<jsbind::CSSOMString>();
}

double AnimationEvent::elapsedTime() const {
    return Event::get("elapsedTime").as<double>();
}

jsbind::CSSOMString AnimationEvent::pseudoElement() const {
    return Event::get("pseudoElement").as<jsbind::CSSOMString>();
}

