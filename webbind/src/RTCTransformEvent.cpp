#include <webbind/RTCTransformEvent.hpp>
#include <webbind/RTCRtpScriptTransformer.hpp>


RTCTransformEvent RTCTransformEvent::take_ownership(Handle h) noexcept {
        return RTCTransformEvent(h);
    }
RTCTransformEvent RTCTransformEvent::clone() const noexcept { return *this; }
RTCTransformEvent::RTCTransformEvent(Handle h) noexcept : Event(emlite::Val::take_ownership(h)) {}
RTCTransformEvent::RTCTransformEvent(const emlite::Val &val) noexcept: Event(val) {}


RTCRtpScriptTransformer RTCTransformEvent::transformer() const {
    return Event::get("transformer").as<RTCRtpScriptTransformer>();
}

