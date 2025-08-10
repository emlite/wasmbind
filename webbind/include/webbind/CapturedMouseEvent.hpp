#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "Event.hpp"
#include "CapturedMouseEventInit.hpp"

namespace webbind {

/// Interface CapturedMouseEvent
/// [`CapturedMouseEvent`](https://developer.mozilla.org/en-US/docs/Web/API/CapturedMouseEvent)
class CapturedMouseEvent : public Event {
    explicit CapturedMouseEvent(Handle h) noexcept;
public:
    explicit CapturedMouseEvent(const emlite::Val &val) noexcept;
    static CapturedMouseEvent take_ownership(Handle h) noexcept;
    [[nodiscard]] CapturedMouseEvent clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new CapturedMouseEvent(..)` constructor, creating a new CapturedMouseEvent instance
    CapturedMouseEvent(const jsbind::String& type);
    /// The `new CapturedMouseEvent(..)` constructor, creating a new CapturedMouseEvent instance
    CapturedMouseEvent(const jsbind::String& type, const CapturedMouseEventInit& eventInitDict);
    /// [`CapturedMouseEvent.surfaceX`](https://developer.mozilla.org/en-US/docs/Web/API/CapturedMouseEvent/surfaceX)
    /// [`CapturedMouseEvent.surfaceX`](https://developer.mozilla.org/en-US/docs/Web/API/CapturedMouseEvent/surfaceX)
    [[nodiscard]] long surfaceX() const;
    /// [`CapturedMouseEvent.surfaceY`](https://developer.mozilla.org/en-US/docs/Web/API/CapturedMouseEvent/surfaceY)
    /// [`CapturedMouseEvent.surfaceY`](https://developer.mozilla.org/en-US/docs/Web/API/CapturedMouseEvent/surfaceY)
    [[nodiscard]] long surfaceY() const;
};

} // namespace webbind