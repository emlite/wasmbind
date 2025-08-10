#include <webbind/IdentityCredentialErrorInit.hpp>

using emlite::Val;
namespace webbind {

IdentityCredentialErrorInit::IdentityCredentialErrorInit(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
IdentityCredentialErrorInit IdentityCredentialErrorInit::take_ownership(Handle h) noexcept {
        return IdentityCredentialErrorInit(h);
    }
IdentityCredentialErrorInit::IdentityCredentialErrorInit(const emlite::Val &val) noexcept: emlite::Val(val) {}
IdentityCredentialErrorInit::IdentityCredentialErrorInit() noexcept: emlite::Val(emlite::Val::object()) {}
IdentityCredentialErrorInit IdentityCredentialErrorInit::clone() const noexcept { return *this; }

jsbind::String IdentityCredentialErrorInit::error() const {
    return emlite::Val::get("error").as<jsbind::String>();
}

void IdentityCredentialErrorInit::error(const jsbind::String& value) {
    emlite::Val::set("error", value);
}

jsbind::String IdentityCredentialErrorInit::url() const {
    return emlite::Val::get("url").as<jsbind::String>();
}

void IdentityCredentialErrorInit::url(const jsbind::String& value) {
    emlite::Val::set("url", value);
}


} // namespace webbind