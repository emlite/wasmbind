#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "Event.hpp"
#include "RTCErrorEventInit.hpp"

namespace webbind {

class RTCError;

/// Interface RTCErrorEvent
/// [`RTCErrorEvent`](https://developer.mozilla.org/en-US/docs/Web/API/RTCErrorEvent)
class RTCErrorEvent : public Event {
    explicit RTCErrorEvent(Handle h) noexcept;
public:
    explicit RTCErrorEvent(const emlite::Val &val) noexcept;
    static RTCErrorEvent take_ownership(Handle h) noexcept;
    [[nodiscard]] RTCErrorEvent clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new RTCErrorEvent(..)` constructor, creating a new RTCErrorEvent instance
    RTCErrorEvent(const jsbind::String& type, const RTCErrorEventInit& eventInitDict);
    /// [`RTCErrorEvent.error`](https://developer.mozilla.org/en-US/docs/Web/API/RTCErrorEvent/error)
    /// [`RTCErrorEvent.error`](https://developer.mozilla.org/en-US/docs/Web/API/RTCErrorEvent/error)
    [[nodiscard]] RTCError error() const;
};

} // namespace webbind