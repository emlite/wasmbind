#include <webbind/RTCIceCandidatePair.hpp>
#include <webbind/RTCIceCandidate.hpp>


RTCIceCandidatePair RTCIceCandidatePair::take_ownership(Handle h) noexcept {
        return RTCIceCandidatePair(h);
    }
RTCIceCandidatePair RTCIceCandidatePair::clone() const noexcept { return *this; }
RTCIceCandidatePair::RTCIceCandidatePair(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
RTCIceCandidatePair::RTCIceCandidatePair(const emlite::Val &val) noexcept: emlite::Val(val) {}


RTCIceCandidate RTCIceCandidatePair::local() const {
    return emlite::Val::get("local").as<RTCIceCandidate>();
}

RTCIceCandidate RTCIceCandidatePair::remote() const {
    return emlite::Val::get("remote").as<RTCIceCandidate>();
}

