#include <webbind/RTCRtpReceiveParameters.hpp>

using emlite::Val;
namespace webbind {

RTCRtpReceiveParameters::RTCRtpReceiveParameters(Handle h) noexcept : RTCRtpParameters(emlite::Val::take_ownership(h)) {}
RTCRtpReceiveParameters RTCRtpReceiveParameters::take_ownership(Handle h) noexcept {
        return RTCRtpReceiveParameters(h);
    }
RTCRtpReceiveParameters::RTCRtpReceiveParameters(const emlite::Val &val) noexcept: RTCRtpParameters(val) {}
RTCRtpReceiveParameters::RTCRtpReceiveParameters() noexcept: RTCRtpParameters(emlite::Val::object()) {}
RTCRtpReceiveParameters RTCRtpReceiveParameters::clone() const noexcept { return *this; }


} // namespace webbind