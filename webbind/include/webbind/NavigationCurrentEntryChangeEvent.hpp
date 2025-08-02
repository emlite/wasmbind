#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "Event.hpp"
#include "enums.hpp"

class NavigationHistoryEntry;


/// The NavigationCurrentEntryChangeEvent class.
/// [`NavigationCurrentEntryChangeEvent`](https://developer.mozilla.org/en-US/docs/Web/API/NavigationCurrentEntryChangeEvent)
class NavigationCurrentEntryChangeEvent : public Event {
    explicit NavigationCurrentEntryChangeEvent(Handle h) noexcept;

public:
    explicit NavigationCurrentEntryChangeEvent(const emlite::Val &val) noexcept;
    static NavigationCurrentEntryChangeEvent take_ownership(Handle h) noexcept;

    [[nodiscard]] NavigationCurrentEntryChangeEvent clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new NavigationCurrentEntryChangeEvent(..)` constructor, creating a new NavigationCurrentEntryChangeEvent instance
    NavigationCurrentEntryChangeEvent(const jsbind::String& type, const jsbind::Any& eventInitDict);
    /// Getter of the `navigationType` attribute.
    /// [`NavigationCurrentEntryChangeEvent.navigationType`](https://developer.mozilla.org/en-US/docs/Web/API/NavigationCurrentEntryChangeEvent/navigationType)
    [[nodiscard]] NavigationType navigationType() const;
    /// Getter of the `from` attribute.
    /// [`NavigationCurrentEntryChangeEvent.from`](https://developer.mozilla.org/en-US/docs/Web/API/NavigationCurrentEntryChangeEvent/from)
    [[nodiscard]] NavigationHistoryEntry from() const;
};

