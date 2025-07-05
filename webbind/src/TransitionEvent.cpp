#include <webbind/TransitionEvent.hpp>


TransitionEvent TransitionEvent::take_ownership(Handle h) noexcept {
        return TransitionEvent(h);
    }
TransitionEvent TransitionEvent::clone() const noexcept { return *this; }
TransitionEvent::TransitionEvent(Handle h) noexcept : Event(emlite::Val::take_ownership(h)) {}
TransitionEvent::TransitionEvent(const emlite::Val &val) noexcept: Event(val) {}


TransitionEvent::TransitionEvent(const jsbind::CSSOMString& type) : Event(emlite::Val::global("TransitionEvent").new_(type)) {}

TransitionEvent::TransitionEvent(const jsbind::CSSOMString& type, const jsbind::Any& transitionEventInitDict) : Event(emlite::Val::global("TransitionEvent").new_(type, transitionEventInitDict)) {}

jsbind::CSSOMString TransitionEvent::propertyName() const {
    return Event::get("propertyName").as<jsbind::CSSOMString>();
}

double TransitionEvent::elapsedTime() const {
    return Event::get("elapsedTime").as<double>();
}

jsbind::CSSOMString TransitionEvent::pseudoElement() const {
    return Event::get("pseudoElement").as<jsbind::CSSOMString>();
}

