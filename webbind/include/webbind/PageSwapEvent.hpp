#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "Event.hpp"
#include "PageSwapEventInit.hpp"

namespace webbind {

class NavigationActivation;
class ViewTransition;

/// Interface PageSwapEvent
/// [`PageSwapEvent`](https://developer.mozilla.org/en-US/docs/Web/API/PageSwapEvent)
class PageSwapEvent : public Event {
    explicit PageSwapEvent(Handle h) noexcept;
public:
    explicit PageSwapEvent(const emlite::Val &val) noexcept;
    static PageSwapEvent take_ownership(Handle h) noexcept;
    [[nodiscard]] PageSwapEvent clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new PageSwapEvent(..)` constructor, creating a new PageSwapEvent instance
    PageSwapEvent(const jsbind::String& type);
    /// The `new PageSwapEvent(..)` constructor, creating a new PageSwapEvent instance
    PageSwapEvent(const jsbind::String& type, const PageSwapEventInit& eventInitDict);
    /// [`PageSwapEvent.activation`](https://developer.mozilla.org/en-US/docs/Web/API/PageSwapEvent/activation)
    /// [`PageSwapEvent.activation`](https://developer.mozilla.org/en-US/docs/Web/API/PageSwapEvent/activation)
    [[nodiscard]] NavigationActivation activation() const;
    /// [`PageSwapEvent.viewTransition`](https://developer.mozilla.org/en-US/docs/Web/API/PageSwapEvent/viewTransition)
    /// [`PageSwapEvent.viewTransition`](https://developer.mozilla.org/en-US/docs/Web/API/PageSwapEvent/viewTransition)
    [[nodiscard]] ViewTransition viewTransition() const;
};

} // namespace webbind