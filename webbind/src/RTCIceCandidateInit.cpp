#include "webbind/RTCIceCandidateInit.hpp"

using emlite::Val;
namespace webbind {

RTCIceCandidateInit::RTCIceCandidateInit(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
RTCIceCandidateInit RTCIceCandidateInit::take_ownership(Handle h) noexcept {
        return RTCIceCandidateInit(h);
    }
RTCIceCandidateInit::RTCIceCandidateInit(const emlite::Val &val) noexcept: emlite::Val(val) {}
RTCIceCandidateInit::RTCIceCandidateInit() noexcept: emlite::Val(emlite::Val::object()) {}
RTCIceCandidateInit RTCIceCandidateInit::clone() const noexcept { return *this; }

jsbind::String RTCIceCandidateInit::candidate() const {
    return emlite::Val::get("candidate").as<jsbind::String>();
}

void RTCIceCandidateInit::candidate(const jsbind::String& value) {
    emlite::Val::set("candidate", value);
}

jsbind::String RTCIceCandidateInit::sdpMid() const {
    return emlite::Val::get("sdpMid").as<jsbind::String>();
}

void RTCIceCandidateInit::sdpMid(const jsbind::String& value) {
    emlite::Val::set("sdpMid", value);
}

unsigned short RTCIceCandidateInit::sdpMLineIndex() const {
    return emlite::Val::get("sdpMLineIndex").as<unsigned short>();
}

void RTCIceCandidateInit::sdpMLineIndex(unsigned short value) {
    emlite::Val::set("sdpMLineIndex", value);
}

jsbind::String RTCIceCandidateInit::usernameFragment() const {
    return emlite::Val::get("usernameFragment").as<jsbind::String>();
}

void RTCIceCandidateInit::usernameFragment(const jsbind::String& value) {
    emlite::Val::set("usernameFragment", value);
}


} // namespace webbind