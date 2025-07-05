#include <webbind/DOMTokenList.hpp>


DOMTokenList DOMTokenList::take_ownership(Handle h) noexcept {
        return DOMTokenList(h);
    }
DOMTokenList DOMTokenList::clone() const noexcept { return *this; }
DOMTokenList::DOMTokenList(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
DOMTokenList::DOMTokenList(const emlite::Val &val) noexcept: emlite::Val(val) {}


unsigned long DOMTokenList::length() const {
    return emlite::Val::get("length").as<unsigned long>();
}

jsbind::DOMString DOMTokenList::item(unsigned long index) {
    return emlite::Val::call("item", index).as<jsbind::DOMString>();
}

bool DOMTokenList::contains(const jsbind::DOMString& token) {
    return emlite::Val::call("contains", token).as<bool>();
}

jsbind::Undefined DOMTokenList::add(const jsbind::DOMString& tokens) {
    return emlite::Val::call("add", tokens).as<jsbind::Undefined>();
}

jsbind::Undefined DOMTokenList::remove(const jsbind::DOMString& tokens) {
    return emlite::Val::call("remove", tokens).as<jsbind::Undefined>();
}

bool DOMTokenList::toggle(const jsbind::DOMString& token) {
    return emlite::Val::call("toggle", token).as<bool>();
}

bool DOMTokenList::toggle(const jsbind::DOMString& token, bool force) {
    return emlite::Val::call("toggle", token, force).as<bool>();
}

bool DOMTokenList::replace(const jsbind::DOMString& token, const jsbind::DOMString& newToken) {
    return emlite::Val::call("replace", token, newToken).as<bool>();
}

bool DOMTokenList::supports(const jsbind::DOMString& token) {
    return emlite::Val::call("supports", token).as<bool>();
}

jsbind::DOMString DOMTokenList::value() const {
    return emlite::Val::get("value").as<jsbind::DOMString>();
}

void DOMTokenList::value(const jsbind::DOMString& value) {
    emlite::Val::set("value", value);
}

