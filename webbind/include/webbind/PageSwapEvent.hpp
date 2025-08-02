#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "Event.hpp"
#include "enums.hpp"

class NavigationActivation;
class ViewTransition;


/// The PageSwapEvent class.
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
    PageSwapEvent(const jsbind::String& type, const jsbind::Any& eventInitDict);
    /// Getter of the `activation` attribute.
    /// [`PageSwapEvent.activation`](https://developer.mozilla.org/en-US/docs/Web/API/PageSwapEvent/activation)
    [[nodiscard]] NavigationActivation activation() const;
    /// Getter of the `viewTransition` attribute.
    /// [`PageSwapEvent.viewTransition`](https://developer.mozilla.org/en-US/docs/Web/API/PageSwapEvent/viewTransition)
    [[nodiscard]] ViewTransition viewTransition() const;
};

