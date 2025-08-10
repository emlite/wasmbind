#include "webbind/RTCDataChannel.hpp"

namespace webbind {

RTCDataChannel RTCDataChannel::take_ownership(Handle h) noexcept {
        return RTCDataChannel(h);
    }
RTCDataChannel RTCDataChannel::clone() const noexcept { return *this; }
emlite::Val RTCDataChannel::instance() noexcept { return emlite::Val::global("RTCDataChannel"); }
RTCDataChannel::RTCDataChannel(Handle h) noexcept : EventTarget(emlite::Val::take_ownership(h)) {}
RTCDataChannel::RTCDataChannel(const emlite::Val &val) noexcept: EventTarget(val) {}

jsbind::String RTCDataChannel::label() const {
    return EventTarget::get("label").as<jsbind::String>();
}

bool RTCDataChannel::ordered() const {
    return EventTarget::get("ordered").as<bool>();
}

unsigned short RTCDataChannel::maxPacketLifeTime() const {
    return EventTarget::get("maxPacketLifeTime").as<unsigned short>();
}

unsigned short RTCDataChannel::maxRetransmits() const {
    return EventTarget::get("maxRetransmits").as<unsigned short>();
}

jsbind::String RTCDataChannel::protocol() const {
    return EventTarget::get("protocol").as<jsbind::String>();
}

bool RTCDataChannel::negotiated() const {
    return EventTarget::get("negotiated").as<bool>();
}

unsigned short RTCDataChannel::id() const {
    return EventTarget::get("id").as<unsigned short>();
}

RTCDataChannelState RTCDataChannel::readyState() const {
    return EventTarget::get("readyState").as<RTCDataChannelState>();
}

unsigned long RTCDataChannel::bufferedAmount() const {
    return EventTarget::get("bufferedAmount").as<unsigned long>();
}

unsigned long RTCDataChannel::bufferedAmountLowThreshold() const {
    return EventTarget::get("bufferedAmountLowThreshold").as<unsigned long>();
}

void RTCDataChannel::bufferedAmountLowThreshold(unsigned long value) {
    EventTarget::set("bufferedAmountLowThreshold", value);
}

jsbind::Any RTCDataChannel::onopen() const {
    return EventTarget::get("onopen").as<jsbind::Any>();
}

void RTCDataChannel::onopen(const jsbind::Any& value) {
    EventTarget::set("onopen", value);
}

jsbind::Any RTCDataChannel::onbufferedamountlow() const {
    return EventTarget::get("onbufferedamountlow").as<jsbind::Any>();
}

void RTCDataChannel::onbufferedamountlow(const jsbind::Any& value) {
    EventTarget::set("onbufferedamountlow", value);
}

jsbind::Any RTCDataChannel::onerror() const {
    return EventTarget::get("onerror").as<jsbind::Any>();
}

void RTCDataChannel::onerror(const jsbind::Any& value) {
    EventTarget::set("onerror", value);
}

jsbind::Any RTCDataChannel::onclosing() const {
    return EventTarget::get("onclosing").as<jsbind::Any>();
}

void RTCDataChannel::onclosing(const jsbind::Any& value) {
    EventTarget::set("onclosing", value);
}

jsbind::Any RTCDataChannel::onclose() const {
    return EventTarget::get("onclose").as<jsbind::Any>();
}

void RTCDataChannel::onclose(const jsbind::Any& value) {
    EventTarget::set("onclose", value);
}

jsbind::Undefined RTCDataChannel::close() {
    return EventTarget::call("close").as<jsbind::Undefined>();
}

jsbind::Any RTCDataChannel::onmessage() const {
    return EventTarget::get("onmessage").as<jsbind::Any>();
}

void RTCDataChannel::onmessage(const jsbind::Any& value) {
    EventTarget::set("onmessage", value);
}

BinaryType RTCDataChannel::binaryType() const {
    return EventTarget::get("binaryType").as<BinaryType>();
}

void RTCDataChannel::binaryType(const BinaryType& value) {
    EventTarget::set("binaryType", value);
}

jsbind::Undefined RTCDataChannel::send(const jsbind::Any& data) {
    return EventTarget::call("send", data).as<jsbind::Undefined>();
}

RTCPriorityType RTCDataChannel::priority() const {
    return EventTarget::get("priority").as<RTCPriorityType>();
}


} // namespace webbind