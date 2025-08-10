#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "Event.hpp"
#include "RTCPeerConnectionIceErrorEventInit.hpp"

namespace webbind {

/// Interface RTCPeerConnectionIceErrorEvent
/// [`RTCPeerConnectionIceErrorEvent`](https://developer.mozilla.org/en-US/docs/Web/API/RTCPeerConnectionIceErrorEvent)
class RTCPeerConnectionIceErrorEvent : public Event {
    explicit RTCPeerConnectionIceErrorEvent(Handle h) noexcept;
public:
    explicit RTCPeerConnectionIceErrorEvent(const emlite::Val &val) noexcept;
    static RTCPeerConnectionIceErrorEvent take_ownership(Handle h) noexcept;
    [[nodiscard]] RTCPeerConnectionIceErrorEvent clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new RTCPeerConnectionIceErrorEvent(..)` constructor, creating a new RTCPeerConnectionIceErrorEvent instance
    RTCPeerConnectionIceErrorEvent(const jsbind::String& type, const RTCPeerConnectionIceErrorEventInit& eventInitDict);
    /// [`RTCPeerConnectionIceErrorEvent.address`](https://developer.mozilla.org/en-US/docs/Web/API/RTCPeerConnectionIceErrorEvent/address)
    /// [`RTCPeerConnectionIceErrorEvent.address`](https://developer.mozilla.org/en-US/docs/Web/API/RTCPeerConnectionIceErrorEvent/address)
    [[nodiscard]] jsbind::String address() const;
    /// [`RTCPeerConnectionIceErrorEvent.port`](https://developer.mozilla.org/en-US/docs/Web/API/RTCPeerConnectionIceErrorEvent/port)
    /// [`RTCPeerConnectionIceErrorEvent.port`](https://developer.mozilla.org/en-US/docs/Web/API/RTCPeerConnectionIceErrorEvent/port)
    [[nodiscard]] unsigned short port() const;
    /// [`RTCPeerConnectionIceErrorEvent.url`](https://developer.mozilla.org/en-US/docs/Web/API/RTCPeerConnectionIceErrorEvent/url)
    /// [`RTCPeerConnectionIceErrorEvent.url`](https://developer.mozilla.org/en-US/docs/Web/API/RTCPeerConnectionIceErrorEvent/url)
    [[nodiscard]] jsbind::String url() const;
    /// [`RTCPeerConnectionIceErrorEvent.errorCode`](https://developer.mozilla.org/en-US/docs/Web/API/RTCPeerConnectionIceErrorEvent/errorCode)
    /// [`RTCPeerConnectionIceErrorEvent.errorCode`](https://developer.mozilla.org/en-US/docs/Web/API/RTCPeerConnectionIceErrorEvent/errorCode)
    [[nodiscard]] unsigned short errorCode() const;
    /// [`RTCPeerConnectionIceErrorEvent.errorText`](https://developer.mozilla.org/en-US/docs/Web/API/RTCPeerConnectionIceErrorEvent/errorText)
    /// [`RTCPeerConnectionIceErrorEvent.errorText`](https://developer.mozilla.org/en-US/docs/Web/API/RTCPeerConnectionIceErrorEvent/errorText)
    [[nodiscard]] jsbind::String errorText() const;
};

} // namespace webbind