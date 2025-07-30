#include <webbind/XRInputSourcesChangeEvent.hpp>
#include <webbind/XRSession.hpp>
#include <webbind/XRInputSource.hpp>


XRInputSourcesChangeEvent XRInputSourcesChangeEvent::take_ownership(Handle h) noexcept {
        return XRInputSourcesChangeEvent(h);
    }
XRInputSourcesChangeEvent XRInputSourcesChangeEvent::clone() const noexcept { return *this; }
XRInputSourcesChangeEvent::XRInputSourcesChangeEvent(Handle h) noexcept : Event(emlite::Val::take_ownership(h)) {}
XRInputSourcesChangeEvent::XRInputSourcesChangeEvent(const emlite::Val &val) noexcept: Event(val) {}


XRInputSourcesChangeEvent::XRInputSourcesChangeEvent(const jsbind::String& type, const jsbind::Any& eventInitDict) : Event(emlite::Val::global("XRInputSourcesChangeEvent").new_(type, eventInitDict)) {}

XRSession XRInputSourcesChangeEvent::session() const {
    return Event::get("session").as<XRSession>();
}

jsbind::TypedArray<XRInputSource> XRInputSourcesChangeEvent::added() const {
    return Event::get("added").as<jsbind::TypedArray<XRInputSource>>();
}

jsbind::TypedArray<XRInputSource> XRInputSourcesChangeEvent::removed() const {
    return Event::get("removed").as<jsbind::TypedArray<XRInputSource>>();
}

