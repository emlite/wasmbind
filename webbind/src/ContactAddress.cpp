#include <webbind/ContactAddress.hpp>


ContactAddress ContactAddress::take_ownership(Handle h) noexcept {
        return ContactAddress(h);
    }
ContactAddress ContactAddress::clone() const noexcept { return *this; }
ContactAddress::ContactAddress(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
ContactAddress::ContactAddress(const emlite::Val &val) noexcept: emlite::Val(val) {}


jsbind::Object ContactAddress::toJSON() {
    return emlite::Val::call("toJSON").as<jsbind::Object>();
}

jsbind::DOMString ContactAddress::city() const {
    return emlite::Val::get("city").as<jsbind::DOMString>();
}

jsbind::DOMString ContactAddress::country() const {
    return emlite::Val::get("country").as<jsbind::DOMString>();
}

jsbind::DOMString ContactAddress::dependentLocality() const {
    return emlite::Val::get("dependentLocality").as<jsbind::DOMString>();
}

jsbind::DOMString ContactAddress::organization() const {
    return emlite::Val::get("organization").as<jsbind::DOMString>();
}

jsbind::DOMString ContactAddress::phone() const {
    return emlite::Val::get("phone").as<jsbind::DOMString>();
}

jsbind::DOMString ContactAddress::postalCode() const {
    return emlite::Val::get("postalCode").as<jsbind::DOMString>();
}

jsbind::DOMString ContactAddress::recipient() const {
    return emlite::Val::get("recipient").as<jsbind::DOMString>();
}

jsbind::DOMString ContactAddress::region() const {
    return emlite::Val::get("region").as<jsbind::DOMString>();
}

jsbind::DOMString ContactAddress::sortingCode() const {
    return emlite::Val::get("sortingCode").as<jsbind::DOMString>();
}

jsbind::FrozenArray<jsbind::DOMString> ContactAddress::addressLine() const {
    return emlite::Val::get("addressLine").as<jsbind::FrozenArray<jsbind::DOMString>>();
}

