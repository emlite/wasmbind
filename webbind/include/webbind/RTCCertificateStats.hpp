#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "RTCStats.hpp"

namespace webbind {

/// Dictionary type RTCCertificateStats
class RTCCertificateStats : public RTCStats {
  explicit RTCCertificateStats(Handle h) noexcept;
public:
    static RTCCertificateStats take_ownership(Handle h) noexcept;
    explicit RTCCertificateStats(const emlite::Val &val) noexcept;
    RTCCertificateStats() noexcept;
    [[nodiscard]] RTCCertificateStats clone() const noexcept;
    /// Getter of the `fingerprint` attribute.
    [[nodiscard]] jsbind::String fingerprint() const;
    /// Setter of the `fingerprint` attribute.
    void fingerprint(const jsbind::String& value);
    /// Getter of the `fingerprintAlgorithm` attribute.
    [[nodiscard]] jsbind::String fingerprintAlgorithm() const;
    /// Setter of the `fingerprintAlgorithm` attribute.
    void fingerprintAlgorithm(const jsbind::String& value);
    /// Getter of the `base64Certificate` attribute.
    [[nodiscard]] jsbind::String base64Certificate() const;
    /// Setter of the `base64Certificate` attribute.
    void base64Certificate(const jsbind::String& value);
    /// Getter of the `issuerCertificateId` attribute.
    [[nodiscard]] jsbind::String issuerCertificateId() const;
    /// Setter of the `issuerCertificateId` attribute.
    void issuerCertificateId(const jsbind::String& value);
};

} // namespace webbind