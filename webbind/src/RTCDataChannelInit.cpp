#include "webbind/RTCDataChannelInit.hpp"

using emlite::Val;
namespace webbind {

RTCDataChannelInit::RTCDataChannelInit(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
RTCDataChannelInit RTCDataChannelInit::take_ownership(Handle h) noexcept {
        return RTCDataChannelInit(h);
    }
RTCDataChannelInit::RTCDataChannelInit(const emlite::Val &val) noexcept: emlite::Val(val) {}
RTCDataChannelInit::RTCDataChannelInit() noexcept: emlite::Val(emlite::Val::object()) {}
RTCDataChannelInit RTCDataChannelInit::clone() const noexcept { return *this; }

bool RTCDataChannelInit::ordered() const {
    return emlite::Val::get("ordered").as<bool>();
}

void RTCDataChannelInit::ordered(bool value) {
    emlite::Val::set("ordered", value);
}

unsigned short RTCDataChannelInit::maxPacketLifeTime() const {
    return emlite::Val::get("maxPacketLifeTime").as<unsigned short>();
}

void RTCDataChannelInit::maxPacketLifeTime(unsigned short value) {
    emlite::Val::set("maxPacketLifeTime", value);
}

unsigned short RTCDataChannelInit::maxRetransmits() const {
    return emlite::Val::get("maxRetransmits").as<unsigned short>();
}

void RTCDataChannelInit::maxRetransmits(unsigned short value) {
    emlite::Val::set("maxRetransmits", value);
}

jsbind::String RTCDataChannelInit::protocol() const {
    return emlite::Val::get("protocol").as<jsbind::String>();
}

void RTCDataChannelInit::protocol(const jsbind::String& value) {
    emlite::Val::set("protocol", value);
}

bool RTCDataChannelInit::negotiated() const {
    return emlite::Val::get("negotiated").as<bool>();
}

void RTCDataChannelInit::negotiated(bool value) {
    emlite::Val::set("negotiated", value);
}

unsigned short RTCDataChannelInit::id() const {
    return emlite::Val::get("id").as<unsigned short>();
}

void RTCDataChannelInit::id(unsigned short value) {
    emlite::Val::set("id", value);
}


} // namespace webbind