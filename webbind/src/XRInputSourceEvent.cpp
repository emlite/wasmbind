#include "webbind/XRInputSourceEvent.hpp"
#include "webbind/XRInputSourceEventInit.hpp"
#include "webbind/XRFrame.hpp"
#include "webbind/XRInputSource.hpp"

namespace webbind {

XRInputSourceEvent XRInputSourceEvent::take_ownership(Handle h) noexcept {
        return XRInputSourceEvent(h);
    }
XRInputSourceEvent XRInputSourceEvent::clone() const noexcept { return *this; }
emlite::Val XRInputSourceEvent::instance() noexcept { return emlite::Val::global("XRInputSourceEvent"); }
XRInputSourceEvent::XRInputSourceEvent(Handle h) noexcept : Event(emlite::Val::take_ownership(h)) {}
XRInputSourceEvent::XRInputSourceEvent(const emlite::Val &val) noexcept: Event(val) {}

XRInputSourceEvent::XRInputSourceEvent(const jsbind::String& type, const XRInputSourceEventInit& eventInitDict) : Event(emlite::Val::global("XRInputSourceEvent").new_(type, eventInitDict)) {}

XRFrame XRInputSourceEvent::frame() const {
    return Event::get("frame").as<XRFrame>();
}

XRInputSource XRInputSourceEvent::inputSource() const {
    return Event::get("inputSource").as<XRInputSource>();
}


} // namespace webbind