#include <webbind/DOMTokenList.hpp>

namespace webbind {

DOMTokenList DOMTokenList::take_ownership(Handle h) noexcept {
        return DOMTokenList(h);
    }
DOMTokenList DOMTokenList::clone() const noexcept { return *this; }
emlite::Val DOMTokenList::instance() noexcept { return emlite::Val::global("DOMTokenList"); }
DOMTokenList::DOMTokenList(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
DOMTokenList::DOMTokenList(const emlite::Val &val) noexcept: emlite::Val(val) {}

unsigned long DOMTokenList::length() const {
    return emlite::Val::get("length").as<unsigned long>();
}

jsbind::String DOMTokenList::item(unsigned long index) {
    return emlite::Val::call("item", index).as<jsbind::String>();
}

bool DOMTokenList::contains(const jsbind::String& token) {
    return emlite::Val::call("contains", token).as<bool>();
}

jsbind::Undefined DOMTokenList::add(const jsbind::String& tokens) {
    return emlite::Val::call("add", tokens).as<jsbind::Undefined>();
}

jsbind::Undefined DOMTokenList::remove(const jsbind::String& tokens) {
    return emlite::Val::call("remove", tokens).as<jsbind::Undefined>();
}

bool DOMTokenList::toggle(const jsbind::String& token) {
    return emlite::Val::call("toggle", token).as<bool>();
}

bool DOMTokenList::toggle(const jsbind::String& token, bool force) {
    return emlite::Val::call("toggle", token, force).as<bool>();
}

bool DOMTokenList::replace(const jsbind::String& token, const jsbind::String& newToken) {
    return emlite::Val::call("replace", token, newToken).as<bool>();
}

bool DOMTokenList::supports(const jsbind::String& token) {
    return emlite::Val::call("supports", token).as<bool>();
}

jsbind::String DOMTokenList::value() const {
    return emlite::Val::get("value").as<jsbind::String>();
}

void DOMTokenList::value(const jsbind::String& value) {
    emlite::Val::set("value", value);
}


} // namespace webbind