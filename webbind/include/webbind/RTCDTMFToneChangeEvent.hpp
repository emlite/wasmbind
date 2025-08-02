#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "Event.hpp"
#include "enums.hpp"


/// The RTCDTMFToneChangeEvent class.
/// [`RTCDTMFToneChangeEvent`](https://developer.mozilla.org/en-US/docs/Web/API/RTCDTMFToneChangeEvent)
class RTCDTMFToneChangeEvent : public Event {
    explicit RTCDTMFToneChangeEvent(Handle h) noexcept;

public:
    explicit RTCDTMFToneChangeEvent(const emlite::Val &val) noexcept;
    static RTCDTMFToneChangeEvent take_ownership(Handle h) noexcept;

    [[nodiscard]] RTCDTMFToneChangeEvent clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new RTCDTMFToneChangeEvent(..)` constructor, creating a new RTCDTMFToneChangeEvent instance
    RTCDTMFToneChangeEvent(const jsbind::String& type);
    /// The `new RTCDTMFToneChangeEvent(..)` constructor, creating a new RTCDTMFToneChangeEvent instance
    RTCDTMFToneChangeEvent(const jsbind::String& type, const jsbind::Any& eventInitDict);
    /// Getter of the `tone` attribute.
    /// [`RTCDTMFToneChangeEvent.tone`](https://developer.mozilla.org/en-US/docs/Web/API/RTCDTMFToneChangeEvent/tone)
    [[nodiscard]] jsbind::String tone() const;
};

