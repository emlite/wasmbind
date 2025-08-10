#include "webbind/NavigationOptions.hpp"

using emlite::Val;
namespace webbind {

NavigationOptions::NavigationOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
NavigationOptions NavigationOptions::take_ownership(Handle h) noexcept {
        return NavigationOptions(h);
    }
NavigationOptions::NavigationOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
NavigationOptions::NavigationOptions() noexcept: emlite::Val(emlite::Val::object()) {}
NavigationOptions NavigationOptions::clone() const noexcept { return *this; }

jsbind::Any NavigationOptions::info() const {
    return emlite::Val::get("info").as<jsbind::Any>();
}

void NavigationOptions::info(const jsbind::Any& value) {
    emlite::Val::set("info", value);
}


} // namespace webbind