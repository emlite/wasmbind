#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "Event.hpp"
#include "PageRevealEventInit.hpp"

namespace webbind {

class ViewTransition;

/// Interface PageRevealEvent
/// [`PageRevealEvent`](https://developer.mozilla.org/en-US/docs/Web/API/PageRevealEvent)
class PageRevealEvent : public Event {
    explicit PageRevealEvent(Handle h) noexcept;
public:
    explicit PageRevealEvent(const emlite::Val &val) noexcept;
    static PageRevealEvent take_ownership(Handle h) noexcept;
    [[nodiscard]] PageRevealEvent clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new PageRevealEvent(..)` constructor, creating a new PageRevealEvent instance
    PageRevealEvent(const jsbind::String& type);
    /// The `new PageRevealEvent(..)` constructor, creating a new PageRevealEvent instance
    PageRevealEvent(const jsbind::String& type, const PageRevealEventInit& eventInitDict);
    /// [`PageRevealEvent.viewTransition`](https://developer.mozilla.org/en-US/docs/Web/API/PageRevealEvent/viewTransition)
    /// [`PageRevealEvent.viewTransition`](https://developer.mozilla.org/en-US/docs/Web/API/PageRevealEvent/viewTransition)
    [[nodiscard]] ViewTransition viewTransition() const;
};

} // namespace webbind