#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventTarget.hpp"
#include "enums.hpp"

namespace webbind {

class RTCIceTransport;

/// Interface RTCDtlsTransport
/// [`RTCDtlsTransport`](https://developer.mozilla.org/en-US/docs/Web/API/RTCDtlsTransport)
class RTCDtlsTransport : public EventTarget {
    explicit RTCDtlsTransport(Handle h) noexcept;
public:
    explicit RTCDtlsTransport(const emlite::Val &val) noexcept;
    static RTCDtlsTransport take_ownership(Handle h) noexcept;
    [[nodiscard]] RTCDtlsTransport clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// [`RTCDtlsTransport.iceTransport`](https://developer.mozilla.org/en-US/docs/Web/API/RTCDtlsTransport/iceTransport)
    /// [`RTCDtlsTransport.iceTransport`](https://developer.mozilla.org/en-US/docs/Web/API/RTCDtlsTransport/iceTransport)
    [[nodiscard]] RTCIceTransport iceTransport() const;
    /// [`RTCDtlsTransport.state`](https://developer.mozilla.org/en-US/docs/Web/API/RTCDtlsTransport/state)
    /// [`RTCDtlsTransport.state`](https://developer.mozilla.org/en-US/docs/Web/API/RTCDtlsTransport/state)
    [[nodiscard]] RTCDtlsTransportState state() const;
    /// The getRemoteCertificates method.
    /// [`RTCDtlsTransport.getRemoteCertificates`](https://developer.mozilla.org/en-US/docs/Web/API/RTCDtlsTransport/getRemoteCertificates)
    jsbind::TypedArray<jsbind::ArrayBuffer> getRemoteCertificates();
    /// [`RTCDtlsTransport.onstatechange`](https://developer.mozilla.org/en-US/docs/Web/API/RTCDtlsTransport/onstatechange)
    /// [`RTCDtlsTransport.onstatechange`](https://developer.mozilla.org/en-US/docs/Web/API/RTCDtlsTransport/onstatechange)
    [[nodiscard]] jsbind::Any onstatechange() const;
    /// Setter of the `onstatechange` attribute.
    /// [`RTCDtlsTransport.onstatechange`](https://developer.mozilla.org/en-US/docs/Web/API/RTCDtlsTransport/onstatechange)
    void onstatechange(const jsbind::Any& value);
    /// [`RTCDtlsTransport.onerror`](https://developer.mozilla.org/en-US/docs/Web/API/RTCDtlsTransport/onerror)
    /// [`RTCDtlsTransport.onerror`](https://developer.mozilla.org/en-US/docs/Web/API/RTCDtlsTransport/onerror)
    [[nodiscard]] jsbind::Any onerror() const;
    /// Setter of the `onerror` attribute.
    /// [`RTCDtlsTransport.onerror`](https://developer.mozilla.org/en-US/docs/Web/API/RTCDtlsTransport/onerror)
    void onerror(const jsbind::Any& value);
};

} // namespace webbind