#include <webbind/PublicKeyCredentialDescriptor.hpp>

using emlite::Val;
namespace webbind {

PublicKeyCredentialDescriptor::PublicKeyCredentialDescriptor(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
PublicKeyCredentialDescriptor PublicKeyCredentialDescriptor::take_ownership(Handle h) noexcept {
        return PublicKeyCredentialDescriptor(h);
    }
PublicKeyCredentialDescriptor::PublicKeyCredentialDescriptor(const emlite::Val &val) noexcept: emlite::Val(val) {}
PublicKeyCredentialDescriptor::PublicKeyCredentialDescriptor() noexcept: emlite::Val(emlite::Val::object()) {}
PublicKeyCredentialDescriptor PublicKeyCredentialDescriptor::clone() const noexcept { return *this; }

jsbind::String PublicKeyCredentialDescriptor::type() const {
    return emlite::Val::get("type").as<jsbind::String>();
}

void PublicKeyCredentialDescriptor::type(const jsbind::String& value) {
    emlite::Val::set("type", value);
}

jsbind::Any PublicKeyCredentialDescriptor::id() const {
    return emlite::Val::get("id").as<jsbind::Any>();
}

void PublicKeyCredentialDescriptor::id(const jsbind::Any& value) {
    emlite::Val::set("id", value);
}

jsbind::TypedArray<jsbind::String> PublicKeyCredentialDescriptor::transports() const {
    return emlite::Val::get("transports").as<jsbind::TypedArray<jsbind::String>>();
}

void PublicKeyCredentialDescriptor::transports(const jsbind::TypedArray<jsbind::String>& value) {
    emlite::Val::set("transports", value);
}


} // namespace webbind