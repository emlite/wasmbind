#include <webbind/NavigatorLogin.hpp>

namespace webbind {

NavigatorLogin NavigatorLogin::take_ownership(Handle h) noexcept {
        return NavigatorLogin(h);
    }
NavigatorLogin NavigatorLogin::clone() const noexcept { return *this; }
emlite::Val NavigatorLogin::instance() noexcept { return emlite::Val::global("NavigatorLogin"); }
NavigatorLogin::NavigatorLogin(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
NavigatorLogin::NavigatorLogin(const emlite::Val &val) noexcept: emlite::Val(val) {}

jsbind::Promise<jsbind::Undefined> NavigatorLogin::setStatus(const LoginStatus& status) {
    return emlite::Val::call("setStatus", status).as<jsbind::Promise<jsbind::Undefined>>();
}


} // namespace webbind