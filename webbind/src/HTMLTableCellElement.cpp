#include <webbind/HTMLTableCellElement.hpp>


HTMLTableCellElement HTMLTableCellElement::take_ownership(Handle h) noexcept {
        return HTMLTableCellElement(h);
    }
HTMLTableCellElement HTMLTableCellElement::clone() const noexcept { return *this; }
emlite::Val HTMLTableCellElement::instance() noexcept { return emlite::Val::global("HTMLTableCellElement"); }
HTMLTableCellElement::HTMLTableCellElement(Handle h) noexcept : HTMLElement(emlite::Val::take_ownership(h)) {}
HTMLTableCellElement::HTMLTableCellElement(const emlite::Val &val) noexcept: HTMLElement(val) {}


HTMLTableCellElement::HTMLTableCellElement() : HTMLElement(emlite::Val::global("HTMLTableCellElement").new_()) {}

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

jsbind::String HTMLTableCellElement::headers() const {
    return HTMLElement::get("headers").as<jsbind::String>();
}

void HTMLTableCellElement::headers(const jsbind::String& value) {
    HTMLElement::set("headers", value);
}

long HTMLTableCellElement::cellIndex() const {
    return HTMLElement::get("cellIndex").as<long>();
}

jsbind::String HTMLTableCellElement::scope() const {
    return HTMLElement::get("scope").as<jsbind::String>();
}

void HTMLTableCellElement::scope(const jsbind::String& value) {
    HTMLElement::set("scope", value);
}

jsbind::String HTMLTableCellElement::abbr() const {
    return HTMLElement::get("abbr").as<jsbind::String>();
}

void HTMLTableCellElement::abbr(const jsbind::String& value) {
    HTMLElement::set("abbr", value);
}

jsbind::String HTMLTableCellElement::align() const {
    return HTMLElement::get("align").as<jsbind::String>();
}

void HTMLTableCellElement::align(const jsbind::String& value) {
    HTMLElement::set("align", value);
}

jsbind::String HTMLTableCellElement::axis() const {
    return HTMLElement::get("axis").as<jsbind::String>();
}

void HTMLTableCellElement::axis(const jsbind::String& value) {
    HTMLElement::set("axis", value);
}

jsbind::String HTMLTableCellElement::height() const {
    return HTMLElement::get("height").as<jsbind::String>();
}

void HTMLTableCellElement::height(const jsbind::String& value) {
    HTMLElement::set("height", value);
}

jsbind::String HTMLTableCellElement::width() const {
    return HTMLElement::get("width").as<jsbind::String>();
}

void HTMLTableCellElement::width(const jsbind::String& value) {
    HTMLElement::set("width", value);
}

jsbind::String HTMLTableCellElement::ch() const {
    return HTMLElement::get("ch").as<jsbind::String>();
}

void HTMLTableCellElement::ch(const jsbind::String& value) {
    HTMLElement::set("ch", value);
}

jsbind::String HTMLTableCellElement::chOff() const {
    return HTMLElement::get("chOff").as<jsbind::String>();
}

void HTMLTableCellElement::chOff(const jsbind::String& value) {
    HTMLElement::set("chOff", value);
}

bool HTMLTableCellElement::noWrap() const {
    return HTMLElement::get("noWrap").as<bool>();
}

void HTMLTableCellElement::noWrap(bool value) {
    HTMLElement::set("noWrap", value);
}

jsbind::String HTMLTableCellElement::vAlign() const {
    return HTMLElement::get("vAlign").as<jsbind::String>();
}

void HTMLTableCellElement::vAlign(const jsbind::String& value) {
    HTMLElement::set("vAlign", value);
}

jsbind::String HTMLTableCellElement::bgColor() const {
    return HTMLElement::get("bgColor").as<jsbind::String>();
}

void HTMLTableCellElement::bgColor(const jsbind::String& value) {
    HTMLElement::set("bgColor", value);
}

