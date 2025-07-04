#include <webbind/SFrameTransformErrorEvent.hpp>


SFrameTransformErrorEvent SFrameTransformErrorEvent::take_ownership(Handle h) noexcept {
        return SFrameTransformErrorEvent(h);
    }
SFrameTransformErrorEvent SFrameTransformErrorEvent::clone() const noexcept { return *this; }
SFrameTransformErrorEvent::SFrameTransformErrorEvent(Handle h) noexcept : Event(emlite::Val::take_ownership(h)) {}
SFrameTransformErrorEvent::SFrameTransformErrorEvent(const emlite::Val &val) noexcept: Event(val) {}


SFrameTransformErrorEvent::SFrameTransformErrorEvent(const jsbind::DOMString& type, const jsbind::Any& eventInitDict): Event(emlite::Val::global("SFrameTransformErrorEvent").new_(type, eventInitDict)) {}

SFrameTransformErrorEventType SFrameTransformErrorEvent::errorType() const {
    return Event::get("errorType").as<SFrameTransformErrorEventType>();
}

jsbind::Any SFrameTransformErrorEvent::keyID() const {
    return Event::get("keyID").as<jsbind::Any>();
}

jsbind::Any SFrameTransformErrorEvent::frame() const {
    return Event::get("frame").as<jsbind::Any>();
}

