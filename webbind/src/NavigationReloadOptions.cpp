#include "webbind/NavigationReloadOptions.hpp"

using emlite::Val;
namespace webbind {

NavigationReloadOptions::NavigationReloadOptions(Handle h) noexcept : NavigationOptions(emlite::Val::take_ownership(h)) {}
NavigationReloadOptions NavigationReloadOptions::take_ownership(Handle h) noexcept {
        return NavigationReloadOptions(h);
    }
NavigationReloadOptions::NavigationReloadOptions(const emlite::Val &val) noexcept: NavigationOptions(val) {}
NavigationReloadOptions::NavigationReloadOptions() noexcept: NavigationOptions(emlite::Val::object()) {}
NavigationReloadOptions NavigationReloadOptions::clone() const noexcept { return *this; }

jsbind::Any NavigationReloadOptions::state() const {
    return emlite::Val::get("state").as<jsbind::Any>();
}

void NavigationReloadOptions::state(const jsbind::Any& value) {
    emlite::Val::set("state", value);
}


} // namespace webbind