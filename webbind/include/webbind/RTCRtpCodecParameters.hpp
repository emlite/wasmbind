#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "RTCRtpCodec.hpp"

namespace webbind {

/// Dictionary type RTCRtpCodecParameters
/// [`RTCRtpCodecParameters`](https://developer.mozilla.org/en-US/docs/Web/API/RTCRtpCodecParameters)
class RTCRtpCodecParameters : public RTCRtpCodec {
  explicit RTCRtpCodecParameters(Handle h) noexcept;
public:
    static RTCRtpCodecParameters take_ownership(Handle h) noexcept;
    explicit RTCRtpCodecParameters(const emlite::Val &val) noexcept;
    RTCRtpCodecParameters() noexcept;
    [[nodiscard]] RTCRtpCodecParameters clone() const noexcept;
    [[nodiscard]] unsigned char payloadType() const;
    void payloadType(unsigned char value);
};

} // namespace webbind