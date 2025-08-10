#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type RTCRtpHeaderExtensionParameters
/// [`RTCRtpHeaderExtensionParameters`](https://developer.mozilla.org/en-US/docs/Web/API/RTCRtpHeaderExtensionParameters)
class RTCRtpHeaderExtensionParameters : public emlite::Val {
  explicit RTCRtpHeaderExtensionParameters(Handle h) noexcept;
public:
    static RTCRtpHeaderExtensionParameters take_ownership(Handle h) noexcept;
    explicit RTCRtpHeaderExtensionParameters(const emlite::Val &val) noexcept;
    RTCRtpHeaderExtensionParameters() noexcept;
    [[nodiscard]] RTCRtpHeaderExtensionParameters clone() const noexcept;
    [[nodiscard]] jsbind::String uri() const;
    void uri(const jsbind::String& value);
    [[nodiscard]] unsigned short id() const;
    void id(unsigned short value);
    [[nodiscard]] bool encrypted() const;
    void encrypted(bool value);
};

} // namespace webbind