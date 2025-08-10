#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class RTCIceServer;
class RTCCertificate;

/// Dictionary type RTCConfiguration
class RTCConfiguration : public emlite::Val {
  explicit RTCConfiguration(Handle h) noexcept;
public:
    static RTCConfiguration take_ownership(Handle h) noexcept;
    explicit RTCConfiguration(const emlite::Val &val) noexcept;
    RTCConfiguration() noexcept;
    [[nodiscard]] RTCConfiguration clone() const noexcept;
    /// Getter of the `iceServers` attribute.
    [[nodiscard]] jsbind::TypedArray<RTCIceServer> iceServers() const;
    /// Setter of the `iceServers` attribute.
    void iceServers(const jsbind::TypedArray<RTCIceServer>& value);
    /// Getter of the `iceTransportPolicy` attribute.
    [[nodiscard]] RTCIceTransportPolicy iceTransportPolicy() const;
    /// Setter of the `iceTransportPolicy` attribute.
    void iceTransportPolicy(const RTCIceTransportPolicy& value);
    /// Getter of the `bundlePolicy` attribute.
    [[nodiscard]] RTCBundlePolicy bundlePolicy() const;
    /// Setter of the `bundlePolicy` attribute.
    void bundlePolicy(const RTCBundlePolicy& value);
    /// Getter of the `rtcpMuxPolicy` attribute.
    [[nodiscard]] RTCRtcpMuxPolicy rtcpMuxPolicy() const;
    /// Setter of the `rtcpMuxPolicy` attribute.
    void rtcpMuxPolicy(const RTCRtcpMuxPolicy& value);
    /// Getter of the `certificates` attribute.
    [[nodiscard]] jsbind::TypedArray<RTCCertificate> certificates() const;
    /// Setter of the `certificates` attribute.
    void certificates(const jsbind::TypedArray<RTCCertificate>& value);
    /// Getter of the `iceCandidatePoolSize` attribute.
    [[nodiscard]] unsigned char iceCandidatePoolSize() const;
    /// Setter of the `iceCandidatePoolSize` attribute.
    void iceCandidatePoolSize(unsigned char value);
};

} // namespace webbind