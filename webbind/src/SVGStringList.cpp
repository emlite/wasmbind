#include <webbind/SVGStringList.hpp>


SVGStringList SVGStringList::take_ownership(Handle h) noexcept {
        return SVGStringList(h);
    }
SVGStringList SVGStringList::clone() const noexcept { return *this; }
SVGStringList::SVGStringList(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
SVGStringList::SVGStringList(const emlite::Val &val) noexcept: emlite::Val(val) {}


unsigned long SVGStringList::length() const {
    return emlite::Val::get("length").as<unsigned long>();
}

unsigned long SVGStringList::numberOfItems() const {
    return emlite::Val::get("numberOfItems").as<unsigned long>();
}

jsbind::Undefined SVGStringList::clear() {
    return emlite::Val::call("clear").as<jsbind::Undefined>();
}

jsbind::DOMString SVGStringList::initialize(const jsbind::DOMString& newItem) {
    return emlite::Val::call("initialize", newItem).as<jsbind::DOMString>();
}

jsbind::DOMString SVGStringList::getItem(unsigned long index) {
    return emlite::Val::call("getItem", index).as<jsbind::DOMString>();
}

jsbind::DOMString SVGStringList::insertItemBefore(const jsbind::DOMString& newItem, unsigned long index) {
    return emlite::Val::call("insertItemBefore", newItem, index).as<jsbind::DOMString>();
}

jsbind::DOMString SVGStringList::replaceItem(const jsbind::DOMString& newItem, unsigned long index) {
    return emlite::Val::call("replaceItem", newItem, index).as<jsbind::DOMString>();
}

jsbind::DOMString SVGStringList::removeItem(unsigned long index) {
    return emlite::Val::call("removeItem", index).as<jsbind::DOMString>();
}

jsbind::DOMString SVGStringList::appendItem(const jsbind::DOMString& newItem) {
    return emlite::Val::call("appendItem", newItem).as<jsbind::DOMString>();
}

