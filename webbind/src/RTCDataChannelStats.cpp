#include "webbind/RTCDataChannelStats.hpp"

using emlite::Val;
namespace webbind {

RTCDataChannelStats::RTCDataChannelStats(Handle h) noexcept : RTCStats(emlite::Val::take_ownership(h)) {}
RTCDataChannelStats RTCDataChannelStats::take_ownership(Handle h) noexcept {
        return RTCDataChannelStats(h);
    }
RTCDataChannelStats::RTCDataChannelStats(const emlite::Val &val) noexcept: RTCStats(val) {}
RTCDataChannelStats::RTCDataChannelStats() noexcept: RTCStats(emlite::Val::object()) {}
RTCDataChannelStats RTCDataChannelStats::clone() const noexcept { return *this; }

jsbind::String RTCDataChannelStats::label() const {
    return emlite::Val::get("label").as<jsbind::String>();
}

void RTCDataChannelStats::label(const jsbind::String& value) {
    emlite::Val::set("label", value);
}

jsbind::String RTCDataChannelStats::protocol() const {
    return emlite::Val::get("protocol").as<jsbind::String>();
}

void RTCDataChannelStats::protocol(const jsbind::String& value) {
    emlite::Val::set("protocol", value);
}

unsigned short RTCDataChannelStats::dataChannelIdentifier() const {
    return emlite::Val::get("dataChannelIdentifier").as<unsigned short>();
}

void RTCDataChannelStats::dataChannelIdentifier(unsigned short value) {
    emlite::Val::set("dataChannelIdentifier", value);
}

RTCDataChannelState RTCDataChannelStats::state() const {
    return emlite::Val::get("state").as<RTCDataChannelState>();
}

void RTCDataChannelStats::state(const RTCDataChannelState& value) {
    emlite::Val::set("state", value);
}

unsigned long RTCDataChannelStats::messagesSent() const {
    return emlite::Val::get("messagesSent").as<unsigned long>();
}

void RTCDataChannelStats::messagesSent(unsigned long value) {
    emlite::Val::set("messagesSent", value);
}

long long RTCDataChannelStats::bytesSent() const {
    return emlite::Val::get("bytesSent").as<long long>();
}

void RTCDataChannelStats::bytesSent(long long value) {
    emlite::Val::set("bytesSent", value);
}

unsigned long RTCDataChannelStats::messagesReceived() const {
    return emlite::Val::get("messagesReceived").as<unsigned long>();
}

void RTCDataChannelStats::messagesReceived(unsigned long value) {
    emlite::Val::set("messagesReceived", value);
}

long long RTCDataChannelStats::bytesReceived() const {
    return emlite::Val::get("bytesReceived").as<long long>();
}

void RTCDataChannelStats::bytesReceived(long long value) {
    emlite::Val::set("bytesReceived", value);
}


} // namespace webbind