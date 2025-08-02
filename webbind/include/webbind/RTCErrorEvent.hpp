#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "Event.hpp"
#include "enums.hpp"

class RTCError;


/// The RTCErrorEvent class.
/// [`RTCErrorEvent`](https://developer.mozilla.org/en-US/docs/Web/API/RTCErrorEvent)
class RTCErrorEvent : public Event {
    explicit RTCErrorEvent(Handle h) noexcept;

public:
    explicit RTCErrorEvent(const emlite::Val &val) noexcept;
    static RTCErrorEvent take_ownership(Handle h) noexcept;

    [[nodiscard]] RTCErrorEvent clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new RTCErrorEvent(..)` constructor, creating a new RTCErrorEvent instance
    RTCErrorEvent(const jsbind::String& type, const jsbind::Any& eventInitDict);
    /// Getter of the `error` attribute.
    /// [`RTCErrorEvent.error`](https://developer.mozilla.org/en-US/docs/Web/API/RTCErrorEvent/error)
    [[nodiscard]] RTCError error() const;
};

