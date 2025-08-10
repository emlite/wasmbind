#include "webbind/ContactAddress.hpp"

namespace webbind {

ContactAddress ContactAddress::take_ownership(Handle h) noexcept {
        return ContactAddress(h);
    }
ContactAddress ContactAddress::clone() const noexcept { return *this; }
emlite::Val ContactAddress::instance() noexcept { return emlite::Val::global("ContactAddress"); }
ContactAddress::ContactAddress(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
ContactAddress::ContactAddress(const emlite::Val &val) noexcept: emlite::Val(val) {}

jsbind::Object ContactAddress::toJSON() {
    return emlite::Val::call("toJSON").as<jsbind::Object>();
}

jsbind::String ContactAddress::city() const {
    return emlite::Val::get("city").as<jsbind::String>();
}

jsbind::String ContactAddress::country() const {
    return emlite::Val::get("country").as<jsbind::String>();
}

jsbind::String ContactAddress::dependentLocality() const {
    return emlite::Val::get("dependentLocality").as<jsbind::String>();
}

jsbind::String ContactAddress::organization() const {
    return emlite::Val::get("organization").as<jsbind::String>();
}

jsbind::String ContactAddress::phone() const {
    return emlite::Val::get("phone").as<jsbind::String>();
}

jsbind::String ContactAddress::postalCode() const {
    return emlite::Val::get("postalCode").as<jsbind::String>();
}

jsbind::String ContactAddress::recipient() const {
    return emlite::Val::get("recipient").as<jsbind::String>();
}

jsbind::String ContactAddress::region() const {
    return emlite::Val::get("region").as<jsbind::String>();
}

jsbind::String ContactAddress::sortingCode() const {
    return emlite::Val::get("sortingCode").as<jsbind::String>();
}

jsbind::TypedArray<jsbind::String> ContactAddress::addressLine() const {
    return emlite::Val::get("addressLine").as<jsbind::TypedArray<jsbind::String>>();
}


} // namespace webbind