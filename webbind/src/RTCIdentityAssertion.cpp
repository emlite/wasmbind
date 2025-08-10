#include <webbind/RTCIdentityAssertion.hpp>

namespace webbind {

RTCIdentityAssertion RTCIdentityAssertion::take_ownership(Handle h) noexcept {
        return RTCIdentityAssertion(h);
    }
RTCIdentityAssertion RTCIdentityAssertion::clone() const noexcept { return *this; }
emlite::Val RTCIdentityAssertion::instance() noexcept { return emlite::Val::global("RTCIdentityAssertion"); }
RTCIdentityAssertion::RTCIdentityAssertion(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
RTCIdentityAssertion::RTCIdentityAssertion(const emlite::Val &val) noexcept: emlite::Val(val) {}

RTCIdentityAssertion::RTCIdentityAssertion(const jsbind::String& idp, const jsbind::String& name) : emlite::Val(emlite::Val::global("RTCIdentityAssertion").new_(idp, name)) {}

jsbind::String RTCIdentityAssertion::idp() const {
    return emlite::Val::get("idp").as<jsbind::String>();
}

void RTCIdentityAssertion::idp(const jsbind::String& value) {
    emlite::Val::set("idp", value);
}

jsbind::String RTCIdentityAssertion::name() const {
    return emlite::Val::get("name").as<jsbind::String>();
}

void RTCIdentityAssertion::name(const jsbind::String& value) {
    emlite::Val::set("name", value);
}


} // namespace webbind