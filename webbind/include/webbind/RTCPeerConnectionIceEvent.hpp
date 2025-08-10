#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "Event.hpp"
#include "RTCPeerConnectionIceEventInit.hpp"

namespace webbind {

class RTCIceCandidate;

/// Interface RTCPeerConnectionIceEvent
/// [`RTCPeerConnectionIceEvent`](https://developer.mozilla.org/en-US/docs/Web/API/RTCPeerConnectionIceEvent)
class RTCPeerConnectionIceEvent : public Event {
    explicit RTCPeerConnectionIceEvent(Handle h) noexcept;
public:
    explicit RTCPeerConnectionIceEvent(const emlite::Val &val) noexcept;
    static RTCPeerConnectionIceEvent take_ownership(Handle h) noexcept;
    [[nodiscard]] RTCPeerConnectionIceEvent clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new RTCPeerConnectionIceEvent(..)` constructor, creating a new RTCPeerConnectionIceEvent instance
    RTCPeerConnectionIceEvent(const jsbind::String& type);
    /// The `new RTCPeerConnectionIceEvent(..)` constructor, creating a new RTCPeerConnectionIceEvent instance
    RTCPeerConnectionIceEvent(const jsbind::String& type, const RTCPeerConnectionIceEventInit& eventInitDict);
    /// Getter of the `candidate` attribute.
    /// [`RTCPeerConnectionIceEvent.candidate`](https://developer.mozilla.org/en-US/docs/Web/API/RTCPeerConnectionIceEvent/candidate)
    [[nodiscard]] RTCIceCandidate candidate() const;
    /// Getter of the `url` attribute.
    /// [`RTCPeerConnectionIceEvent.url`](https://developer.mozilla.org/en-US/docs/Web/API/RTCPeerConnectionIceEvent/url)
    [[nodiscard]] jsbind::String url() const;
};

} // namespace webbind