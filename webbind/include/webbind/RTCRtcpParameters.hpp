#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type RTCRtcpParameters
/// [`RTCRtcpParameters`](https://developer.mozilla.org/en-US/docs/Web/API/RTCRtcpParameters)
class RTCRtcpParameters : public emlite::Val {
  explicit RTCRtcpParameters(Handle h) noexcept;
public:
    static RTCRtcpParameters take_ownership(Handle h) noexcept;
    explicit RTCRtcpParameters(const emlite::Val &val) noexcept;
    RTCRtcpParameters() noexcept;
    [[nodiscard]] RTCRtcpParameters clone() const noexcept;
    [[nodiscard]] jsbind::String cname() const;
    void cname(const jsbind::String& value);
    [[nodiscard]] bool reducedSize() const;
    void reducedSize(bool value);
};

} // namespace webbind