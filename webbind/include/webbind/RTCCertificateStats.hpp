#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "RTCStats.hpp"

namespace webbind {

/// Dictionary type RTCCertificateStats
/// [`RTCCertificateStats`](https://developer.mozilla.org/en-US/docs/Web/API/RTCCertificateStats)
class RTCCertificateStats : public RTCStats {
  explicit RTCCertificateStats(Handle h) noexcept;
public:
    static RTCCertificateStats take_ownership(Handle h) noexcept;
    explicit RTCCertificateStats(const emlite::Val &val) noexcept;
    RTCCertificateStats() noexcept;
    [[nodiscard]] RTCCertificateStats clone() const noexcept;
    [[nodiscard]] jsbind::String fingerprint() const;
    void fingerprint(const jsbind::String& value);
    [[nodiscard]] jsbind::String fingerprintAlgorithm() const;
    void fingerprintAlgorithm(const jsbind::String& value);
    [[nodiscard]] jsbind::String base64Certificate() const;
    void base64Certificate(const jsbind::String& value);
    [[nodiscard]] jsbind::String issuerCertificateId() const;
    void issuerCertificateId(const jsbind::String& value);
};

} // namespace webbind