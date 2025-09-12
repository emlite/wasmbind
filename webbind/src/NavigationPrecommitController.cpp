#include <webbind/NavigationPrecommitController.hpp>
#include <webbind/NavigationNavigateOptions.hpp>

namespace webbind {

NavigationPrecommitController NavigationPrecommitController::take_ownership(Handle h) noexcept {
    return NavigationPrecommitController(h);
}

NavigationPrecommitController NavigationPrecommitController::clone() const noexcept { return *this; }

emlite::Val NavigationPrecommitController::instance() noexcept { return emlite::Val::global("NavigationPrecommitController"); }

NavigationPrecommitController::NavigationPrecommitController(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}

NavigationPrecommitController::NavigationPrecommitController(const emlite::Val &val) noexcept: emlite::Val(val) {}

jsbind::Undefined NavigationPrecommitController::redirect(const jsbind::String& url) {
    return emlite::Val::call("redirect", url).as<jsbind::Undefined>();
}

jsbind::Undefined NavigationPrecommitController::redirect(const jsbind::String& url, const NavigationNavigateOptions& options) {
    return emlite::Val::call("redirect", url, options).as<jsbind::Undefined>();
}


} // namespace webbind