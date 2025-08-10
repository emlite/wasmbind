#include "webbind/NavigationCurrentEntryChangeEvent.hpp"
#include "webbind/NavigationCurrentEntryChangeEventInit.hpp"
#include "webbind/NavigationHistoryEntry.hpp"

namespace webbind {

NavigationCurrentEntryChangeEvent NavigationCurrentEntryChangeEvent::take_ownership(Handle h) noexcept {
        return NavigationCurrentEntryChangeEvent(h);
    }
NavigationCurrentEntryChangeEvent NavigationCurrentEntryChangeEvent::clone() const noexcept { return *this; }
emlite::Val NavigationCurrentEntryChangeEvent::instance() noexcept { return emlite::Val::global("NavigationCurrentEntryChangeEvent"); }
NavigationCurrentEntryChangeEvent::NavigationCurrentEntryChangeEvent(Handle h) noexcept : Event(emlite::Val::take_ownership(h)) {}
NavigationCurrentEntryChangeEvent::NavigationCurrentEntryChangeEvent(const emlite::Val &val) noexcept: Event(val) {}

NavigationCurrentEntryChangeEvent::NavigationCurrentEntryChangeEvent(const jsbind::String& type, const NavigationCurrentEntryChangeEventInit& eventInitDict) : Event(emlite::Val::global("NavigationCurrentEntryChangeEvent").new_(type, eventInitDict)) {}

NavigationType NavigationCurrentEntryChangeEvent::navigationType() const {
    return Event::get("navigationType").as<NavigationType>();
}

NavigationHistoryEntry NavigationCurrentEntryChangeEvent::from() const {
    return Event::get("from").as<NavigationHistoryEntry>();
}


} // namespace webbind