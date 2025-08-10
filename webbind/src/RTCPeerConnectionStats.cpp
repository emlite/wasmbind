#include <webbind/RTCPeerConnectionStats.hpp>

using emlite::Val;
namespace webbind {

RTCPeerConnectionStats::RTCPeerConnectionStats(Handle h) noexcept : RTCStats(emlite::Val::take_ownership(h)) {}
RTCPeerConnectionStats RTCPeerConnectionStats::take_ownership(Handle h) noexcept {
        return RTCPeerConnectionStats(h);
    }
RTCPeerConnectionStats::RTCPeerConnectionStats(const emlite::Val &val) noexcept: RTCStats(val) {}
RTCPeerConnectionStats::RTCPeerConnectionStats() noexcept: RTCStats(emlite::Val::object()) {}
RTCPeerConnectionStats RTCPeerConnectionStats::clone() const noexcept { return *this; }

unsigned long RTCPeerConnectionStats::dataChannelsOpened() const {
    return emlite::Val::get("dataChannelsOpened").as<unsigned long>();
}

void RTCPeerConnectionStats::dataChannelsOpened(unsigned long value) {
    emlite::Val::set("dataChannelsOpened", value);
}

unsigned long RTCPeerConnectionStats::dataChannelsClosed() const {
    return emlite::Val::get("dataChannelsClosed").as<unsigned long>();
}

void RTCPeerConnectionStats::dataChannelsClosed(unsigned long value) {
    emlite::Val::set("dataChannelsClosed", value);
}


} // namespace webbind