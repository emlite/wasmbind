#include <webbind/NavigationActivation.hpp>
#include <webbind/NavigationHistoryEntry.hpp>


NavigationActivation NavigationActivation::take_ownership(Handle h) noexcept {
        return NavigationActivation(h);
    }
NavigationActivation NavigationActivation::clone() const noexcept { return *this; }
NavigationActivation::NavigationActivation(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
NavigationActivation::NavigationActivation(const emlite::Val &val) noexcept: emlite::Val(val) {}


NavigationHistoryEntry NavigationActivation::from() const {
    return emlite::Val::get("from").as<NavigationHistoryEntry>();
}

NavigationHistoryEntry NavigationActivation::entry() const {
    return emlite::Val::get("entry").as<NavigationHistoryEntry>();
}

NavigationType NavigationActivation::navigationType() const {
    return emlite::Val::get("navigationType").as<NavigationType>();
}

