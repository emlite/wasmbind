#include <webbind/ContactInfo.hpp>
#include <webbind/ContactAddress.hpp>
#include <webbind/Blob.hpp>

namespace webbind {

ContactInfo::ContactInfo(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
ContactInfo ContactInfo::take_ownership(Handle h) noexcept {
    return ContactInfo(h);
}

ContactInfo::ContactInfo(const emlite::Val &val) noexcept: emlite::Val(val) {}

ContactInfo::ContactInfo() noexcept: emlite::Val(emlite::Val::object()) {}

ContactInfo ContactInfo::clone() const noexcept { return *this; }

jsbind::TypedArray<ContactAddress> ContactInfo::address() const {
    return emlite::Val::get("address").as<jsbind::TypedArray<ContactAddress>>();
}

void ContactInfo::address(const jsbind::TypedArray<ContactAddress>& value) {
    emlite::Val::set("address", value);
}

jsbind::TypedArray<jsbind::String> ContactInfo::email() const {
    return emlite::Val::get("email").as<jsbind::TypedArray<jsbind::String>>();
}

void ContactInfo::email(const jsbind::TypedArray<jsbind::String>& value) {
    emlite::Val::set("email", value);
}

jsbind::TypedArray<Blob> ContactInfo::icon() const {
    return emlite::Val::get("icon").as<jsbind::TypedArray<Blob>>();
}

void ContactInfo::icon(const jsbind::TypedArray<Blob>& value) {
    emlite::Val::set("icon", value);
}

jsbind::TypedArray<jsbind::String> ContactInfo::name() const {
    return emlite::Val::get("name").as<jsbind::TypedArray<jsbind::String>>();
}

void ContactInfo::name(const jsbind::TypedArray<jsbind::String>& value) {
    emlite::Val::set("name", value);
}

jsbind::TypedArray<jsbind::String> ContactInfo::tel() const {
    return emlite::Val::get("tel").as<jsbind::TypedArray<jsbind::String>>();
}

void ContactInfo::tel(const jsbind::TypedArray<jsbind::String>& value) {
    emlite::Val::set("tel", value);
}


} // namespace webbind