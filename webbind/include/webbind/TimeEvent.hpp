#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "Event.hpp"

namespace webbind {

class Window;

/// Interface TimeEvent
/// [`TimeEvent`](https://developer.mozilla.org/en-US/docs/Web/API/TimeEvent)
class TimeEvent : public Event {
    explicit TimeEvent(Handle h) noexcept;
public:
    explicit TimeEvent(const emlite::Val &val) noexcept;
    static TimeEvent take_ownership(Handle h) noexcept;
    [[nodiscard]] TimeEvent clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// Getter of the `view` attribute.
    /// [`TimeEvent.view`](https://developer.mozilla.org/en-US/docs/Web/API/TimeEvent/view)
    [[nodiscard]] jsbind::Any view() const;
    /// Getter of the `detail` attribute.
    /// [`TimeEvent.detail`](https://developer.mozilla.org/en-US/docs/Web/API/TimeEvent/detail)
    [[nodiscard]] long detail() const;
    /// The initTimeEvent method.
    /// [`TimeEvent.initTimeEvent`](https://developer.mozilla.org/en-US/docs/Web/API/TimeEvent/initTimeEvent)
    jsbind::Undefined initTimeEvent(const jsbind::String& typeArg, const Window& viewArg, long detailArg);
};

} // namespace webbind