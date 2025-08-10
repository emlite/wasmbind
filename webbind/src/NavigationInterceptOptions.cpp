#include "webbind/NavigationInterceptOptions.hpp"

using emlite::Val;
namespace webbind {

NavigationInterceptOptions::NavigationInterceptOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
NavigationInterceptOptions NavigationInterceptOptions::take_ownership(Handle h) noexcept {
        return NavigationInterceptOptions(h);
    }
NavigationInterceptOptions::NavigationInterceptOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
NavigationInterceptOptions::NavigationInterceptOptions() noexcept: emlite::Val(emlite::Val::object()) {}
NavigationInterceptOptions NavigationInterceptOptions::clone() const noexcept { return *this; }

jsbind::Function NavigationInterceptOptions::handler() const {
    return emlite::Val::get("handler").as<jsbind::Function>();
}

void NavigationInterceptOptions::handler(const jsbind::Function& value) {
    emlite::Val::set("handler", value);
}

NavigationFocusReset NavigationInterceptOptions::focusReset() const {
    return emlite::Val::get("focusReset").as<NavigationFocusReset>();
}

void NavigationInterceptOptions::focusReset(const NavigationFocusReset& value) {
    emlite::Val::set("focusReset", value);
}

NavigationScrollBehavior NavigationInterceptOptions::scroll() const {
    return emlite::Val::get("scroll").as<NavigationScrollBehavior>();
}

void NavigationInterceptOptions::scroll(const NavigationScrollBehavior& value) {
    emlite::Val::set("scroll", value);
}


} // namespace webbind