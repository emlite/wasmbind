#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "RTCRtpHeaderExtensionParameters.hpp"
#include "RTCRtcpParameters.hpp"
#include "RTCRtpCodecParameters.hpp"

namespace webbind {

/// Dictionary type RTCRtpParameters
class RTCRtpParameters : public emlite::Val {
  explicit RTCRtpParameters(Handle h) noexcept;
public:
    static RTCRtpParameters take_ownership(Handle h) noexcept;
    explicit RTCRtpParameters(const emlite::Val &val) noexcept;
    RTCRtpParameters() noexcept;
    [[nodiscard]] RTCRtpParameters clone() const noexcept;
    /// Getter of the `headerExtensions` attribute.
    [[nodiscard]] jsbind::TypedArray<RTCRtpHeaderExtensionParameters> headerExtensions() const;
    /// Setter of the `headerExtensions` attribute.
    void headerExtensions(const jsbind::TypedArray<RTCRtpHeaderExtensionParameters>& value);
    /// Getter of the `rtcp` attribute.
    [[nodiscard]] RTCRtcpParameters rtcp() const;
    /// Setter of the `rtcp` attribute.
    void rtcp(const RTCRtcpParameters& value);
    /// Getter of the `codecs` attribute.
    [[nodiscard]] jsbind::TypedArray<RTCRtpCodecParameters> codecs() const;
    /// Setter of the `codecs` attribute.
    void codecs(const jsbind::TypedArray<RTCRtpCodecParameters>& value);
};

} // namespace webbind