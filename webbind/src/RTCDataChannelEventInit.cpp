#include "webbind/RTCDataChannelEventInit.hpp"
#include "webbind/RTCDataChannel.hpp"

using emlite::Val;
namespace webbind {

RTCDataChannelEventInit::RTCDataChannelEventInit(Handle h) noexcept : EventInit(emlite::Val::take_ownership(h)) {}
RTCDataChannelEventInit RTCDataChannelEventInit::take_ownership(Handle h) noexcept {
        return RTCDataChannelEventInit(h);
    }
RTCDataChannelEventInit::RTCDataChannelEventInit(const emlite::Val &val) noexcept: EventInit(val) {}
RTCDataChannelEventInit::RTCDataChannelEventInit() noexcept: EventInit(emlite::Val::object()) {}
RTCDataChannelEventInit RTCDataChannelEventInit::clone() const noexcept { return *this; }

RTCDataChannel RTCDataChannelEventInit::channel() const {
    return emlite::Val::get("channel").as<RTCDataChannel>();
}

void RTCDataChannelEventInit::channel(const RTCDataChannel& value) {
    emlite::Val::set("channel", value);
}


} // namespace webbind