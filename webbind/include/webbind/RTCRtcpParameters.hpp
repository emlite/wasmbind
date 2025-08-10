#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type RTCRtcpParameters
class RTCRtcpParameters : public emlite::Val {
  explicit RTCRtcpParameters(Handle h) noexcept;
public:
    static RTCRtcpParameters take_ownership(Handle h) noexcept;
    explicit RTCRtcpParameters(const emlite::Val &val) noexcept;
    RTCRtcpParameters() noexcept;
    [[nodiscard]] RTCRtcpParameters clone() const noexcept;
    /// Getter of the `cname` attribute.
    [[nodiscard]] jsbind::String cname() const;
    /// Setter of the `cname` attribute.
    void cname(const jsbind::String& value);
    /// Getter of the `reducedSize` attribute.
    [[nodiscard]] bool reducedSize() const;
    /// Setter of the `reducedSize` attribute.
    void reducedSize(bool value);
};

} // namespace webbind