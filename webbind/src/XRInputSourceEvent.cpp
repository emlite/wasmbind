#include <webbind/XRInputSourceEvent.hpp>
#include <webbind/XRFrame.hpp>
#include <webbind/XRInputSource.hpp>


XRInputSourceEvent XRInputSourceEvent::take_ownership(Handle h) noexcept {
        return XRInputSourceEvent(h);
    }
XRInputSourceEvent XRInputSourceEvent::clone() const noexcept { return *this; }
XRInputSourceEvent::XRInputSourceEvent(Handle h) noexcept : Event(emlite::Val::take_ownership(h)) {}
XRInputSourceEvent::XRInputSourceEvent(const emlite::Val &val) noexcept: Event(val) {}


XRInputSourceEvent::XRInputSourceEvent(const jsbind::String& type, const jsbind::Any& eventInitDict) : Event(emlite::Val::global("XRInputSourceEvent").new_(type, eventInitDict)) {}

XRFrame XRInputSourceEvent::frame() const {
    return Event::get("frame").as<XRFrame>();
}

XRInputSource XRInputSourceEvent::inputSource() const {
    return Event::get("inputSource").as<XRInputSource>();
}

