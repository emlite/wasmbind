#include <webbind/SVGTransformList.hpp>
#include <webbind/SVGTransform.hpp>
#include <webbind/SVGSVGElement.hpp>


SVGTransformList SVGTransformList::take_ownership(Handle h) noexcept {
        return SVGTransformList(h);
    }
SVGTransformList SVGTransformList::clone() const noexcept { return *this; }
emlite::Val SVGTransformList::instance() noexcept { return emlite::Val::global("SVGTransformList"); }
SVGTransformList::SVGTransformList(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
SVGTransformList::SVGTransformList(const emlite::Val &val) noexcept: emlite::Val(val) {}


unsigned long SVGTransformList::length() const {
    return emlite::Val::get("length").as<unsigned long>();
}

unsigned long SVGTransformList::numberOfItems() const {
    return emlite::Val::get("numberOfItems").as<unsigned long>();
}

jsbind::Undefined SVGTransformList::clear() {
    return emlite::Val::call("clear").as<jsbind::Undefined>();
}

SVGTransform SVGTransformList::initialize(const SVGTransform& newItem) {
    return emlite::Val::call("initialize", newItem).as<SVGTransform>();
}

SVGTransform SVGTransformList::getItem(unsigned long index) {
    return emlite::Val::call("getItem", index).as<SVGTransform>();
}

SVGTransform SVGTransformList::insertItemBefore(const SVGTransform& newItem, unsigned long index) {
    return emlite::Val::call("insertItemBefore", newItem, index).as<SVGTransform>();
}

SVGTransform SVGTransformList::replaceItem(const SVGTransform& newItem, unsigned long index) {
    return emlite::Val::call("replaceItem", newItem, index).as<SVGTransform>();
}

SVGTransform SVGTransformList::removeItem(unsigned long index) {
    return emlite::Val::call("removeItem", index).as<SVGTransform>();
}

SVGTransform SVGTransformList::appendItem(const SVGTransform& newItem) {
    return emlite::Val::call("appendItem", newItem).as<SVGTransform>();
}

SVGTransform SVGTransformList::createSVGTransformFromMatrix() {
    return emlite::Val::call("createSVGTransformFromMatrix").as<SVGTransform>();
}

SVGTransform SVGTransformList::createSVGTransformFromMatrix(const DOMMatrix2DInit& matrix) {
    return emlite::Val::call("createSVGTransformFromMatrix", matrix).as<SVGTransform>();
}

SVGTransform SVGTransformList::consolidate() {
    return emlite::Val::call("consolidate").as<SVGTransform>();
}

