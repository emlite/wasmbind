#include <webbind/PublicKeyCredentialDescriptorJSON.hpp>

using emlite::Val;
namespace webbind {

PublicKeyCredentialDescriptorJSON::PublicKeyCredentialDescriptorJSON(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
PublicKeyCredentialDescriptorJSON PublicKeyCredentialDescriptorJSON::take_ownership(Handle h) noexcept {
        return PublicKeyCredentialDescriptorJSON(h);
    }
PublicKeyCredentialDescriptorJSON::PublicKeyCredentialDescriptorJSON(const emlite::Val &val) noexcept: emlite::Val(val) {}
PublicKeyCredentialDescriptorJSON::PublicKeyCredentialDescriptorJSON() noexcept: emlite::Val(emlite::Val::object()) {}
PublicKeyCredentialDescriptorJSON PublicKeyCredentialDescriptorJSON::clone() const noexcept { return *this; }

jsbind::String PublicKeyCredentialDescriptorJSON::type() const {
    return emlite::Val::get("type").as<jsbind::String>();
}

void PublicKeyCredentialDescriptorJSON::type(const jsbind::String& value) {
    emlite::Val::set("type", value);
}

jsbind::Any PublicKeyCredentialDescriptorJSON::id() const {
    return emlite::Val::get("id").as<jsbind::Any>();
}

void PublicKeyCredentialDescriptorJSON::id(const jsbind::Any& value) {
    emlite::Val::set("id", value);
}

jsbind::TypedArray<jsbind::String> PublicKeyCredentialDescriptorJSON::transports() const {
    return emlite::Val::get("transports").as<jsbind::TypedArray<jsbind::String>>();
}

void PublicKeyCredentialDescriptorJSON::transports(const jsbind::TypedArray<jsbind::String>& value) {
    emlite::Val::set("transports", value);
}


} // namespace webbind