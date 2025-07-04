#include <webbind/NavigatorLogin.hpp>


NavigatorLogin NavigatorLogin::take_ownership(Handle h) noexcept {
        return NavigatorLogin(h);
    }
NavigatorLogin NavigatorLogin::clone() const noexcept { return *this; }
NavigatorLogin::NavigatorLogin(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
NavigatorLogin::NavigatorLogin(const emlite::Val &val) noexcept: emlite::Val(val) {}


jsbind::Promise NavigatorLogin::setStatus(const LoginStatus& status) {
    return emlite::Val::call("setStatus", status).as<jsbind::Promise>();
}

