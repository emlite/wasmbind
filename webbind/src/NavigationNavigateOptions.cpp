#include <webbind/NavigationNavigateOptions.hpp>

namespace webbind {

NavigationNavigateOptions::NavigationNavigateOptions(Handle h) noexcept : NavigationOptions(emlite::Val::take_ownership(h)) {}
NavigationNavigateOptions NavigationNavigateOptions::take_ownership(Handle h) noexcept {
    return NavigationNavigateOptions(h);
}

NavigationNavigateOptions::NavigationNavigateOptions(const emlite::Val &val) noexcept: NavigationOptions(val) {}

NavigationNavigateOptions::NavigationNavigateOptions() noexcept: NavigationOptions(emlite::Val::object()) {}

NavigationNavigateOptions NavigationNavigateOptions::clone() const noexcept { return *this; }

jsbind::Any NavigationNavigateOptions::state() const {
    return emlite::Val::get("state").as<jsbind::Any>();
}

void NavigationNavigateOptions::state(const jsbind::Any& value) {
    emlite::Val::set("state", value);
}

NavigationHistoryBehavior NavigationNavigateOptions::history() const {
    return emlite::Val::get("history").as<NavigationHistoryBehavior>();
}

void NavigationNavigateOptions::history(const NavigationHistoryBehavior& value) {
    emlite::Val::set("history", value);
}


} // namespace webbind