#include <webbind/PageSwapEvent.hpp>
#include <webbind/NavigationActivation.hpp>
#include <webbind/ViewTransition.hpp>


PageSwapEvent PageSwapEvent::take_ownership(Handle h) noexcept {
        return PageSwapEvent(h);
    }
PageSwapEvent PageSwapEvent::clone() const noexcept { return *this; }
PageSwapEvent::PageSwapEvent(Handle h) noexcept : Event(emlite::Val::take_ownership(h)) {}
PageSwapEvent::PageSwapEvent(const emlite::Val &val) noexcept: Event(val) {}


PageSwapEvent::PageSwapEvent(const jsbind::String& type) : Event(emlite::Val::global("PageSwapEvent").new_(type)) {}

PageSwapEvent::PageSwapEvent(const jsbind::String& type, const jsbind::Any& eventInitDict) : Event(emlite::Val::global("PageSwapEvent").new_(type, eventInitDict)) {}

NavigationActivation PageSwapEvent::activation() const {
    return Event::get("activation").as<NavigationActivation>();
}

ViewTransition PageSwapEvent::viewTransition() const {
    return Event::get("viewTransition").as<ViewTransition>();
}

