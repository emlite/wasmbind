#include <webbind/NavigationTransition.hpp>
#include <webbind/NavigationHistoryEntry.hpp>

namespace webbind {

NavigationTransition NavigationTransition::take_ownership(Handle h) noexcept {
    return NavigationTransition(h);
}

NavigationTransition NavigationTransition::clone() const noexcept { return *this; }

emlite::Val NavigationTransition::instance() noexcept { return emlite::Val::global("NavigationTransition"); }

NavigationTransition::NavigationTransition(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}

NavigationTransition::NavigationTransition(const emlite::Val &val) noexcept: emlite::Val(val) {}

NavigationType NavigationTransition::navigationType() const {
    return emlite::Val::get("navigationType").as<NavigationType>();
}

NavigationHistoryEntry NavigationTransition::from() const {
    return emlite::Val::get("from").as<NavigationHistoryEntry>();
}

jsbind::Promise<jsbind::Undefined> NavigationTransition::committed() const {
    return emlite::Val::get("committed").as<jsbind::Promise<jsbind::Undefined>>();
}

jsbind::Promise<jsbind::Undefined> NavigationTransition::finished() const {
    return emlite::Val::get("finished").as<jsbind::Promise<jsbind::Undefined>>();
}


} // namespace webbind