#include <webbind/IdentityProviderAccount.hpp>

namespace webbind {

IdentityProviderAccount::IdentityProviderAccount(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
IdentityProviderAccount IdentityProviderAccount::take_ownership(Handle h) noexcept {
    return IdentityProviderAccount(h);
}

IdentityProviderAccount::IdentityProviderAccount(const emlite::Val &val) noexcept: emlite::Val(val) {}

IdentityProviderAccount::IdentityProviderAccount() noexcept: emlite::Val(emlite::Val::object()) {}

IdentityProviderAccount IdentityProviderAccount::clone() const noexcept { return *this; }

jsbind::String IdentityProviderAccount::id() const {
    return emlite::Val::get("id").as<jsbind::String>();
}

void IdentityProviderAccount::id(const jsbind::String& value) {
    emlite::Val::set("id", value);
}

jsbind::String IdentityProviderAccount::name() const {
    return emlite::Val::get("name").as<jsbind::String>();
}

void IdentityProviderAccount::name(const jsbind::String& value) {
    emlite::Val::set("name", value);
}

jsbind::String IdentityProviderAccount::email() const {
    return emlite::Val::get("email").as<jsbind::String>();
}

void IdentityProviderAccount::email(const jsbind::String& value) {
    emlite::Val::set("email", value);
}

jsbind::String IdentityProviderAccount::tel() const {
    return emlite::Val::get("tel").as<jsbind::String>();
}

void IdentityProviderAccount::tel(const jsbind::String& value) {
    emlite::Val::set("tel", value);
}

jsbind::String IdentityProviderAccount::username() const {
    return emlite::Val::get("username").as<jsbind::String>();
}

void IdentityProviderAccount::username(const jsbind::String& value) {
    emlite::Val::set("username", value);
}

jsbind::String IdentityProviderAccount::given_name() const {
    return emlite::Val::get("given_name").as<jsbind::String>();
}

void IdentityProviderAccount::given_name(const jsbind::String& value) {
    emlite::Val::set("given_name", value);
}

jsbind::String IdentityProviderAccount::picture() const {
    return emlite::Val::get("picture").as<jsbind::String>();
}

void IdentityProviderAccount::picture(const jsbind::String& value) {
    emlite::Val::set("picture", value);
}

jsbind::TypedArray<jsbind::String> IdentityProviderAccount::approved_clients() const {
    return emlite::Val::get("approved_clients").as<jsbind::TypedArray<jsbind::String>>();
}

void IdentityProviderAccount::approved_clients(const jsbind::TypedArray<jsbind::String>& value) {
    emlite::Val::set("approved_clients", value);
}

jsbind::TypedArray<jsbind::String> IdentityProviderAccount::login_hints() const {
    return emlite::Val::get("login_hints").as<jsbind::TypedArray<jsbind::String>>();
}

void IdentityProviderAccount::login_hints(const jsbind::TypedArray<jsbind::String>& value) {
    emlite::Val::set("login_hints", value);
}

jsbind::TypedArray<jsbind::String> IdentityProviderAccount::domain_hints() const {
    return emlite::Val::get("domain_hints").as<jsbind::TypedArray<jsbind::String>>();
}

void IdentityProviderAccount::domain_hints(const jsbind::TypedArray<jsbind::String>& value) {
    emlite::Val::set("domain_hints", value);
}

jsbind::TypedArray<jsbind::String> IdentityProviderAccount::label_hints() const {
    return emlite::Val::get("label_hints").as<jsbind::TypedArray<jsbind::String>>();
}

void IdentityProviderAccount::label_hints(const jsbind::TypedArray<jsbind::String>& value) {
    emlite::Val::set("label_hints", value);
}


} // namespace webbind