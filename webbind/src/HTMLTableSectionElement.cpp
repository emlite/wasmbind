#include <webbind/HTMLTableSectionElement.hpp>
#include <webbind/HTMLCollection.hpp>
#include <webbind/HTMLTableRowElement.hpp>


HTMLTableSectionElement HTMLTableSectionElement::take_ownership(Handle h) noexcept {
        return HTMLTableSectionElement(h);
    }
HTMLTableSectionElement HTMLTableSectionElement::clone() const noexcept { return *this; }
emlite::Val HTMLTableSectionElement::instance() noexcept { return emlite::Val::global("HTMLTableSectionElement"); }
HTMLTableSectionElement::HTMLTableSectionElement(Handle h) noexcept : HTMLElement(emlite::Val::take_ownership(h)) {}
HTMLTableSectionElement::HTMLTableSectionElement(const emlite::Val &val) noexcept: HTMLElement(val) {}


HTMLTableSectionElement::HTMLTableSectionElement() : HTMLElement(emlite::Val::global("HTMLTableSectionElement").new_()) {}

HTMLCollection HTMLTableSectionElement::rows() const {
    return HTMLElement::get("rows").as<HTMLCollection>();
}

HTMLTableRowElement HTMLTableSectionElement::insertRow() {
    return HTMLElement::call("insertRow").as<HTMLTableRowElement>();
}

HTMLTableRowElement HTMLTableSectionElement::insertRow(long index) {
    return HTMLElement::call("insertRow", index).as<HTMLTableRowElement>();
}

jsbind::Undefined HTMLTableSectionElement::deleteRow(long index) {
    return HTMLElement::call("deleteRow", index).as<jsbind::Undefined>();
}

jsbind::String HTMLTableSectionElement::align() const {
    return HTMLElement::get("align").as<jsbind::String>();
}

void HTMLTableSectionElement::align(const jsbind::String& value) {
    HTMLElement::set("align", value);
}

jsbind::String HTMLTableSectionElement::ch() const {
    return HTMLElement::get("ch").as<jsbind::String>();
}

void HTMLTableSectionElement::ch(const jsbind::String& value) {
    HTMLElement::set("ch", value);
}

jsbind::String HTMLTableSectionElement::chOff() const {
    return HTMLElement::get("chOff").as<jsbind::String>();
}

void HTMLTableSectionElement::chOff(const jsbind::String& value) {
    HTMLElement::set("chOff", value);
}

jsbind::String HTMLTableSectionElement::vAlign() const {
    return HTMLElement::get("vAlign").as<jsbind::String>();
}

void HTMLTableSectionElement::vAlign(const jsbind::String& value) {
    HTMLElement::set("vAlign", value);
}

