#include <webbind/RTCRtpSynchronizationSource.hpp>

namespace webbind {

RTCRtpSynchronizationSource::RTCRtpSynchronizationSource(Handle h) noexcept : RTCRtpContributingSource(emlite::Val::take_ownership(h)) {}
RTCRtpSynchronizationSource RTCRtpSynchronizationSource::take_ownership(Handle h) noexcept {
    return RTCRtpSynchronizationSource(h);
}

RTCRtpSynchronizationSource::RTCRtpSynchronizationSource(const emlite::Val &val) noexcept: RTCRtpContributingSource(val) {}

RTCRtpSynchronizationSource::RTCRtpSynchronizationSource() noexcept: RTCRtpContributingSource(emlite::Val::object()) {}

RTCRtpSynchronizationSource RTCRtpSynchronizationSource::clone() const noexcept { return *this; }


} // namespace webbind