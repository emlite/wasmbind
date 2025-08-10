#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "RTCRtpParameters.hpp"

namespace webbind {

class RTCRtpEncodingParameters;

/// Dictionary type RTCRtpSendParameters
class RTCRtpSendParameters : public RTCRtpParameters {
  explicit RTCRtpSendParameters(Handle h) noexcept;
public:
    static RTCRtpSendParameters take_ownership(Handle h) noexcept;
    explicit RTCRtpSendParameters(const emlite::Val &val) noexcept;
    RTCRtpSendParameters() noexcept;
    [[nodiscard]] RTCRtpSendParameters clone() const noexcept;
    /// Getter of the `transactionId` attribute.
    [[nodiscard]] jsbind::String transactionId() const;
    /// Setter of the `transactionId` attribute.
    void transactionId(const jsbind::String& value);
    /// Getter of the `encodings` attribute.
    [[nodiscard]] jsbind::TypedArray<RTCRtpEncodingParameters> encodings() const;
    /// Setter of the `encodings` attribute.
    void encodings(const jsbind::TypedArray<RTCRtpEncodingParameters>& value);
};

} // namespace webbind