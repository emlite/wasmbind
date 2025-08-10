#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "RTCRtpHeaderExtensionParameters.hpp"
#include "RTCRtcpParameters.hpp"
#include "RTCRtpCodecParameters.hpp"

namespace webbind {

/// Dictionary type RTCRtpParameters
/// [`RTCRtpParameters`](https://developer.mozilla.org/en-US/docs/Web/API/RTCRtpParameters)
class RTCRtpParameters : public emlite::Val {
  explicit RTCRtpParameters(Handle h) noexcept;
public:
    static RTCRtpParameters take_ownership(Handle h) noexcept;
    explicit RTCRtpParameters(const emlite::Val &val) noexcept;
    RTCRtpParameters() noexcept;
    [[nodiscard]] RTCRtpParameters clone() const noexcept;
    [[nodiscard]] jsbind::TypedArray<RTCRtpHeaderExtensionParameters> headerExtensions() const;
    void headerExtensions(const jsbind::TypedArray<RTCRtpHeaderExtensionParameters>& value);
    [[nodiscard]] RTCRtcpParameters rtcp() const;
    void rtcp(const RTCRtcpParameters& value);
    [[nodiscard]] jsbind::TypedArray<RTCRtpCodecParameters> codecs() const;
    void codecs(const jsbind::TypedArray<RTCRtpCodecParameters>& value);
};

} // namespace webbind