#include <webbind/RTCIdentityProviderOptions.hpp>

namespace webbind {

RTCIdentityProviderOptions::RTCIdentityProviderOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
RTCIdentityProviderOptions RTCIdentityProviderOptions::take_ownership(Handle h) noexcept {
    return RTCIdentityProviderOptions(h);
}

RTCIdentityProviderOptions::RTCIdentityProviderOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}

RTCIdentityProviderOptions::RTCIdentityProviderOptions() noexcept: emlite::Val(emlite::Val::object()) {}

RTCIdentityProviderOptions RTCIdentityProviderOptions::clone() const noexcept { return *this; }

jsbind::String RTCIdentityProviderOptions::protocol() const {
    return emlite::Val::get("protocol").as<jsbind::String>();
}

void RTCIdentityProviderOptions::protocol(const jsbind::String& value) {
    emlite::Val::set("protocol", value);
}

jsbind::String RTCIdentityProviderOptions::usernameHint() const {
    return emlite::Val::get("usernameHint").as<jsbind::String>();
}

void RTCIdentityProviderOptions::usernameHint(const jsbind::String& value) {
    emlite::Val::set("usernameHint", value);
}

jsbind::String RTCIdentityProviderOptions::peerIdentity() const {
    return emlite::Val::get("peerIdentity").as<jsbind::String>();
}

void RTCIdentityProviderOptions::peerIdentity(const jsbind::String& value) {
    emlite::Val::set("peerIdentity", value);
}


} // namespace webbind