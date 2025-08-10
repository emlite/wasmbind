#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "RTCRtpParameters.hpp"

namespace webbind {

/// Dictionary type RTCRtpReceiveParameters
class RTCRtpReceiveParameters : public RTCRtpParameters {
  explicit RTCRtpReceiveParameters(Handle h) noexcept;
public:
    static RTCRtpReceiveParameters take_ownership(Handle h) noexcept;
    explicit RTCRtpReceiveParameters(const emlite::Val &val) noexcept;
    RTCRtpReceiveParameters() noexcept;
    [[nodiscard]] RTCRtpReceiveParameters clone() const noexcept;
};

} // namespace webbind