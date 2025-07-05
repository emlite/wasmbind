#include <webbind/PageTransitionEvent.hpp>


PageTransitionEvent PageTransitionEvent::take_ownership(Handle h) noexcept {
        return PageTransitionEvent(h);
    }
PageTransitionEvent PageTransitionEvent::clone() const noexcept { return *this; }
PageTransitionEvent::PageTransitionEvent(Handle h) noexcept : Event(emlite::Val::take_ownership(h)) {}
PageTransitionEvent::PageTransitionEvent(const emlite::Val &val) noexcept: Event(val) {}


PageTransitionEvent::PageTransitionEvent(const jsbind::DOMString& type) : Event(emlite::Val::global("PageTransitionEvent").new_(type)) {}

PageTransitionEvent::PageTransitionEvent(const jsbind::DOMString& type, const jsbind::Any& eventInitDict) : Event(emlite::Val::global("PageTransitionEvent").new_(type, eventInitDict)) {}

bool PageTransitionEvent::persisted() const {
    return Event::get("persisted").as<bool>();
}

