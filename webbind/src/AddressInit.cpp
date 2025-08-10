#include "webbind/AddressInit.hpp"

using emlite::Val;
namespace webbind {

AddressInit::AddressInit(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
AddressInit AddressInit::take_ownership(Handle h) noexcept {
        return AddressInit(h);
    }
AddressInit::AddressInit(const emlite::Val &val) noexcept: emlite::Val(val) {}
AddressInit::AddressInit() noexcept: emlite::Val(emlite::Val::object()) {}
AddressInit AddressInit::clone() const noexcept { return *this; }

jsbind::String AddressInit::country() const {
    return emlite::Val::get("country").as<jsbind::String>();
}

void AddressInit::country(const jsbind::String& value) {
    emlite::Val::set("country", value);
}

jsbind::TypedArray<jsbind::String> AddressInit::addressLine() const {
    return emlite::Val::get("addressLine").as<jsbind::TypedArray<jsbind::String>>();
}

void AddressInit::addressLine(const jsbind::TypedArray<jsbind::String>& value) {
    emlite::Val::set("addressLine", value);
}

jsbind::String AddressInit::region() const {
    return emlite::Val::get("region").as<jsbind::String>();
}

void AddressInit::region(const jsbind::String& value) {
    emlite::Val::set("region", value);
}

jsbind::String AddressInit::city() const {
    return emlite::Val::get("city").as<jsbind::String>();
}

void AddressInit::city(const jsbind::String& value) {
    emlite::Val::set("city", value);
}

jsbind::String AddressInit::dependentLocality() const {
    return emlite::Val::get("dependentLocality").as<jsbind::String>();
}

void AddressInit::dependentLocality(const jsbind::String& value) {
    emlite::Val::set("dependentLocality", value);
}

jsbind::String AddressInit::postalCode() const {
    return emlite::Val::get("postalCode").as<jsbind::String>();
}

void AddressInit::postalCode(const jsbind::String& value) {
    emlite::Val::set("postalCode", value);
}

jsbind::String AddressInit::sortingCode() const {
    return emlite::Val::get("sortingCode").as<jsbind::String>();
}

void AddressInit::sortingCode(const jsbind::String& value) {
    emlite::Val::set("sortingCode", value);
}

jsbind::String AddressInit::organization() const {
    return emlite::Val::get("organization").as<jsbind::String>();
}

void AddressInit::organization(const jsbind::String& value) {
    emlite::Val::set("organization", value);
}

jsbind::String AddressInit::recipient() const {
    return emlite::Val::get("recipient").as<jsbind::String>();
}

void AddressInit::recipient(const jsbind::String& value) {
    emlite::Val::set("recipient", value);
}

jsbind::String AddressInit::phone() const {
    return emlite::Val::get("phone").as<jsbind::String>();
}

void AddressInit::phone(const jsbind::String& value) {
    emlite::Val::set("phone", value);
}


} // namespace webbind