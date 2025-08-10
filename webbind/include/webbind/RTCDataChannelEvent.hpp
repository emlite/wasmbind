#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "Event.hpp"
#include "RTCDataChannelEventInit.hpp"

namespace webbind {

class RTCDataChannel;

/// Interface RTCDataChannelEvent
/// [`RTCDataChannelEvent`](https://developer.mozilla.org/en-US/docs/Web/API/RTCDataChannelEvent)
class RTCDataChannelEvent : public Event {
    explicit RTCDataChannelEvent(Handle h) noexcept;
public:
    explicit RTCDataChannelEvent(const emlite::Val &val) noexcept;
    static RTCDataChannelEvent take_ownership(Handle h) noexcept;
    [[nodiscard]] RTCDataChannelEvent clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new RTCDataChannelEvent(..)` constructor, creating a new RTCDataChannelEvent instance
    RTCDataChannelEvent(const jsbind::String& type, const RTCDataChannelEventInit& eventInitDict);
    /// Getter of the `channel` attribute.
    /// [`RTCDataChannelEvent.channel`](https://developer.mozilla.org/en-US/docs/Web/API/RTCDataChannelEvent/channel)
    [[nodiscard]] RTCDataChannel channel() const;
};

} // namespace webbind