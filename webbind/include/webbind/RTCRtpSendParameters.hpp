#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "RTCRtpParameters.hpp"
#include "RTCRtpEncodingParameters.hpp"

namespace webbind {

/// Dictionary type RTCRtpSendParameters
/// [`RTCRtpSendParameters`](https://developer.mozilla.org/en-US/docs/Web/API/RTCRtpSendParameters)
class RTCRtpSendParameters : public RTCRtpParameters {
  explicit RTCRtpSendParameters(Handle h) noexcept;
public:
    static RTCRtpSendParameters take_ownership(Handle h) noexcept;
    explicit RTCRtpSendParameters(const emlite::Val &val) noexcept;
    RTCRtpSendParameters() noexcept;
    [[nodiscard]] RTCRtpSendParameters clone() const noexcept;
    [[nodiscard]] jsbind::String transactionId() const;
    void transactionId(const jsbind::String& value);
    [[nodiscard]] jsbind::TypedArray<RTCRtpEncodingParameters> encodings() const;
    void encodings(const jsbind::TypedArray<RTCRtpEncodingParameters>& value);
};

} // namespace webbind