#include <webbind/TrustedScriptURL.hpp>


TrustedScriptURL TrustedScriptURL::take_ownership(Handle h) noexcept {
        return TrustedScriptURL(h);
    }
TrustedScriptURL TrustedScriptURL::clone() const noexcept { return *this; }
TrustedScriptURL::TrustedScriptURL(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
TrustedScriptURL::TrustedScriptURL(const emlite::Val &val) noexcept: emlite::Val(val) {}


jsbind::USVString TrustedScriptURL::toJSON() {
    return emlite::Val::call("toJSON").as<jsbind::USVString>();
}

