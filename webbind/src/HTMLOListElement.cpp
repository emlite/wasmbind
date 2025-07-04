#include <webbind/HTMLOListElement.hpp>


HTMLOListElement HTMLOListElement::take_ownership(Handle h) noexcept {
        return HTMLOListElement(h);
    }
HTMLOListElement HTMLOListElement::clone() const noexcept { return *this; }
HTMLOListElement::HTMLOListElement(Handle h) noexcept : HTMLElement(emlite::Val::take_ownership(h)) {}
HTMLOListElement::HTMLOListElement(const emlite::Val &val) noexcept: HTMLElement(val) {}


HTMLOListElement::HTMLOListElement(): HTMLElement(emlite::Val::global("HTMLOListElement").new_()) {}

bool HTMLOListElement::reversed() const {
    return HTMLElement::get("reversed").as<bool>();
}

void HTMLOListElement::reversed(bool value) {
    HTMLElement::set("reversed", value);
}

long HTMLOListElement::start() const {
    return HTMLElement::get("start").as<long>();
}

void HTMLOListElement::start(long value) {
    HTMLElement::set("start", value);
}

jsbind::DOMString HTMLOListElement::type() const {
    return HTMLElement::get("type").as<jsbind::DOMString>();
}

void HTMLOListElement::type(const jsbind::DOMString& value) {
    HTMLElement::set("type", value);
}

bool HTMLOListElement::compact() const {
    return HTMLElement::get("compact").as<bool>();
}

void HTMLOListElement::compact(bool value) {
    HTMLElement::set("compact", value);
}

