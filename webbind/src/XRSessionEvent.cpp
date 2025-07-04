#include <webbind/XRSessionEvent.hpp>
#include <webbind/XRSession.hpp>


XRSessionEvent XRSessionEvent::take_ownership(Handle h) noexcept {
        return XRSessionEvent(h);
    }
XRSessionEvent XRSessionEvent::clone() const noexcept { return *this; }
XRSessionEvent::XRSessionEvent(Handle h) noexcept : Event(emlite::Val::take_ownership(h)) {}
XRSessionEvent::XRSessionEvent(const emlite::Val &val) noexcept: Event(val) {}


XRSessionEvent::XRSessionEvent(const jsbind::DOMString& type, const jsbind::Any& eventInitDict): Event(emlite::Val::global("XRSessionEvent").new_(type, eventInitDict)) {}

XRSession XRSessionEvent::session() const {
    return Event::get("session").as<XRSession>();
}

