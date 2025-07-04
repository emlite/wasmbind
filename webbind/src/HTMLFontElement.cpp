#include <webbind/HTMLFontElement.hpp>


HTMLFontElement HTMLFontElement::take_ownership(Handle h) noexcept {
        return HTMLFontElement(h);
    }
HTMLFontElement HTMLFontElement::clone() const noexcept { return *this; }
HTMLFontElement::HTMLFontElement(Handle h) noexcept : HTMLElement(emlite::Val::take_ownership(h)) {}
HTMLFontElement::HTMLFontElement(const emlite::Val &val) noexcept: HTMLElement(val) {}


HTMLFontElement::HTMLFontElement(): HTMLElement(emlite::Val::global("HTMLFontElement").new_()) {}

jsbind::DOMString HTMLFontElement::color() const {
    return HTMLElement::get("color").as<jsbind::DOMString>();
}

void HTMLFontElement::color(const jsbind::DOMString& value) {
    HTMLElement::set("color", value);
}

jsbind::DOMString HTMLFontElement::face() const {
    return HTMLElement::get("face").as<jsbind::DOMString>();
}

void HTMLFontElement::face(const jsbind::DOMString& value) {
    HTMLElement::set("face", value);
}

jsbind::DOMString HTMLFontElement::size() const {
    return HTMLElement::get("size").as<jsbind::DOMString>();
}

void HTMLFontElement::size(const jsbind::DOMString& value) {
    HTMLElement::set("size", value);
}

