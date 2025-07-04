#include <webbind/TrustedScript.hpp>


TrustedScript TrustedScript::take_ownership(Handle h) noexcept {
        return TrustedScript(h);
    }
TrustedScript TrustedScript::clone() const noexcept { return *this; }
TrustedScript::TrustedScript(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
TrustedScript::TrustedScript(const emlite::Val &val) noexcept: emlite::Val(val) {}


jsbind::DOMString TrustedScript::toJSON() {
    return emlite::Val::call("toJSON").as<jsbind::DOMString>();
}

