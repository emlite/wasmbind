#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class RTCDtlsFingerprint;


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

/// The RTCCertificate class.
/// [`RTCCertificate`](https://developer.mozilla.org/en-US/docs/Web/API/RTCCertificate)
class RTCCertificate : public emlite::Val {
    explicit RTCCertificate(Handle h) noexcept;

public:
    explicit RTCCertificate(const emlite::Val &val) noexcept;
    static RTCCertificate take_ownership(Handle h) noexcept;

    [[nodiscard]] RTCCertificate clone() const noexcept;
    /// Getter of the `expires` attribute.
    /// [`RTCCertificate.expires`](https://developer.mozilla.org/en-US/docs/Web/API/RTCCertificate/expires)
    [[nodiscard]] jsbind::Any expires() const;
    /// The getFingerprints method.
    /// [`RTCCertificate.getFingerprints`](https://developer.mozilla.org/en-US/docs/Web/API/RTCCertificate/getFingerprints)
    jsbind::TypedArray<RTCDtlsFingerprint> getFingerprints();
};

