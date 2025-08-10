#include "webbind/RTCDataChannelEvent.hpp"
#include "webbind/RTCDataChannelEventInit.hpp"
#include "webbind/RTCDataChannel.hpp"

namespace webbind {

RTCDataChannelEvent RTCDataChannelEvent::take_ownership(Handle h) noexcept {
        return RTCDataChannelEvent(h);
    }
RTCDataChannelEvent RTCDataChannelEvent::clone() const noexcept { return *this; }
emlite::Val RTCDataChannelEvent::instance() noexcept { return emlite::Val::global("RTCDataChannelEvent"); }
RTCDataChannelEvent::RTCDataChannelEvent(Handle h) noexcept : Event(emlite::Val::take_ownership(h)) {}
RTCDataChannelEvent::RTCDataChannelEvent(const emlite::Val &val) noexcept: Event(val) {}

RTCDataChannelEvent::RTCDataChannelEvent(const jsbind::String& type, const RTCDataChannelEventInit& eventInitDict) : Event(emlite::Val::global("RTCDataChannelEvent").new_(type, eventInitDict)) {}

RTCDataChannel RTCDataChannelEvent::channel() const {
    return Event::get("channel").as<RTCDataChannel>();
}


} // namespace webbind