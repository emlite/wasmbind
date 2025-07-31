#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "Event.hpp"
#include "enums.hpp"

class RTCDataChannel;


/// The RTCDataChannelEvent class.
/// [`RTCDataChannelEvent`](https://developer.mozilla.org/en-US/docs/Web/API/RTCDataChannelEvent)
class RTCDataChannelEvent : public Event {
    explicit RTCDataChannelEvent(Handle h) noexcept;

public:
    explicit RTCDataChannelEvent(const emlite::Val &val) noexcept;
    static RTCDataChannelEvent take_ownership(Handle h) noexcept;

    [[nodiscard]] RTCDataChannelEvent clone() const noexcept;
    /// The `new RTCDataChannelEvent(..)` constructor, creating a new RTCDataChannelEvent instance
    RTCDataChannelEvent(const jsbind::String& type, const jsbind::Any& eventInitDict);
    /// Getter of the `channel` attribute.
    /// [`RTCDataChannelEvent.channel`](https://developer.mozilla.org/en-US/docs/Web/API/RTCDataChannelEvent/channel)
    [[nodiscard]] RTCDataChannel channel() const;
};

