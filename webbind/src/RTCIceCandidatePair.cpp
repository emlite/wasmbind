#include <webbind/RTCIceCandidatePair.hpp>
#include <webbind/RTCIceCandidate.hpp>

namespace webbind {

RTCIceCandidatePair RTCIceCandidatePair::take_ownership(Handle h) noexcept {
    return RTCIceCandidatePair(h);
}

RTCIceCandidatePair RTCIceCandidatePair::clone() const noexcept { return *this; }

emlite::Val RTCIceCandidatePair::instance() noexcept { return emlite::Val::global("RTCIceCandidatePair"); }

RTCIceCandidatePair::RTCIceCandidatePair(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}

RTCIceCandidatePair::RTCIceCandidatePair(const emlite::Val &val) noexcept: emlite::Val(val) {}

RTCIceCandidate RTCIceCandidatePair::local() const {
    return emlite::Val::get("local").as<RTCIceCandidate>();
}

RTCIceCandidate RTCIceCandidatePair::remote() const {
    return emlite::Val::get("remote").as<RTCIceCandidate>();
}


} // namespace webbind