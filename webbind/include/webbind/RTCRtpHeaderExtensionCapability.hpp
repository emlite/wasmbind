#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type RTCRtpHeaderExtensionCapability
class RTCRtpHeaderExtensionCapability : public emlite::Val {
  explicit RTCRtpHeaderExtensionCapability(Handle h) noexcept;
public:
    static RTCRtpHeaderExtensionCapability take_ownership(Handle h) noexcept;
    explicit RTCRtpHeaderExtensionCapability(const emlite::Val &val) noexcept;
    RTCRtpHeaderExtensionCapability() noexcept;
    [[nodiscard]] RTCRtpHeaderExtensionCapability clone() const noexcept;
    /// Getter of the `uri` attribute.
    [[nodiscard]] jsbind::String uri() const;
    /// Setter of the `uri` attribute.
    void uri(const jsbind::String& value);
};

} // namespace webbind