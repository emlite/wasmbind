#include <webbind/NavigationTransition.hpp>
#include <webbind/NavigationHistoryEntry.hpp>


NavigationTransition NavigationTransition::take_ownership(Handle h) noexcept {
        return NavigationTransition(h);
    }
NavigationTransition NavigationTransition::clone() const noexcept { return *this; }
NavigationTransition::NavigationTransition(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
NavigationTransition::NavigationTransition(const emlite::Val &val) noexcept: emlite::Val(val) {}


NavigationType NavigationTransition::navigationType() const {
    return emlite::Val::get("navigationType").as<NavigationType>();
}

NavigationHistoryEntry NavigationTransition::from() const {
    return emlite::Val::get("from").as<NavigationHistoryEntry>();
}

jsbind::Promise NavigationTransition::finished() const {
    return emlite::Val::get("finished").as<jsbind::Promise>();
}

