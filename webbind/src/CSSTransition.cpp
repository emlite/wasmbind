#include <webbind/CSSTransition.hpp>


CSSTransition CSSTransition::take_ownership(Handle h) noexcept {
        return CSSTransition(h);
    }
CSSTransition CSSTransition::clone() const noexcept { return *this; }
CSSTransition::CSSTransition(Handle h) noexcept : Animation(emlite::Val::take_ownership(h)) {}
CSSTransition::CSSTransition(const emlite::Val &val) noexcept: Animation(val) {}


jsbind::String CSSTransition::transitionProperty() const {
    return Animation::get("transitionProperty").as<jsbind::String>();
}

