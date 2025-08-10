#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "Event.hpp"

namespace webbind {

class PageTransitionEventInit;

/// Interface PageTransitionEvent
/// [`PageTransitionEvent`](https://developer.mozilla.org/en-US/docs/Web/API/PageTransitionEvent)
class PageTransitionEvent : public Event {
    explicit PageTransitionEvent(Handle h) noexcept;
public:
    explicit PageTransitionEvent(const emlite::Val &val) noexcept;
    static PageTransitionEvent take_ownership(Handle h) noexcept;
    [[nodiscard]] PageTransitionEvent clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new PageTransitionEvent(..)` constructor, creating a new PageTransitionEvent instance
    PageTransitionEvent(const jsbind::String& type);
    /// The `new PageTransitionEvent(..)` constructor, creating a new PageTransitionEvent instance
    PageTransitionEvent(const jsbind::String& type, const PageTransitionEventInit& eventInitDict);
    /// [`PageTransitionEvent.persisted`](https://developer.mozilla.org/en-US/docs/Web/API/PageTransitionEvent/persisted)
    /// [`PageTransitionEvent.persisted`](https://developer.mozilla.org/en-US/docs/Web/API/PageTransitionEvent/persisted)
    [[nodiscard]] bool persisted() const;
};

} // namespace webbind