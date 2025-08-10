#include "webbind/FederatedCredentialRequestOptions.hpp"

using emlite::Val;
namespace webbind {

FederatedCredentialRequestOptions::FederatedCredentialRequestOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
FederatedCredentialRequestOptions FederatedCredentialRequestOptions::take_ownership(Handle h) noexcept {
        return FederatedCredentialRequestOptions(h);
    }
FederatedCredentialRequestOptions::FederatedCredentialRequestOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
FederatedCredentialRequestOptions::FederatedCredentialRequestOptions() noexcept: emlite::Val(emlite::Val::object()) {}
FederatedCredentialRequestOptions FederatedCredentialRequestOptions::clone() const noexcept { return *this; }

jsbind::TypedArray<jsbind::String> FederatedCredentialRequestOptions::providers() const {
    return emlite::Val::get("providers").as<jsbind::TypedArray<jsbind::String>>();
}

void FederatedCredentialRequestOptions::providers(const jsbind::TypedArray<jsbind::String>& value) {
    emlite::Val::set("providers", value);
}

jsbind::TypedArray<jsbind::String> FederatedCredentialRequestOptions::protocols() const {
    return emlite::Val::get("protocols").as<jsbind::TypedArray<jsbind::String>>();
}

void FederatedCredentialRequestOptions::protocols(const jsbind::TypedArray<jsbind::String>& value) {
    emlite::Val::set("protocols", value);
}


} // namespace webbind