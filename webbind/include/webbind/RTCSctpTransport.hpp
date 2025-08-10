#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventTarget.hpp"
#include "enums.hpp"

namespace webbind {

class RTCDtlsTransport;

/// Interface RTCSctpTransport
/// [`RTCSctpTransport`](https://developer.mozilla.org/en-US/docs/Web/API/RTCSctpTransport)
class RTCSctpTransport : public EventTarget {
    explicit RTCSctpTransport(Handle h) noexcept;
public:
    explicit RTCSctpTransport(const emlite::Val &val) noexcept;
    static RTCSctpTransport take_ownership(Handle h) noexcept;
    [[nodiscard]] RTCSctpTransport clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// [`RTCSctpTransport.transport`](https://developer.mozilla.org/en-US/docs/Web/API/RTCSctpTransport/transport)
    /// [`RTCSctpTransport.transport`](https://developer.mozilla.org/en-US/docs/Web/API/RTCSctpTransport/transport)
    [[nodiscard]] RTCDtlsTransport transport() const;
    /// [`RTCSctpTransport.state`](https://developer.mozilla.org/en-US/docs/Web/API/RTCSctpTransport/state)
    /// [`RTCSctpTransport.state`](https://developer.mozilla.org/en-US/docs/Web/API/RTCSctpTransport/state)
    [[nodiscard]] RTCSctpTransportState state() const;
    /// [`RTCSctpTransport.maxMessageSize`](https://developer.mozilla.org/en-US/docs/Web/API/RTCSctpTransport/maxMessageSize)
    /// [`RTCSctpTransport.maxMessageSize`](https://developer.mozilla.org/en-US/docs/Web/API/RTCSctpTransport/maxMessageSize)
    [[nodiscard]] double maxMessageSize() const;
    /// [`RTCSctpTransport.maxChannels`](https://developer.mozilla.org/en-US/docs/Web/API/RTCSctpTransport/maxChannels)
    /// [`RTCSctpTransport.maxChannels`](https://developer.mozilla.org/en-US/docs/Web/API/RTCSctpTransport/maxChannels)
    [[nodiscard]] unsigned short maxChannels() const;
    /// [`RTCSctpTransport.onstatechange`](https://developer.mozilla.org/en-US/docs/Web/API/RTCSctpTransport/onstatechange)
    /// [`RTCSctpTransport.onstatechange`](https://developer.mozilla.org/en-US/docs/Web/API/RTCSctpTransport/onstatechange)
    [[nodiscard]] jsbind::Any onstatechange() const;
    /// Setter of the `onstatechange` attribute.
    /// [`RTCSctpTransport.onstatechange`](https://developer.mozilla.org/en-US/docs/Web/API/RTCSctpTransport/onstatechange)
    void onstatechange(const jsbind::Any& value);
};

} // namespace webbind