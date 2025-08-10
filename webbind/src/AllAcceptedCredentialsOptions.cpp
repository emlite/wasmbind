#include <webbind/AllAcceptedCredentialsOptions.hpp>

using emlite::Val;
namespace webbind {

AllAcceptedCredentialsOptions::AllAcceptedCredentialsOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
AllAcceptedCredentialsOptions AllAcceptedCredentialsOptions::take_ownership(Handle h) noexcept {
        return AllAcceptedCredentialsOptions(h);
    }
AllAcceptedCredentialsOptions::AllAcceptedCredentialsOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
AllAcceptedCredentialsOptions::AllAcceptedCredentialsOptions() noexcept: emlite::Val(emlite::Val::object()) {}
AllAcceptedCredentialsOptions AllAcceptedCredentialsOptions::clone() const noexcept { return *this; }

jsbind::String AllAcceptedCredentialsOptions::rpId() const {
    return emlite::Val::get("rpId").as<jsbind::String>();
}

void AllAcceptedCredentialsOptions::rpId(const jsbind::String& value) {
    emlite::Val::set("rpId", value);
}

jsbind::Any AllAcceptedCredentialsOptions::userId() const {
    return emlite::Val::get("userId").as<jsbind::Any>();
}

void AllAcceptedCredentialsOptions::userId(const jsbind::Any& value) {
    emlite::Val::set("userId", value);
}

jsbind::TypedArray<jsbind::Any> AllAcceptedCredentialsOptions::allAcceptedCredentialIds() const {
    return emlite::Val::get("allAcceptedCredentialIds").as<jsbind::TypedArray<jsbind::Any>>();
}

void AllAcceptedCredentialsOptions::allAcceptedCredentialIds(const jsbind::TypedArray<jsbind::Any>& value) {
    emlite::Val::set("allAcceptedCredentialIds", value);
}


} // namespace webbind