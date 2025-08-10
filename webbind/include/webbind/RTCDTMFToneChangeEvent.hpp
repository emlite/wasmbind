#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "Event.hpp"
#include "RTCDTMFToneChangeEventInit.hpp"

namespace webbind {

/// Interface RTCDTMFToneChangeEvent
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
    RTCDTMFToneChangeEvent(const jsbind::String& type, const RTCDTMFToneChangeEventInit& eventInitDict);
    /// [`RTCDTMFToneChangeEvent.tone`](https://developer.mozilla.org/en-US/docs/Web/API/RTCDTMFToneChangeEvent/tone)
    /// [`RTCDTMFToneChangeEvent.tone`](https://developer.mozilla.org/en-US/docs/Web/API/RTCDTMFToneChangeEvent/tone)
    [[nodiscard]] jsbind::String tone() const;
};

} // namespace webbind