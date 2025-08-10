#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "RTCRtpCodingParameters.hpp"
#include "RTCRtpCodec.hpp"

namespace webbind {

/// Dictionary type RTCRtpEncodingParameters
/// [`RTCRtpEncodingParameters`](https://developer.mozilla.org/en-US/docs/Web/API/RTCRtpEncodingParameters)
class RTCRtpEncodingParameters : public RTCRtpCodingParameters {
  explicit RTCRtpEncodingParameters(Handle h) noexcept;
public:
    static RTCRtpEncodingParameters take_ownership(Handle h) noexcept;
    explicit RTCRtpEncodingParameters(const emlite::Val &val) noexcept;
    RTCRtpEncodingParameters() noexcept;
    [[nodiscard]] RTCRtpEncodingParameters clone() const noexcept;
    [[nodiscard]] bool active() const;
    void active(bool value);
    [[nodiscard]] RTCRtpCodec codec() const;
    void codec(const RTCRtpCodec& value);
    [[nodiscard]] unsigned long maxBitrate() const;
    void maxBitrate(unsigned long value);
    [[nodiscard]] double maxFramerate() const;
    void maxFramerate(double value);
    [[nodiscard]] double scaleResolutionDownBy() const;
    void scaleResolutionDownBy(double value);
};

} // namespace webbind