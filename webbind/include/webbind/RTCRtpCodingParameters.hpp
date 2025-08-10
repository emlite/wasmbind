#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type RTCRtpCodingParameters
class RTCRtpCodingParameters : public emlite::Val {
  explicit RTCRtpCodingParameters(Handle h) noexcept;
public:
    static RTCRtpCodingParameters take_ownership(Handle h) noexcept;
    explicit RTCRtpCodingParameters(const emlite::Val &val) noexcept;
    RTCRtpCodingParameters() noexcept;
    [[nodiscard]] RTCRtpCodingParameters clone() const noexcept;
    /// Getter of the `rid` attribute.
    [[nodiscard]] jsbind::String rid() const;
    /// Setter of the `rid` attribute.
    void rid(const jsbind::String& value);
};

} // namespace webbind