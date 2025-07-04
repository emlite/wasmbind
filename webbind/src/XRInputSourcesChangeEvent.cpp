#include <webbind/XRInputSourcesChangeEvent.hpp>
#include <webbind/XRSession.hpp>
#include <webbind/XRInputSource.hpp>


XRInputSourcesChangeEvent XRInputSourcesChangeEvent::take_ownership(Handle h) noexcept {
        return XRInputSourcesChangeEvent(h);
    }
XRInputSourcesChangeEvent XRInputSourcesChangeEvent::clone() const noexcept { return *this; }
XRInputSourcesChangeEvent::XRInputSourcesChangeEvent(Handle h) noexcept : Event(emlite::Val::take_ownership(h)) {}
XRInputSourcesChangeEvent::XRInputSourcesChangeEvent(const emlite::Val &val) noexcept: Event(val) {}


XRInputSourcesChangeEvent::XRInputSourcesChangeEvent(const jsbind::DOMString& type, const jsbind::Any& eventInitDict): Event(emlite::Val::global("XRInputSourcesChangeEvent").new_(type, eventInitDict)) {}

XRSession XRInputSourcesChangeEvent::session() const {
    return Event::get("session").as<XRSession>();
}

jsbind::FrozenArray<XRInputSource> XRInputSourcesChangeEvent::added() const {
    return Event::get("added").as<jsbind::FrozenArray<XRInputSource>>();
}

jsbind::FrozenArray<XRInputSource> XRInputSourcesChangeEvent::removed() const {
    return Event::get("removed").as<jsbind::FrozenArray<XRInputSource>>();
}

