#include <webbind/DOMStringList.hpp>


DOMStringList DOMStringList::take_ownership(Handle h) noexcept {
        return DOMStringList(h);
    }
DOMStringList DOMStringList::clone() const noexcept { return *this; }
DOMStringList::DOMStringList(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
DOMStringList::DOMStringList(const emlite::Val &val) noexcept: emlite::Val(val) {}


unsigned long DOMStringList::length() const {
    return emlite::Val::get("length").as<unsigned long>();
}

jsbind::DOMString DOMStringList::item(unsigned long index) {
    return emlite::Val::call("item", index).as<jsbind::DOMString>();
}

bool DOMStringList::contains(const jsbind::DOMString& string) {
    return emlite::Val::call("contains", string).as<bool>();
}

