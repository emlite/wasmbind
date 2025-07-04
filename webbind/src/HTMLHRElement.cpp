#include <webbind/HTMLHRElement.hpp>


HTMLHRElement HTMLHRElement::take_ownership(Handle h) noexcept {
        return HTMLHRElement(h);
    }
HTMLHRElement HTMLHRElement::clone() const noexcept { return *this; }
HTMLHRElement::HTMLHRElement(Handle h) noexcept : HTMLElement(emlite::Val::take_ownership(h)) {}
HTMLHRElement::HTMLHRElement(const emlite::Val &val) noexcept: HTMLElement(val) {}


HTMLHRElement::HTMLHRElement(): HTMLElement(emlite::Val::global("HTMLHRElement").new_()) {}

jsbind::DOMString HTMLHRElement::align() const {
    return HTMLElement::get("align").as<jsbind::DOMString>();
}

void HTMLHRElement::align(const jsbind::DOMString& value) {
    HTMLElement::set("align", value);
}

jsbind::DOMString HTMLHRElement::color() const {
    return HTMLElement::get("color").as<jsbind::DOMString>();
}

void HTMLHRElement::color(const jsbind::DOMString& value) {
    HTMLElement::set("color", value);
}

bool HTMLHRElement::noShade() const {
    return HTMLElement::get("noShade").as<bool>();
}

void HTMLHRElement::noShade(bool value) {
    HTMLElement::set("noShade", value);
}

jsbind::DOMString HTMLHRElement::size() const {
    return HTMLElement::get("size").as<jsbind::DOMString>();
}

void HTMLHRElement::size(const jsbind::DOMString& value) {
    HTMLElement::set("size", value);
}

jsbind::DOMString HTMLHRElement::width() const {
    return HTMLElement::get("width").as<jsbind::DOMString>();
}

void HTMLHRElement::width(const jsbind::DOMString& value) {
    HTMLElement::set("width", value);
}

