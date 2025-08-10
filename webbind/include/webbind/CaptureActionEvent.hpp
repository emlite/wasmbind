#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "Event.hpp"
#include "enums.hpp"

namespace webbind {

class CaptureActionEventInit;

/// Interface CaptureActionEvent
/// [`CaptureActionEvent`](https://developer.mozilla.org/en-US/docs/Web/API/CaptureActionEvent)
class CaptureActionEvent : public Event {
    explicit CaptureActionEvent(Handle h) noexcept;
public:
    explicit CaptureActionEvent(const emlite::Val &val) noexcept;
    static CaptureActionEvent take_ownership(Handle h) noexcept;
    [[nodiscard]] CaptureActionEvent clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new CaptureActionEvent(..)` constructor, creating a new CaptureActionEvent instance
    CaptureActionEvent();
    /// The `new CaptureActionEvent(..)` constructor, creating a new CaptureActionEvent instance
    CaptureActionEvent(const CaptureActionEventInit& init);
    /// [`CaptureActionEvent.action`](https://developer.mozilla.org/en-US/docs/Web/API/CaptureActionEvent/action)
    /// [`CaptureActionEvent.action`](https://developer.mozilla.org/en-US/docs/Web/API/CaptureActionEvent/action)
    [[nodiscard]] CaptureAction action() const;
};

} // namespace webbind