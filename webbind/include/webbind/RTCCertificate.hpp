#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class RTCDtlsFingerprint;

/// Interface RTCCertificate
/// [`RTCCertificate`](https://developer.mozilla.org/en-US/docs/Web/API/RTCCertificate)
class RTCCertificate : public emlite::Val {
    explicit RTCCertificate(Handle h) noexcept;
public:
    explicit RTCCertificate(const emlite::Val &val) noexcept;
    static RTCCertificate take_ownership(Handle h) noexcept;
    [[nodiscard]] RTCCertificate clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// [`RTCCertificate.expires`](https://developer.mozilla.org/en-US/docs/Web/API/RTCCertificate/expires)
    /// [`RTCCertificate.expires`](https://developer.mozilla.org/en-US/docs/Web/API/RTCCertificate/expires)
    [[nodiscard]] jsbind::Any expires() const;
    /// The getFingerprints method.
    /// [`RTCCertificate.getFingerprints`](https://developer.mozilla.org/en-US/docs/Web/API/RTCCertificate/getFingerprints)
    jsbind::TypedArray<RTCDtlsFingerprint> getFingerprints();
};

} // namespace webbind