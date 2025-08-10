#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "RTCRtpCodingParameters.hpp"
#include "RTCRtpCodec.hpp"

namespace webbind {

/// Dictionary type RTCRtpEncodingParameters
class RTCRtpEncodingParameters : public RTCRtpCodingParameters {
  explicit RTCRtpEncodingParameters(Handle h) noexcept;
public:
    static RTCRtpEncodingParameters take_ownership(Handle h) noexcept;
    explicit RTCRtpEncodingParameters(const emlite::Val &val) noexcept;
    RTCRtpEncodingParameters() noexcept;
    [[nodiscard]] RTCRtpEncodingParameters clone() const noexcept;
    /// Getter of the `active` attribute.
    [[nodiscard]] bool active() const;
    /// Setter of the `active` attribute.
    void active(bool value);
    /// Getter of the `codec` attribute.
    [[nodiscard]] RTCRtpCodec codec() const;
    /// Setter of the `codec` attribute.
    void codec(const RTCRtpCodec& value);
    /// Getter of the `maxBitrate` attribute.
    [[nodiscard]] unsigned long maxBitrate() const;
    /// Setter of the `maxBitrate` attribute.
    void maxBitrate(unsigned long value);
    /// Getter of the `maxFramerate` attribute.
    [[nodiscard]] double maxFramerate() const;
    /// Setter of the `maxFramerate` attribute.
    void maxFramerate(double value);
    /// Getter of the `scaleResolutionDownBy` attribute.
    [[nodiscard]] double scaleResolutionDownBy() const;
    /// Setter of the `scaleResolutionDownBy` attribute.
    void scaleResolutionDownBy(double value);
};

} // namespace webbind