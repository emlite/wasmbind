#include <webbind/TrustedTypePolicy.hpp>
#include <webbind/TrustedHTML.hpp>
#include <webbind/TrustedScript.hpp>
#include <webbind/TrustedScriptURL.hpp>

namespace webbind {

TrustedTypePolicy TrustedTypePolicy::take_ownership(Handle h) noexcept {
        return TrustedTypePolicy(h);
    }
TrustedTypePolicy TrustedTypePolicy::clone() const noexcept { return *this; }
emlite::Val TrustedTypePolicy::instance() noexcept { return emlite::Val::global("TrustedTypePolicy"); }
TrustedTypePolicy::TrustedTypePolicy(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
TrustedTypePolicy::TrustedTypePolicy(const emlite::Val &val) noexcept: emlite::Val(val) {}

jsbind::String TrustedTypePolicy::name() const {
    return emlite::Val::get("name").as<jsbind::String>();
}

TrustedHTML TrustedTypePolicy::createHTML(const jsbind::String& input, const jsbind::Any& arguments) {
    return emlite::Val::call("createHTML", input, arguments).as<TrustedHTML>();
}

TrustedScript TrustedTypePolicy::createScript(const jsbind::String& input, const jsbind::Any& arguments) {
    return emlite::Val::call("createScript", input, arguments).as<TrustedScript>();
}

TrustedScriptURL TrustedTypePolicy::createScriptURL(const jsbind::String& input, const jsbind::Any& arguments) {
    return emlite::Val::call("createScriptURL", input, arguments).as<TrustedScriptURL>();
}


} // namespace webbind