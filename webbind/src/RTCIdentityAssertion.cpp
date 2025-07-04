#include <webbind/RTCIdentityAssertion.hpp>


RTCIdentityAssertion RTCIdentityAssertion::take_ownership(Handle h) noexcept {
        return RTCIdentityAssertion(h);
    }
RTCIdentityAssertion RTCIdentityAssertion::clone() const noexcept { return *this; }
RTCIdentityAssertion::RTCIdentityAssertion(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
RTCIdentityAssertion::RTCIdentityAssertion(const emlite::Val &val) noexcept: emlite::Val(val) {}


RTCIdentityAssertion::RTCIdentityAssertion(const jsbind::DOMString& idp, const jsbind::DOMString& name): emlite::Val(emlite::Val::global("RTCIdentityAssertion").new_(idp, name)) {}

jsbind::DOMString RTCIdentityAssertion::idp() const {
    return emlite::Val::get("idp").as<jsbind::DOMString>();
}

void RTCIdentityAssertion::idp(const jsbind::DOMString& value) {
    emlite::Val::set("idp", value);
}

jsbind::DOMString RTCIdentityAssertion::name() const {
    return emlite::Val::get("name").as<jsbind::DOMString>();
}

void RTCIdentityAssertion::name(const jsbind::DOMString& value) {
    emlite::Val::set("name", value);
}

