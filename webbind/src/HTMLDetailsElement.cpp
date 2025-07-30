#include <webbind/HTMLDetailsElement.hpp>


HTMLDetailsElement HTMLDetailsElement::take_ownership(Handle h) noexcept {
        return HTMLDetailsElement(h);
    }
HTMLDetailsElement HTMLDetailsElement::clone() const noexcept { return *this; }
HTMLDetailsElement::HTMLDetailsElement(Handle h) noexcept : HTMLElement(emlite::Val::take_ownership(h)) {}
HTMLDetailsElement::HTMLDetailsElement(const emlite::Val &val) noexcept: HTMLElement(val) {}


HTMLDetailsElement::HTMLDetailsElement() : HTMLElement(emlite::Val::global("HTMLDetailsElement").new_()) {}

jsbind::String HTMLDetailsElement::name() const {
    return HTMLElement::get("name").as<jsbind::String>();
}

void HTMLDetailsElement::name(const jsbind::String& value) {
    HTMLElement::set("name", value);
}

bool HTMLDetailsElement::open() const {
    return HTMLElement::get("open").as<bool>();
}

void HTMLDetailsElement::open(bool value) {
    HTMLElement::set("open", value);
}

