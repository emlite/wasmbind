#include <webbind/XRSessionEvent.hpp>
#include <webbind/XRSessionEventInit.hpp>
#include <webbind/XRSession.hpp>

namespace webbind {

XRSessionEvent XRSessionEvent::take_ownership(Handle h) noexcept {
    return XRSessionEvent(h);
}

XRSessionEvent XRSessionEvent::clone() const noexcept { return *this; }

emlite::Val XRSessionEvent::instance() noexcept { return emlite::Val::global("XRSessionEvent"); }

XRSessionEvent::XRSessionEvent(Handle h) noexcept : Event(emlite::Val::take_ownership(h)) {}

XRSessionEvent::XRSessionEvent(const emlite::Val &val) noexcept: Event(val) {}

XRSessionEvent::XRSessionEvent(const jsbind::String& type, const XRSessionEventInit& eventInitDict) : Event(emlite::Val::global("XRSessionEvent").new_(type, eventInitDict)) {}

XRSession XRSessionEvent::session() const {
    return Event::get("session").as<XRSession>();
}


} // namespace webbind