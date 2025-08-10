#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "RTCRtpCodec.hpp"
#include "RTCRtpHeaderExtensionCapability.hpp"

namespace webbind {

/// Dictionary type RTCRtpCapabilities
/// [`RTCRtpCapabilities`](https://developer.mozilla.org/en-US/docs/Web/API/RTCRtpCapabilities)
class RTCRtpCapabilities : public emlite::Val {
  explicit RTCRtpCapabilities(Handle h) noexcept;
public:
    static RTCRtpCapabilities take_ownership(Handle h) noexcept;
    explicit RTCRtpCapabilities(const emlite::Val &val) noexcept;
    RTCRtpCapabilities() noexcept;
    [[nodiscard]] RTCRtpCapabilities clone() const noexcept;
    [[nodiscard]] jsbind::TypedArray<RTCRtpCodec> codecs() const;
    void codecs(const jsbind::TypedArray<RTCRtpCodec>& value);
    [[nodiscard]] jsbind::TypedArray<RTCRtpHeaderExtensionCapability> headerExtensions() const;
    void headerExtensions(const jsbind::TypedArray<RTCRtpHeaderExtensionCapability>& value);
};

} // namespace webbind