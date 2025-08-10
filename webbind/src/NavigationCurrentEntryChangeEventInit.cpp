#include "webbind/NavigationCurrentEntryChangeEventInit.hpp"
#include "webbind/NavigationHistoryEntry.hpp"

using emlite::Val;
namespace webbind {

NavigationCurrentEntryChangeEventInit::NavigationCurrentEntryChangeEventInit(Handle h) noexcept : EventInit(emlite::Val::take_ownership(h)) {}
NavigationCurrentEntryChangeEventInit NavigationCurrentEntryChangeEventInit::take_ownership(Handle h) noexcept {
        return NavigationCurrentEntryChangeEventInit(h);
    }
NavigationCurrentEntryChangeEventInit::NavigationCurrentEntryChangeEventInit(const emlite::Val &val) noexcept: EventInit(val) {}
NavigationCurrentEntryChangeEventInit::NavigationCurrentEntryChangeEventInit() noexcept: EventInit(emlite::Val::object()) {}
NavigationCurrentEntryChangeEventInit NavigationCurrentEntryChangeEventInit::clone() const noexcept { return *this; }

NavigationType NavigationCurrentEntryChangeEventInit::navigationType() const {
    return emlite::Val::get("navigationType").as<NavigationType>();
}

void NavigationCurrentEntryChangeEventInit::navigationType(const NavigationType& value) {
    emlite::Val::set("navigationType", value);
}

NavigationHistoryEntry NavigationCurrentEntryChangeEventInit::from() const {
    return emlite::Val::get("from").as<NavigationHistoryEntry>();
}

void NavigationCurrentEntryChangeEventInit::from(const NavigationHistoryEntry& value) {
    emlite::Val::set("from", value);
}


} // namespace webbind