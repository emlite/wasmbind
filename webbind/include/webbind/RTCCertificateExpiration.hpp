#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type RTCCertificateExpiration
/// [`RTCCertificateExpiration`](https://developer.mozilla.org/en-US/docs/Web/API/RTCCertificateExpiration)
class RTCCertificateExpiration : public emlite::Val {
  explicit RTCCertificateExpiration(Handle h) noexcept;
public:
    static RTCCertificateExpiration take_ownership(Handle h) noexcept;
    explicit RTCCertificateExpiration(const emlite::Val &val) noexcept;
    RTCCertificateExpiration() noexcept;
    [[nodiscard]] RTCCertificateExpiration clone() const noexcept;
    [[nodiscard]] long long expires() const;
    void expires(long long value);
};

} // namespace webbind