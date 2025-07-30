#include <webbind/PortalActivateEvent.hpp>
#include <webbind/HTMLPortalElement.hpp>


PortalActivateEvent PortalActivateEvent::take_ownership(Handle h) noexcept {
        return PortalActivateEvent(h);
    }
PortalActivateEvent PortalActivateEvent::clone() const noexcept { return *this; }
PortalActivateEvent::PortalActivateEvent(Handle h) noexcept : Event(emlite::Val::take_ownership(h)) {}
PortalActivateEvent::PortalActivateEvent(const emlite::Val &val) noexcept: Event(val) {}


PortalActivateEvent::PortalActivateEvent(const jsbind::String& type) : Event(emlite::Val::global("PortalActivateEvent").new_(type)) {}

PortalActivateEvent::PortalActivateEvent(const jsbind::String& type, const jsbind::Any& eventInitDict) : Event(emlite::Val::global("PortalActivateEvent").new_(type, eventInitDict)) {}

jsbind::Any PortalActivateEvent::data() const {
    return Event::get("data").as<jsbind::Any>();
}

HTMLPortalElement PortalActivateEvent::adoptPredecessor() {
    return Event::call("adoptPredecessor").as<HTMLPortalElement>();
}

