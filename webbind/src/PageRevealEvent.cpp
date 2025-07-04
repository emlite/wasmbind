#include <webbind/PageRevealEvent.hpp>
#include <webbind/ViewTransition.hpp>


PageRevealEvent PageRevealEvent::take_ownership(Handle h) noexcept {
        return PageRevealEvent(h);
    }
PageRevealEvent PageRevealEvent::clone() const noexcept { return *this; }
PageRevealEvent::PageRevealEvent(Handle h) noexcept : Event(emlite::Val::take_ownership(h)) {}
PageRevealEvent::PageRevealEvent(const emlite::Val &val) noexcept: Event(val) {}


PageRevealEvent::PageRevealEvent(const jsbind::DOMString& type, const jsbind::Any& eventInitDict): Event(emlite::Val::global("PageRevealEvent").new_(type, eventInitDict)) {}

ViewTransition PageRevealEvent::viewTransition() const {
    return Event::get("viewTransition").as<ViewTransition>();
}

