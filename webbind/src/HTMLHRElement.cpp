#include <webbind/HTMLHRElement.hpp>


HTMLHRElement HTMLHRElement::take_ownership(Handle h) noexcept {
        return HTMLHRElement(h);
    }
HTMLHRElement HTMLHRElement::clone() const noexcept { return *this; }
HTMLHRElement::HTMLHRElement(Handle h) noexcept : HTMLElement(emlite::Val::take_ownership(h)) {}
HTMLHRElement::HTMLHRElement(const emlite::Val &val) noexcept: HTMLElement(val) {}


HTMLHRElement::HTMLHRElement() : HTMLElement(emlite::Val::global("HTMLHRElement").new_()) {}

jsbind::String HTMLHRElement::align() const {
    return HTMLElement::get("align").as<jsbind::String>();
}

void HTMLHRElement::align(const jsbind::String& value) {
    HTMLElement::set("align", value);
}

jsbind::String HTMLHRElement::color() const {
    return HTMLElement::get("color").as<jsbind::String>();
}

void HTMLHRElement::color(const jsbind::String& value) {
    HTMLElement::set("color", value);
}

bool HTMLHRElement::noShade() const {
    return HTMLElement::get("noShade").as<bool>();
}

void HTMLHRElement::noShade(bool value) {
    HTMLElement::set("noShade", value);
}

jsbind::String HTMLHRElement::size() const {
    return HTMLElement::get("size").as<jsbind::String>();
}

void HTMLHRElement::size(const jsbind::String& value) {
    HTMLElement::set("size", value);
}

jsbind::String HTMLHRElement::width() const {
    return HTMLElement::get("width").as<jsbind::String>();
}

void HTMLHRElement::width(const jsbind::String& value) {
    HTMLElement::set("width", value);
}

