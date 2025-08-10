#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "Event.hpp"

namespace webbind {

/// Interface BeforeUnloadEvent
/// [`BeforeUnloadEvent`](https://developer.mozilla.org/en-US/docs/Web/API/BeforeUnloadEvent)
class BeforeUnloadEvent : public Event {
    explicit BeforeUnloadEvent(Handle h) noexcept;
public:
    explicit BeforeUnloadEvent(const emlite::Val &val) noexcept;
    static BeforeUnloadEvent take_ownership(Handle h) noexcept;
    [[nodiscard]] BeforeUnloadEvent clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// [`BeforeUnloadEvent.returnValue`](https://developer.mozilla.org/en-US/docs/Web/API/BeforeUnloadEvent/returnValue)
    /// [`BeforeUnloadEvent.returnValue`](https://developer.mozilla.org/en-US/docs/Web/API/BeforeUnloadEvent/returnValue)
    [[nodiscard]] jsbind::String returnValue() const;
    /// Setter of the `returnValue` attribute.
    /// [`BeforeUnloadEvent.returnValue`](https://developer.mozilla.org/en-US/docs/Web/API/BeforeUnloadEvent/returnValue)
    void returnValue(const jsbind::String& value);
};

} // namespace webbind