#include <webbind/HTMLTableRowElement.hpp>
#include <webbind/HTMLCollection.hpp>
#include <webbind/HTMLTableCellElement.hpp>


HTMLTableRowElement HTMLTableRowElement::take_ownership(Handle h) noexcept {
        return HTMLTableRowElement(h);
    }
HTMLTableRowElement HTMLTableRowElement::clone() const noexcept { return *this; }
HTMLTableRowElement::HTMLTableRowElement(Handle h) noexcept : HTMLElement(emlite::Val::take_ownership(h)) {}
HTMLTableRowElement::HTMLTableRowElement(const emlite::Val &val) noexcept: HTMLElement(val) {}


HTMLTableRowElement::HTMLTableRowElement() : HTMLElement(emlite::Val::global("HTMLTableRowElement").new_()) {}

long HTMLTableRowElement::rowIndex() const {
    return HTMLElement::get("rowIndex").as<long>();
}

long HTMLTableRowElement::sectionRowIndex() const {
    return HTMLElement::get("sectionRowIndex").as<long>();
}

HTMLCollection HTMLTableRowElement::cells() const {
    return HTMLElement::get("cells").as<HTMLCollection>();
}

HTMLTableCellElement HTMLTableRowElement::insertCell() {
    return HTMLElement::call("insertCell").as<HTMLTableCellElement>();
}

HTMLTableCellElement HTMLTableRowElement::insertCell(long index) {
    return HTMLElement::call("insertCell", index).as<HTMLTableCellElement>();
}

jsbind::Undefined HTMLTableRowElement::deleteCell(long index) {
    return HTMLElement::call("deleteCell", index).as<jsbind::Undefined>();
}

jsbind::DOMString HTMLTableRowElement::align() const {
    return HTMLElement::get("align").as<jsbind::DOMString>();
}

void HTMLTableRowElement::align(const jsbind::DOMString& value) {
    HTMLElement::set("align", value);
}

jsbind::DOMString HTMLTableRowElement::ch() const {
    return HTMLElement::get("ch").as<jsbind::DOMString>();
}

void HTMLTableRowElement::ch(const jsbind::DOMString& value) {
    HTMLElement::set("ch", value);
}

jsbind::DOMString HTMLTableRowElement::chOff() const {
    return HTMLElement::get("chOff").as<jsbind::DOMString>();
}

void HTMLTableRowElement::chOff(const jsbind::DOMString& value) {
    HTMLElement::set("chOff", value);
}

jsbind::DOMString HTMLTableRowElement::vAlign() const {
    return HTMLElement::get("vAlign").as<jsbind::DOMString>();
}

void HTMLTableRowElement::vAlign(const jsbind::DOMString& value) {
    HTMLElement::set("vAlign", value);
}

jsbind::DOMString HTMLTableRowElement::bgColor() const {
    return HTMLElement::get("bgColor").as<jsbind::DOMString>();
}

void HTMLTableRowElement::bgColor(const jsbind::DOMString& value) {
    HTMLElement::set("bgColor", value);
}

