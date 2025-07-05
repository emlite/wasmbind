#include <webbind/HTMLTableColElement.hpp>


HTMLTableColElement HTMLTableColElement::take_ownership(Handle h) noexcept {
        return HTMLTableColElement(h);
    }
HTMLTableColElement HTMLTableColElement::clone() const noexcept { return *this; }
HTMLTableColElement::HTMLTableColElement(Handle h) noexcept : HTMLElement(emlite::Val::take_ownership(h)) {}
HTMLTableColElement::HTMLTableColElement(const emlite::Val &val) noexcept: HTMLElement(val) {}


HTMLTableColElement::HTMLTableColElement() : HTMLElement(emlite::Val::global("HTMLTableColElement").new_()) {}

unsigned long HTMLTableColElement::span() const {
    return HTMLElement::get("span").as<unsigned long>();
}

void HTMLTableColElement::span(unsigned long value) {
    HTMLElement::set("span", value);
}

jsbind::DOMString HTMLTableColElement::align() const {
    return HTMLElement::get("align").as<jsbind::DOMString>();
}

void HTMLTableColElement::align(const jsbind::DOMString& value) {
    HTMLElement::set("align", value);
}

jsbind::DOMString HTMLTableColElement::ch() const {
    return HTMLElement::get("ch").as<jsbind::DOMString>();
}

void HTMLTableColElement::ch(const jsbind::DOMString& value) {
    HTMLElement::set("ch", value);
}

jsbind::DOMString HTMLTableColElement::chOff() const {
    return HTMLElement::get("chOff").as<jsbind::DOMString>();
}

void HTMLTableColElement::chOff(const jsbind::DOMString& value) {
    HTMLElement::set("chOff", value);
}

jsbind::DOMString HTMLTableColElement::vAlign() const {
    return HTMLElement::get("vAlign").as<jsbind::DOMString>();
}

void HTMLTableColElement::vAlign(const jsbind::DOMString& value) {
    HTMLElement::set("vAlign", value);
}

jsbind::DOMString HTMLTableColElement::width() const {
    return HTMLElement::get("width").as<jsbind::DOMString>();
}

void HTMLTableColElement::width(const jsbind::DOMString& value) {
    HTMLElement::set("width", value);
}

