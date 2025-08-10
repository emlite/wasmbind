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
    /// Getter of the `address` attribute.
    /// [`RTCPeerConnectionIceErrorEvent.address`](https://developer.mozilla.org/en-US/docs/Web/API/RTCPeerConnectionIceErrorEvent/address)
    [[nodiscard]] jsbind::String address() const;
    /// Getter of the `port` attribute.
    /// [`RTCPeerConnectionIceErrorEvent.port`](https://developer.mozilla.org/en-US/docs/Web/API/RTCPeerConnectionIceErrorEvent/port)
    [[nodiscard]] unsigned short port() const;
    /// Getter of the `url` attribute.
    /// [`RTCPeerConnectionIceErrorEvent.url`](https://developer.mozilla.org/en-US/docs/Web/API/RTCPeerConnectionIceErrorEvent/url)
    [[nodiscard]] jsbind::String url() const;
    /// Getter of the `errorCode` attribute.
    /// [`RTCPeerConnectionIceErrorEvent.errorCode`](https://developer.mozilla.org/en-US/docs/Web/API/RTCPeerConnectionIceErrorEvent/errorCode)
    [[nodiscard]] unsigned short errorCode() const;
    /// Getter of the `errorText` attribute.
    /// [`RTCPeerConnectionIceErrorEvent.errorText`](https://developer.mozilla.org/en-US/docs/Web/API/RTCPeerConnectionIceErrorEvent/errorText)
    [[nodiscard]] jsbind::String errorText() const;
};

} // namespace webbind