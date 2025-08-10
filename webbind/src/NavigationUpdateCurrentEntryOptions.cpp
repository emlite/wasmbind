#include "webbind/NavigationUpdateCurrentEntryOptions.hpp"

using emlite::Val;
namespace webbind {

NavigationUpdateCurrentEntryOptions::NavigationUpdateCurrentEntryOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
NavigationUpdateCurrentEntryOptions NavigationUpdateCurrentEntryOptions::take_ownership(Handle h) noexcept {
        return NavigationUpdateCurrentEntryOptions(h);
    }
NavigationUpdateCurrentEntryOptions::NavigationUpdateCurrentEntryOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
NavigationUpdateCurrentEntryOptions::NavigationUpdateCurrentEntryOptions() noexcept: emlite::Val(emlite::Val::object()) {}
NavigationUpdateCurrentEntryOptions NavigationUpdateCurrentEntryOptions::clone() const noexcept { return *this; }

jsbind::Any NavigationUpdateCurrentEntryOptions::state() const {
    return emlite::Val::get("state").as<jsbind::Any>();
}

void NavigationUpdateCurrentEntryOptions::state(const jsbind::Any& value) {
    emlite::Val::set("state", value);
}


} // namespace webbind