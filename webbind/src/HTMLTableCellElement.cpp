#include <webbind/HTMLTableCellElement.hpp>


HTMLTableCellElement HTMLTableCellElement::take_ownership(Handle h) noexcept {
        return HTMLTableCellElement(h);
    }
HTMLTableCellElement HTMLTableCellElement::clone() const noexcept { return *this; }
HTMLTableCellElement::HTMLTableCellElement(Handle h) noexcept : HTMLElement(emlite::Val::take_ownership(h)) {}
HTMLTableCellElement::HTMLTableCellElement(const emlite::Val &val) noexcept: HTMLElement(val) {}


HTMLTableCellElement::HTMLTableCellElement(): HTMLElement(emlite::Val::global("HTMLTableCellElement").new_()) {}

unsigned long HTMLTableCellElement::colSpan() const {
    return HTMLElement::get("colSpan").as<unsigned long>();
}

void HTMLTableCellElement::colSpan(unsigned long value) {
    HTMLElement::set("colSpan", value);
}

unsigned long HTMLTableCellElement::rowSpan() const {
    return HTMLElement::get("rowSpan").as<unsigned long>();
}

void HTMLTableCellElement::rowSpan(unsigned long value) {
    HTMLElement::set("rowSpan", value);
}

jsbind::DOMString HTMLTableCellElement::headers() const {
    return HTMLElement::get("headers").as<jsbind::DOMString>();
}

void HTMLTableCellElement::headers(const jsbind::DOMString& value) {
    HTMLElement::set("headers", value);
}

long HTMLTableCellElement::cellIndex() const {
    return HTMLElement::get("cellIndex").as<long>();
}

jsbind::DOMString HTMLTableCellElement::scope() const {
    return HTMLElement::get("scope").as<jsbind::DOMString>();
}

void HTMLTableCellElement::scope(const jsbind::DOMString& value) {
    HTMLElement::set("scope", value);
}

jsbind::DOMString HTMLTableCellElement::abbr() const {
    return HTMLElement::get("abbr").as<jsbind::DOMString>();
}

void HTMLTableCellElement::abbr(const jsbind::DOMString& value) {
    HTMLElement::set("abbr", value);
}

jsbind::DOMString HTMLTableCellElement::align() const {
    return HTMLElement::get("align").as<jsbind::DOMString>();
}

void HTMLTableCellElement::align(const jsbind::DOMString& value) {
    HTMLElement::set("align", value);
}

jsbind::DOMString HTMLTableCellElement::axis() const {
    return HTMLElement::get("axis").as<jsbind::DOMString>();
}

void HTMLTableCellElement::axis(const jsbind::DOMString& value) {
    HTMLElement::set("axis", value);
}

jsbind::DOMString HTMLTableCellElement::height() const {
    return HTMLElement::get("height").as<jsbind::DOMString>();
}

void HTMLTableCellElement::height(const jsbind::DOMString& value) {
    HTMLElement::set("height", value);
}

jsbind::DOMString HTMLTableCellElement::width() const {
    return HTMLElement::get("width").as<jsbind::DOMString>();
}

void HTMLTableCellElement::width(const jsbind::DOMString& value) {
    HTMLElement::set("width", value);
}

jsbind::DOMString HTMLTableCellElement::ch() const {
    return HTMLElement::get("ch").as<jsbind::DOMString>();
}

void HTMLTableCellElement::ch(const jsbind::DOMString& value) {
    HTMLElement::set("ch", value);
}

jsbind::DOMString HTMLTableCellElement::chOff() const {
    return HTMLElement::get("chOff").as<jsbind::DOMString>();
}

void HTMLTableCellElement::chOff(const jsbind::DOMString& value) {
    HTMLElement::set("chOff", value);
}

bool HTMLTableCellElement::noWrap() const {
    return HTMLElement::get("noWrap").as<bool>();
}

void HTMLTableCellElement::noWrap(bool value) {
    HTMLElement::set("noWrap", value);
}

jsbind::DOMString HTMLTableCellElement::vAlign() const {
    return HTMLElement::get("vAlign").as<jsbind::DOMString>();
}

void HTMLTableCellElement::vAlign(const jsbind::DOMString& value) {
    HTMLElement::set("vAlign", value);
}

jsbind::DOMString HTMLTableCellElement::bgColor() const {
    return HTMLElement::get("bgColor").as<jsbind::DOMString>();
}

void HTMLTableCellElement::bgColor(const jsbind::DOMString& value) {
    HTMLElement::set("bgColor", value);
}

