#include <webbind/TrustedTypePolicyOptions.hpp>

namespace webbind {

TrustedTypePolicyOptions::TrustedTypePolicyOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
TrustedTypePolicyOptions TrustedTypePolicyOptions::take_ownership(Handle h) noexcept {
    return TrustedTypePolicyOptions(h);
}

TrustedTypePolicyOptions::TrustedTypePolicyOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}

TrustedTypePolicyOptions::TrustedTypePolicyOptions() noexcept: emlite::Val(emlite::Val::object()) {}

TrustedTypePolicyOptions TrustedTypePolicyOptions::clone() const noexcept { return *this; }

jsbind::Function TrustedTypePolicyOptions::createHTML() const {
    return emlite::Val::get("createHTML").as<jsbind::Function>();
}

void TrustedTypePolicyOptions::createHTML(const jsbind::Function& value) {
    emlite::Val::set("createHTML", value);
}

jsbind::Function TrustedTypePolicyOptions::createScript() const {
    return emlite::Val::get("createScript").as<jsbind::Function>();
}

void TrustedTypePolicyOptions::createScript(const jsbind::Function& value) {
    emlite::Val::set("createScript", value);
}

jsbind::Function TrustedTypePolicyOptions::createScriptURL() const {
    return emlite::Val::get("createScriptURL").as<jsbind::Function>();
}

void TrustedTypePolicyOptions::createScriptURL(const jsbind::Function& value) {
    emlite::Val::set("createScriptURL", value);
}


} // namespace webbind