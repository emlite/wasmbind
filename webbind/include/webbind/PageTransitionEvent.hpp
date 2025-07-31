#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "Event.hpp"
#include "enums.hpp"


/// The PageTransitionEvent class.
/// [`PageTransitionEvent`](https://developer.mozilla.org/en-US/docs/Web/API/PageTransitionEvent)
class PageTransitionEvent : public Event {
    explicit PageTransitionEvent(Handle h) noexcept;

public:
    explicit PageTransitionEvent(const emlite::Val &val) noexcept;
    static PageTransitionEvent take_ownership(Handle h) noexcept;

    [[nodiscard]] PageTransitionEvent clone() const noexcept;
    /// The `new PageTransitionEvent(..)` constructor, creating a new PageTransitionEvent instance
    PageTransitionEvent(const jsbind::String& type);
    /// The `new PageTransitionEvent(..)` constructor, creating a new PageTransitionEvent instance
    PageTransitionEvent(const jsbind::String& type, const jsbind::Any& eventInitDict);
    /// Getter of the `persisted` attribute.
    /// [`PageTransitionEvent.persisted`](https://developer.mozilla.org/en-US/docs/Web/API/PageTransitionEvent/persisted)
    [[nodiscard]] bool persisted() const;
};

