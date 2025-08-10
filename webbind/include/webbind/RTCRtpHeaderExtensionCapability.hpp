#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type RTCRtpHeaderExtensionCapability
/// [`RTCRtpHeaderExtensionCapability`](https://developer.mozilla.org/en-US/docs/Web/API/RTCRtpHeaderExtensionCapability)
class RTCRtpHeaderExtensionCapability : public emlite::Val {
  explicit RTCRtpHeaderExtensionCapability(Handle h) noexcept;
public:
    static RTCRtpHeaderExtensionCapability take_ownership(Handle h) noexcept;
    explicit RTCRtpHeaderExtensionCapability(const emlite::Val &val) noexcept;
    RTCRtpHeaderExtensionCapability() noexcept;
    [[nodiscard]] RTCRtpHeaderExtensionCapability clone() const noexcept;
    [[nodiscard]] jsbind::String uri() const;
    void uri(const jsbind::String& value);
};

} // namespace webbind