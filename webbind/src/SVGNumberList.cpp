#include <webbind/SVGNumberList.hpp>
#include <webbind/SVGNumber.hpp>


SVGNumberList SVGNumberList::take_ownership(Handle h) noexcept {
        return SVGNumberList(h);
    }
SVGNumberList SVGNumberList::clone() const noexcept { return *this; }
emlite::Val SVGNumberList::instance() noexcept { return emlite::Val::global("SVGNumberList"); }
SVGNumberList::SVGNumberList(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
SVGNumberList::SVGNumberList(const emlite::Val &val) noexcept: emlite::Val(val) {}


unsigned long SVGNumberList::length() const {
    return emlite::Val::get("length").as<unsigned long>();
}

unsigned long SVGNumberList::numberOfItems() const {
    return emlite::Val::get("numberOfItems").as<unsigned long>();
}

jsbind::Undefined SVGNumberList::clear() {
    return emlite::Val::call("clear").as<jsbind::Undefined>();
}

SVGNumber SVGNumberList::initialize(const SVGNumber& newItem) {
    return emlite::Val::call("initialize", newItem).as<SVGNumber>();
}

SVGNumber SVGNumberList::getItem(unsigned long index) {
    return emlite::Val::call("getItem", index).as<SVGNumber>();
}

SVGNumber SVGNumberList::insertItemBefore(const SVGNumber& newItem, unsigned long index) {
    return emlite::Val::call("insertItemBefore", newItem, index).as<SVGNumber>();
}

SVGNumber SVGNumberList::replaceItem(const SVGNumber& newItem, unsigned long index) {
    return emlite::Val::call("replaceItem", newItem, index).as<SVGNumber>();
}

SVGNumber SVGNumberList::removeItem(unsigned long index) {
    return emlite::Val::call("removeItem", index).as<SVGNumber>();
}

SVGNumber SVGNumberList::appendItem(const SVGNumber& newItem) {
    return emlite::Val::call("appendItem", newItem).as<SVGNumber>();
}

