#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "Event.hpp"
#include "enums.hpp"


/// The ContentVisibilityAutoStateChangeEvent class.
/// [`ContentVisibilityAutoStateChangeEvent`](https://developer.mozilla.org/en-US/docs/Web/API/ContentVisibilityAutoStateChangeEvent)
class ContentVisibilityAutoStateChangeEvent : public Event {
    explicit ContentVisibilityAutoStateChangeEvent(Handle h) noexcept;

public:
    explicit ContentVisibilityAutoStateChangeEvent(const emlite::Val &val) noexcept;
    static ContentVisibilityAutoStateChangeEvent take_ownership(Handle h) noexcept;

    [[nodiscard]] ContentVisibilityAutoStateChangeEvent clone() const noexcept;
    /// The `new ContentVisibilityAutoStateChangeEvent(..)` constructor, creating a new ContentVisibilityAutoStateChangeEvent instance
    ContentVisibilityAutoStateChangeEvent(const jsbind::String& type);
    /// The `new ContentVisibilityAutoStateChangeEvent(..)` constructor, creating a new ContentVisibilityAutoStateChangeEvent instance
    ContentVisibilityAutoStateChangeEvent(const jsbind::String& type, const jsbind::Any& eventInitDict);
    /// Getter of the `skipped` attribute.
    /// [`ContentVisibilityAutoStateChangeEvent.skipped`](https://developer.mozilla.org/en-US/docs/Web/API/ContentVisibilityAutoStateChangeEvent/skipped)
    [[nodiscard]] bool skipped() const;
};

