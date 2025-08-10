#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "RTCIceServer.hpp"

namespace webbind {

class RTCCertificate;

/// Dictionary type RTCConfiguration
/// [`RTCConfiguration`](https://developer.mozilla.org/en-US/docs/Web/API/RTCConfiguration)
class RTCConfiguration : public emlite::Val {
  explicit RTCConfiguration(Handle h) noexcept;
public:
    static RTCConfiguration take_ownership(Handle h) noexcept;
    explicit RTCConfiguration(const emlite::Val &val) noexcept;
    RTCConfiguration() noexcept;
    [[nodiscard]] RTCConfiguration clone() const noexcept;
    [[nodiscard]] jsbind::TypedArray<RTCIceServer> iceServers() const;
    void iceServers(const jsbind::TypedArray<RTCIceServer>& value);
    [[nodiscard]] RTCIceTransportPolicy iceTransportPolicy() const;
    void iceTransportPolicy(const RTCIceTransportPolicy& value);
    [[nodiscard]] RTCBundlePolicy bundlePolicy() const;
    void bundlePolicy(const RTCBundlePolicy& value);
    [[nodiscard]] RTCRtcpMuxPolicy rtcpMuxPolicy() const;
    void rtcpMuxPolicy(const RTCRtcpMuxPolicy& value);
    [[nodiscard]] jsbind::TypedArray<RTCCertificate> certificates() const;
    void certificates(const jsbind::TypedArray<RTCCertificate>& value);
    [[nodiscard]] unsigned char iceCandidatePoolSize() const;
    void iceCandidatePoolSize(unsigned char value);
};

} // namespace webbind