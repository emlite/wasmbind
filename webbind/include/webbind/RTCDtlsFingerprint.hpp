#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type RTCDtlsFingerprint
class RTCDtlsFingerprint : public emlite::Val {
  explicit RTCDtlsFingerprint(Handle h) noexcept;
public:
    static RTCDtlsFingerprint take_ownership(Handle h) noexcept;
    explicit RTCDtlsFingerprint(const emlite::Val &val) noexcept;
    RTCDtlsFingerprint() noexcept;
    [[nodiscard]] RTCDtlsFingerprint clone() const noexcept;
    /// Getter of the `algorithm` attribute.
    [[nodiscard]] jsbind::String algorithm() const;
    /// Setter of the `algorithm` attribute.
    void algorithm(const jsbind::String& value);
    /// Getter of the `value` attribute.
    [[nodiscard]] jsbind::String value() const;
    /// Setter of the `value` attribute.
    void value(const jsbind::String& value);
};

} // namespace webbind