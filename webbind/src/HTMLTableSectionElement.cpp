#include <webbind/HTMLTableSectionElement.hpp>
#include <webbind/HTMLCollection.hpp>
#include <webbind/HTMLTableRowElement.hpp>


HTMLTableSectionElement HTMLTableSectionElement::take_ownership(Handle h) noexcept {
        return HTMLTableSectionElement(h);
    }
HTMLTableSectionElement HTMLTableSectionElement::clone() const noexcept { return *this; }
HTMLTableSectionElement::HTMLTableSectionElement(Handle h) noexcept : HTMLElement(emlite::Val::take_ownership(h)) {}
HTMLTableSectionElement::HTMLTableSectionElement(const emlite::Val &val) noexcept: HTMLElement(val) {}


HTMLTableSectionElement::HTMLTableSectionElement(): HTMLElement(emlite::Val::global("HTMLTableSectionElement").new_()) {}

HTMLCollection HTMLTableSectionElement::rows() const {
    return HTMLElement::get("rows").as<HTMLCollection>();
}

HTMLTableRowElement HTMLTableSectionElement::insertRow(long index) {
    return HTMLElement::call("insertRow", index).as<HTMLTableRowElement>();
}

jsbind::Undefined HTMLTableSectionElement::deleteRow(long index) {
    return HTMLElement::call("deleteRow", index).as<jsbind::Undefined>();
}

jsbind::DOMString HTMLTableSectionElement::align() const {
    return HTMLElement::get("align").as<jsbind::DOMString>();
}

void HTMLTableSectionElement::align(const jsbind::DOMString& value) {
    HTMLElement::set("align", value);
}

jsbind::DOMString HTMLTableSectionElement::ch() const {
    return HTMLElement::get("ch").as<jsbind::DOMString>();
}

void HTMLTableSectionElement::ch(const jsbind::DOMString& value) {
    HTMLElement::set("ch", value);
}

jsbind::DOMString HTMLTableSectionElement::chOff() const {
    return HTMLElement::get("chOff").as<jsbind::DOMString>();
}

void HTMLTableSectionElement::chOff(const jsbind::DOMString& value) {
    HTMLElement::set("chOff", value);
}

jsbind::DOMString HTMLTableSectionElement::vAlign() const {
    return HTMLElement::get("vAlign").as<jsbind::DOMString>();
}

void HTMLTableSectionElement::vAlign(const jsbind::DOMString& value) {
    HTMLElement::set("vAlign", value);
}

