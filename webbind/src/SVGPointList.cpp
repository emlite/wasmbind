#include <webbind/SVGPointList.hpp>
#include <webbind/DOMPoint.hpp>

namespace webbind {

SVGPointList SVGPointList::take_ownership(Handle h) noexcept {
        return SVGPointList(h);
    }
SVGPointList SVGPointList::clone() const noexcept { return *this; }
emlite::Val SVGPointList::instance() noexcept { return emlite::Val::global("SVGPointList"); }
SVGPointList::SVGPointList(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
SVGPointList::SVGPointList(const emlite::Val &val) noexcept: emlite::Val(val) {}

unsigned long SVGPointList::length() const {
    return emlite::Val::get("length").as<unsigned long>();
}

unsigned long SVGPointList::numberOfItems() const {
    return emlite::Val::get("numberOfItems").as<unsigned long>();
}

jsbind::Undefined SVGPointList::clear() {
    return emlite::Val::call("clear").as<jsbind::Undefined>();
}

DOMPoint SVGPointList::initialize(const DOMPoint& newItem) {
    return emlite::Val::call("initialize", newItem).as<DOMPoint>();
}

DOMPoint SVGPointList::getItem(unsigned long index) {
    return emlite::Val::call("getItem", index).as<DOMPoint>();
}

DOMPoint SVGPointList::insertItemBefore(const DOMPoint& newItem, unsigned long index) {
    return emlite::Val::call("insertItemBefore", newItem, index).as<DOMPoint>();
}

DOMPoint SVGPointList::replaceItem(const DOMPoint& newItem, unsigned long index) {
    return emlite::Val::call("replaceItem", newItem, index).as<DOMPoint>();
}

DOMPoint SVGPointList::removeItem(unsigned long index) {
    return emlite::Val::call("removeItem", index).as<DOMPoint>();
}

DOMPoint SVGPointList::appendItem(const DOMPoint& newItem) {
    return emlite::Val::call("appendItem", newItem).as<DOMPoint>();
}


} // namespace webbind