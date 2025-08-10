#include <webbind/NavigationPreloadState.hpp>

namespace webbind {

NavigationPreloadState::NavigationPreloadState(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
NavigationPreloadState NavigationPreloadState::take_ownership(Handle h) noexcept {
    return NavigationPreloadState(h);
}

NavigationPreloadState::NavigationPreloadState(const emlite::Val &val) noexcept: emlite::Val(val) {}

NavigationPreloadState::NavigationPreloadState() noexcept: emlite::Val(emlite::Val::object()) {}

NavigationPreloadState NavigationPreloadState::clone() const noexcept { return *this; }

bool NavigationPreloadState::enabled() const {
    return emlite::Val::get("enabled").as<bool>();
}

void NavigationPreloadState::enabled(bool value) {
    emlite::Val::set("enabled", value);
}

jsbind::String NavigationPreloadState::headerValue() const {
    return emlite::Val::get("headerValue").as<jsbind::String>();
}

void NavigationPreloadState::headerValue(const jsbind::String& value) {
    emlite::Val::set("headerValue", value);
}


} // namespace webbind