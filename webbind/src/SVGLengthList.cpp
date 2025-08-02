#include <webbind/SVGLengthList.hpp>
#include <webbind/SVGLength.hpp>


SVGLengthList SVGLengthList::take_ownership(Handle h) noexcept {
        return SVGLengthList(h);
    }
SVGLengthList SVGLengthList::clone() const noexcept { return *this; }
emlite::Val SVGLengthList::instance() noexcept { return emlite::Val::global("SVGLengthList"); }
SVGLengthList::SVGLengthList(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
SVGLengthList::SVGLengthList(const emlite::Val &val) noexcept: emlite::Val(val) {}


unsigned long SVGLengthList::length() const {
    return emlite::Val::get("length").as<unsigned long>();
}

unsigned long SVGLengthList::numberOfItems() const {
    return emlite::Val::get("numberOfItems").as<unsigned long>();
}

jsbind::Undefined SVGLengthList::clear() {
    return emlite::Val::call("clear").as<jsbind::Undefined>();
}

SVGLength SVGLengthList::initialize(const SVGLength& newItem) {
    return emlite::Val::call("initialize", newItem).as<SVGLength>();
}

SVGLength SVGLengthList::getItem(unsigned long index) {
    return emlite::Val::call("getItem", index).as<SVGLength>();
}

SVGLength SVGLengthList::insertItemBefore(const SVGLength& newItem, unsigned long index) {
    return emlite::Val::call("insertItemBefore", newItem, index).as<SVGLength>();
}

SVGLength SVGLengthList::replaceItem(const SVGLength& newItem, unsigned long index) {
    return emlite::Val::call("replaceItem", newItem, index).as<SVGLength>();
}

SVGLength SVGLengthList::removeItem(unsigned long index) {
    return emlite::Val::call("removeItem", index).as<SVGLength>();
}

SVGLength SVGLengthList::appendItem(const SVGLength& newItem) {
    return emlite::Val::call("appendItem", newItem).as<SVGLength>();
}

