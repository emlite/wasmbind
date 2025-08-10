#include <webbind/SVGStringList.hpp>

namespace webbind {

SVGStringList SVGStringList::take_ownership(Handle h) noexcept {
    return SVGStringList(h);
}

SVGStringList SVGStringList::clone() const noexcept { return *this; }

emlite::Val SVGStringList::instance() noexcept { return emlite::Val::global("SVGStringList"); }

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

jsbind::String SVGStringList::initialize(const jsbind::String& newItem) {
    return emlite::Val::call("initialize", newItem).as<jsbind::String>();
}

jsbind::String SVGStringList::getItem(unsigned long index) {
    return emlite::Val::call("getItem", index).as<jsbind::String>();
}

jsbind::String SVGStringList::insertItemBefore(const jsbind::String& newItem, unsigned long index) {
    return emlite::Val::call("insertItemBefore", newItem, index).as<jsbind::String>();
}

jsbind::String SVGStringList::replaceItem(const jsbind::String& newItem, unsigned long index) {
    return emlite::Val::call("replaceItem", newItem, index).as<jsbind::String>();
}

jsbind::String SVGStringList::removeItem(unsigned long index) {
    return emlite::Val::call("removeItem", index).as<jsbind::String>();
}

jsbind::String SVGStringList::appendItem(const jsbind::String& newItem) {
    return emlite::Val::call("appendItem", newItem).as<jsbind::String>();
}


} // namespace webbind