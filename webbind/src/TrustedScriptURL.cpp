#include <webbind/TrustedScriptURL.hpp>

namespace webbind {

TrustedScriptURL TrustedScriptURL::take_ownership(Handle h) noexcept {
        return TrustedScriptURL(h);
    }
TrustedScriptURL TrustedScriptURL::clone() const noexcept { return *this; }
emlite::Val TrustedScriptURL::instance() noexcept { return emlite::Val::global("TrustedScriptURL"); }
TrustedScriptURL::TrustedScriptURL(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
TrustedScriptURL::TrustedScriptURL(const emlite::Val &val) noexcept: emlite::Val(val) {}

jsbind::String TrustedScriptURL::toJSON() {
    return emlite::Val::call("toJSON").as<jsbind::String>();
}


} // namespace webbind