#include <webbind/HTMLOptGroupElement.hpp>


HTMLOptGroupElement HTMLOptGroupElement::take_ownership(Handle h) noexcept {
        return HTMLOptGroupElement(h);
    }
HTMLOptGroupElement HTMLOptGroupElement::clone() const noexcept { return *this; }
HTMLOptGroupElement::HTMLOptGroupElement(Handle h) noexcept : HTMLElement(emlite::Val::take_ownership(h)) {}
HTMLOptGroupElement::HTMLOptGroupElement(const emlite::Val &val) noexcept: HTMLElement(val) {}


HTMLOptGroupElement::HTMLOptGroupElement(): HTMLElement(emlite::Val::global("HTMLOptGroupElement").new_()) {}

bool HTMLOptGroupElement::disabled() const {
    return HTMLElement::get("disabled").as<bool>();
}

void HTMLOptGroupElement::disabled(bool value) {
    HTMLElement::set("disabled", value);
}

jsbind::DOMString HTMLOptGroupElement::label() const {
    return HTMLElement::get("label").as<jsbind::DOMString>();
}

void HTMLOptGroupElement::label(const jsbind::DOMString& value) {
    HTMLElement::set("label", value);
}

