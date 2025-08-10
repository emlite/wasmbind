#include <webbind/HTMLTableColElement.hpp>

namespace webbind {

HTMLTableColElement HTMLTableColElement::take_ownership(Handle h) noexcept {
        return HTMLTableColElement(h);
    }
HTMLTableColElement HTMLTableColElement::clone() const noexcept { return *this; }
emlite::Val HTMLTableColElement::instance() noexcept { return emlite::Val::global("HTMLTableColElement"); }
HTMLTableColElement::HTMLTableColElement(Handle h) noexcept : HTMLElement(emlite::Val::take_ownership(h)) {}
HTMLTableColElement::HTMLTableColElement(const emlite::Val &val) noexcept: HTMLElement(val) {}

HTMLTableColElement::HTMLTableColElement() : HTMLElement(emlite::Val::global("HTMLTableColElement").new_()) {}

unsigned long HTMLTableColElement::span() const {
    return HTMLElement::get("span").as<unsigned long>();
}

void HTMLTableColElement::span(unsigned long value) {
    HTMLElement::set("span", value);
}

jsbind::String HTMLTableColElement::align() const {
    return HTMLElement::get("align").as<jsbind::String>();
}

void HTMLTableColElement::align(const jsbind::String& value) {
    HTMLElement::set("align", value);
}

jsbind::String HTMLTableColElement::ch() const {
    return HTMLElement::get("ch").as<jsbind::String>();
}

void HTMLTableColElement::ch(const jsbind::String& value) {
    HTMLElement::set("ch", value);
}

jsbind::String HTMLTableColElement::chOff() const {
    return HTMLElement::get("chOff").as<jsbind::String>();
}

void HTMLTableColElement::chOff(const jsbind::String& value) {
    HTMLElement::set("chOff", value);
}

jsbind::String HTMLTableColElement::vAlign() const {
    return HTMLElement::get("vAlign").as<jsbind::String>();
}

void HTMLTableColElement::vAlign(const jsbind::String& value) {
    HTMLElement::set("vAlign", value);
}

jsbind::String HTMLTableColElement::width() const {
    return HTMLElement::get("width").as<jsbind::String>();
}

void HTMLTableColElement::width(const jsbind::String& value) {
    HTMLElement::set("width", value);
}


} // namespace webbind