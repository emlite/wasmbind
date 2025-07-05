#include <webbind/HTMLLIElement.hpp>


HTMLLIElement HTMLLIElement::take_ownership(Handle h) noexcept {
        return HTMLLIElement(h);
    }
HTMLLIElement HTMLLIElement::clone() const noexcept { return *this; }
HTMLLIElement::HTMLLIElement(Handle h) noexcept : HTMLElement(emlite::Val::take_ownership(h)) {}
HTMLLIElement::HTMLLIElement(const emlite::Val &val) noexcept: HTMLElement(val) {}


HTMLLIElement::HTMLLIElement() : HTMLElement(emlite::Val::global("HTMLLIElement").new_()) {}

long HTMLLIElement::value() const {
    return HTMLElement::get("value").as<long>();
}

void HTMLLIElement::value(long value) {
    HTMLElement::set("value", value);
}

jsbind::DOMString HTMLLIElement::type() const {
    return HTMLElement::get("type").as<jsbind::DOMString>();
}

void HTMLLIElement::type(const jsbind::DOMString& value) {
    HTMLElement::set("type", value);
}

