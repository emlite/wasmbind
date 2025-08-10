#include "webbind/RTCIceGatherOptions.hpp"
#include "webbind/RTCIceServer.hpp"

using emlite::Val;
namespace webbind {

RTCIceGatherOptions::RTCIceGatherOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
RTCIceGatherOptions RTCIceGatherOptions::take_ownership(Handle h) noexcept {
        return RTCIceGatherOptions(h);
    }
RTCIceGatherOptions::RTCIceGatherOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
RTCIceGatherOptions::RTCIceGatherOptions() noexcept: emlite::Val(emlite::Val::object()) {}
RTCIceGatherOptions RTCIceGatherOptions::clone() const noexcept { return *this; }

RTCIceTransportPolicy RTCIceGatherOptions::gatherPolicy() const {
    return emlite::Val::get("gatherPolicy").as<RTCIceTransportPolicy>();
}

void RTCIceGatherOptions::gatherPolicy(const RTCIceTransportPolicy& value) {
    emlite::Val::set("gatherPolicy", value);
}

jsbind::TypedArray<RTCIceServer> RTCIceGatherOptions::iceServers() const {
    return emlite::Val::get("iceServers").as<jsbind::TypedArray<RTCIceServer>>();
}

void RTCIceGatherOptions::iceServers(const jsbind::TypedArray<RTCIceServer>& value) {
    emlite::Val::set("iceServers", value);
}


} // namespace webbind