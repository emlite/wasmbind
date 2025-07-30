#include <webbind/NavigationEvent.hpp>
#include <webbind/EventTarget.hpp>


NavigationEvent NavigationEvent::take_ownership(Handle h) noexcept {
        return NavigationEvent(h);
    }
NavigationEvent NavigationEvent::clone() const noexcept { return *this; }
NavigationEvent::NavigationEvent(Handle h) noexcept : UIEvent(emlite::Val::take_ownership(h)) {}
NavigationEvent::NavigationEvent(const emlite::Val &val) noexcept: UIEvent(val) {}


NavigationEvent::NavigationEvent(const jsbind::String& type) : UIEvent(emlite::Val::global("NavigationEvent").new_(type)) {}

NavigationEvent::NavigationEvent(const jsbind::String& type, const jsbind::Any& eventInitDict) : UIEvent(emlite::Val::global("NavigationEvent").new_(type, eventInitDict)) {}

SpatialNavigationDirection NavigationEvent::dir() const {
    return UIEvent::get("dir").as<SpatialNavigationDirection>();
}

EventTarget NavigationEvent::relatedTarget() const {
    return UIEvent::get("relatedTarget").as<EventTarget>();
}

