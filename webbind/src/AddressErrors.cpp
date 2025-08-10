#include "webbind/AddressErrors.hpp"

using emlite::Val;
namespace webbind {

AddressErrors::AddressErrors(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
AddressErrors AddressErrors::take_ownership(Handle h) noexcept {
        return AddressErrors(h);
    }
AddressErrors::AddressErrors(const emlite::Val &val) noexcept: emlite::Val(val) {}
AddressErrors::AddressErrors() noexcept: emlite::Val(emlite::Val::object()) {}
AddressErrors AddressErrors::clone() const noexcept { return *this; }

jsbind::String AddressErrors::addressLine() const {
    return emlite::Val::get("addressLine").as<jsbind::String>();
}

void AddressErrors::addressLine(const jsbind::String& value) {
    emlite::Val::set("addressLine", value);
}

jsbind::String AddressErrors::city() const {
    return emlite::Val::get("city").as<jsbind::String>();
}

void AddressErrors::city(const jsbind::String& value) {
    emlite::Val::set("city", value);
}

jsbind::String AddressErrors::country() const {
    return emlite::Val::get("country").as<jsbind::String>();
}

void AddressErrors::country(const jsbind::String& value) {
    emlite::Val::set("country", value);
}

jsbind::String AddressErrors::dependentLocality() const {
    return emlite::Val::get("dependentLocality").as<jsbind::String>();
}

void AddressErrors::dependentLocality(const jsbind::String& value) {
    emlite::Val::set("dependentLocality", value);
}

jsbind::String AddressErrors::organization() const {
    return emlite::Val::get("organization").as<jsbind::String>();
}

void AddressErrors::organization(const jsbind::String& value) {
    emlite::Val::set("organization", value);
}

jsbind::String AddressErrors::phone() const {
    return emlite::Val::get("phone").as<jsbind::String>();
}

void AddressErrors::phone(const jsbind::String& value) {
    emlite::Val::set("phone", value);
}

jsbind::String AddressErrors::postalCode() const {
    return emlite::Val::get("postalCode").as<jsbind::String>();
}

void AddressErrors::postalCode(const jsbind::String& value) {
    emlite::Val::set("postalCode", value);
}

jsbind::String AddressErrors::recipient() const {
    return emlite::Val::get("recipient").as<jsbind::String>();
}

void AddressErrors::recipient(const jsbind::String& value) {
    emlite::Val::set("recipient", value);
}

jsbind::String AddressErrors::region() const {
    return emlite::Val::get("region").as<jsbind::String>();
}

void AddressErrors::region(const jsbind::String& value) {
    emlite::Val::set("region", value);
}

jsbind::String AddressErrors::sortingCode() const {
    return emlite::Val::get("sortingCode").as<jsbind::String>();
}

void AddressErrors::sortingCode(const jsbind::String& value) {
    emlite::Val::set("sortingCode", value);
}


} // namespace webbind