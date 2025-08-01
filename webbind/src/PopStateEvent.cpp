#include <webbind/PopStateEvent.hpp>


PopStateEvent PopStateEvent::take_ownership(Handle h) noexcept {
        return PopStateEvent(h);
    }
PopStateEvent PopStateEvent::clone() const noexcept { return *this; }
PopStateEvent::PopStateEvent(Handle h) noexcept : Event(emlite::Val::take_ownership(h)) {}
PopStateEvent::PopStateEvent(const emlite::Val &val) noexcept: Event(val) {}


PopStateEvent::PopStateEvent(const jsbind::String& type) : Event(emlite::Val::global("PopStateEvent").new_(type)) {}

PopStateEvent::PopStateEvent(const jsbind::String& type, const jsbind::Any& eventInitDict) : Event(emlite::Val::global("PopStateEvent").new_(type, eventInitDict)) {}

jsbind::Any PopStateEvent::state() const {
    return Event::get("state").as<jsbind::Any>();
}

bool PopStateEvent::hasUAVisualTransition() const {
    return Event::get("hasUAVisualTransition").as<bool>();
}

