#include <webbind/NavigationCurrentEntryChangeEvent.hpp>
#include <webbind/NavigationHistoryEntry.hpp>


NavigationCurrentEntryChangeEvent NavigationCurrentEntryChangeEvent::take_ownership(Handle h) noexcept {
        return NavigationCurrentEntryChangeEvent(h);
    }
NavigationCurrentEntryChangeEvent NavigationCurrentEntryChangeEvent::clone() const noexcept { return *this; }
NavigationCurrentEntryChangeEvent::NavigationCurrentEntryChangeEvent(Handle h) noexcept : Event(emlite::Val::take_ownership(h)) {}
NavigationCurrentEntryChangeEvent::NavigationCurrentEntryChangeEvent(const emlite::Val &val) noexcept: Event(val) {}


NavigationCurrentEntryChangeEvent::NavigationCurrentEntryChangeEvent(const jsbind::String& type, const jsbind::Any& eventInitDict) : Event(emlite::Val::global("NavigationCurrentEntryChangeEvent").new_(type, eventInitDict)) {}

NavigationType NavigationCurrentEntryChangeEvent::navigationType() const {
    return Event::get("navigationType").as<NavigationType>();
}

NavigationHistoryEntry NavigationCurrentEntryChangeEvent::from() const {
    return Event::get("from").as<NavigationHistoryEntry>();
}

