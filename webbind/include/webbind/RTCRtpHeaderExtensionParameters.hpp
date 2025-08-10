#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type RTCRtpHeaderExtensionParameters
class RTCRtpHeaderExtensionParameters : public emlite::Val {
  explicit RTCRtpHeaderExtensionParameters(Handle h) noexcept;
public:
    static RTCRtpHeaderExtensionParameters take_ownership(Handle h) noexcept;
    explicit RTCRtpHeaderExtensionParameters(const emlite::Val &val) noexcept;
    RTCRtpHeaderExtensionParameters() noexcept;
    [[nodiscard]] RTCRtpHeaderExtensionParameters clone() const noexcept;
    /// Getter of the `uri` attribute.
    [[nodiscard]] jsbind::String uri() const;
    /// Setter of the `uri` attribute.
    void uri(const jsbind::String& value);
    /// Getter of the `id` attribute.
    [[nodiscard]] unsigned short id() const;
    /// Setter of the `id` attribute.
    void id(unsigned short value);
    /// Getter of the `encrypted` attribute.
    [[nodiscard]] bool encrypted() const;
    /// Setter of the `encrypted` attribute.
    void encrypted(bool value);
};

} // namespace webbind