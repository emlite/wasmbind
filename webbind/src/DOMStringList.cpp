#include "webbind/DOMStringList.hpp"

namespace webbind {

DOMStringList DOMStringList::take_ownership(Handle h) noexcept {
        return DOMStringList(h);
    }
DOMStringList DOMStringList::clone() const noexcept { return *this; }
emlite::Val DOMStringList::instance() noexcept { return emlite::Val::global("DOMStringList"); }
DOMStringList::DOMStringList(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
DOMStringList::DOMStringList(const emlite::Val &val) noexcept: emlite::Val(val) {}

unsigned long DOMStringList::length() const {
    return emlite::Val::get("length").as<unsigned long>();
}

jsbind::String DOMStringList::item(unsigned long index) {
    return emlite::Val::call("item", index).as<jsbind::String>();
}

bool DOMStringList::contains(const jsbind::String& string) {
    return emlite::Val::call("contains", string).as<bool>();
}


} // namespace webbind