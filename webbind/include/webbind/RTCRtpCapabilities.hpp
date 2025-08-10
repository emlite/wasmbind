#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "RTCRtpCodec.hpp"
#include "RTCRtpHeaderExtensionCapability.hpp"

namespace webbind {

/// Dictionary type RTCRtpCapabilities
class RTCRtpCapabilities : public emlite::Val {
  explicit RTCRtpCapabilities(Handle h) noexcept;
public:
    static RTCRtpCapabilities take_ownership(Handle h) noexcept;
    explicit RTCRtpCapabilities(const emlite::Val &val) noexcept;
    RTCRtpCapabilities() noexcept;
    [[nodiscard]] RTCRtpCapabilities clone() const noexcept;
    /// Getter of the `codecs` attribute.
    [[nodiscard]] jsbind::TypedArray<RTCRtpCodec> codecs() const;
    /// Setter of the `codecs` attribute.
    void codecs(const jsbind::TypedArray<RTCRtpCodec>& value);
    /// Getter of the `headerExtensions` attribute.
    [[nodiscard]] jsbind::TypedArray<RTCRtpHeaderExtensionCapability> headerExtensions() const;
    /// Setter of the `headerExtensions` attribute.
    void headerExtensions(const jsbind::TypedArray<RTCRtpHeaderExtensionCapability>& value);
};

} // namespace webbind