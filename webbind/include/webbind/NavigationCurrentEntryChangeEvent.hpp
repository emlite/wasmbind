#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "Event.hpp"
#include "NavigationCurrentEntryChangeEventInit.hpp"
#include "enums.hpp"

namespace webbind {

class NavigationHistoryEntry;

/// Interface NavigationCurrentEntryChangeEvent
/// [`NavigationCurrentEntryChangeEvent`](https://developer.mozilla.org/en-US/docs/Web/API/NavigationCurrentEntryChangeEvent)
class NavigationCurrentEntryChangeEvent : public Event {
    explicit NavigationCurrentEntryChangeEvent(Handle h) noexcept;
public:
    explicit NavigationCurrentEntryChangeEvent(const emlite::Val &val) noexcept;
    static NavigationCurrentEntryChangeEvent take_ownership(Handle h) noexcept;
    [[nodiscard]] NavigationCurrentEntryChangeEvent clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new NavigationCurrentEntryChangeEvent(..)` constructor, creating a new NavigationCurrentEntryChangeEvent instance
    NavigationCurrentEntryChangeEvent(const jsbind::String& type, const NavigationCurrentEntryChangeEventInit& eventInitDict);
    /// Getter of the `navigationType` attribute.
    /// [`NavigationCurrentEntryChangeEvent.navigationType`](https://developer.mozilla.org/en-US/docs/Web/API/NavigationCurrentEntryChangeEvent/navigationType)
    [[nodiscard]] NavigationType navigationType() const;
    /// Getter of the `from` attribute.
    /// [`NavigationCurrentEntryChangeEvent.from`](https://developer.mozilla.org/en-US/docs/Web/API/NavigationCurrentEntryChangeEvent/from)
    [[nodiscard]] NavigationHistoryEntry from() const;
};

} // namespace webbind