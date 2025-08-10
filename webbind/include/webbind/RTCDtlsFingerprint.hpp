#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type RTCDtlsFingerprint
/// [`RTCDtlsFingerprint`](https://developer.mozilla.org/en-US/docs/Web/API/RTCDtlsFingerprint)
class RTCDtlsFingerprint : public emlite::Val {
  explicit RTCDtlsFingerprint(Handle h) noexcept;
public:
    static RTCDtlsFingerprint take_ownership(Handle h) noexcept;
    explicit RTCDtlsFingerprint(const emlite::Val &val) noexcept;
    RTCDtlsFingerprint() noexcept;
    [[nodiscard]] RTCDtlsFingerprint clone() const noexcept;
    [[nodiscard]] jsbind::String algorithm() const;
    void algorithm(const jsbind::String& value);
    [[nodiscard]] jsbind::String value() const;
    void value(const jsbind::String& value);
};

} // namespace webbind