#include <webbind/HTMLUListElement.hpp>


HTMLUListElement HTMLUListElement::take_ownership(Handle h) noexcept {
        return HTMLUListElement(h);
    }
HTMLUListElement HTMLUListElement::clone() const noexcept { return *this; }
HTMLUListElement::HTMLUListElement(Handle h) noexcept : HTMLElement(emlite::Val::take_ownership(h)) {}
HTMLUListElement::HTMLUListElement(const emlite::Val &val) noexcept: HTMLElement(val) {}


HTMLUListElement::HTMLUListElement() : HTMLElement(emlite::Val::global("HTMLUListElement").new_()) {}

bool HTMLUListElement::compact() const {
    return HTMLElement::get("compact").as<bool>();
}

void HTMLUListElement::compact(bool value) {
    HTMLElement::set("compact", value);
}

jsbind::DOMString HTMLUListElement::type() const {
    return HTMLElement::get("type").as<jsbind::DOMString>();
}

void HTMLUListElement::type(const jsbind::DOMString& value) {
    HTMLElement::set("type", value);
}

