#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type RTCRtpCodingParameters
/// [`RTCRtpCodingParameters`](https://developer.mozilla.org/en-US/docs/Web/API/RTCRtpCodingParameters)
class RTCRtpCodingParameters : public emlite::Val {
  explicit RTCRtpCodingParameters(Handle h) noexcept;
public:
    static RTCRtpCodingParameters take_ownership(Handle h) noexcept;
    explicit RTCRtpCodingParameters(const emlite::Val &val) noexcept;
    RTCRtpCodingParameters() noexcept;
    [[nodiscard]] RTCRtpCodingParameters clone() const noexcept;
    [[nodiscard]] jsbind::String rid() const;
    void rid(const jsbind::String& value);
};

} // namespace webbind