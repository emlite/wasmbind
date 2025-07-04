#include <webbind/HTMLDivElement.hpp>


HTMLDivElement HTMLDivElement::take_ownership(Handle h) noexcept {
        return HTMLDivElement(h);
    }
HTMLDivElement HTMLDivElement::clone() const noexcept { return *this; }
HTMLDivElement::HTMLDivElement(Handle h) noexcept : HTMLElement(emlite::Val::take_ownership(h)) {}
HTMLDivElement::HTMLDivElement(const emlite::Val &val) noexcept: HTMLElement(val) {}


HTMLDivElement::HTMLDivElement(): HTMLElement(emlite::Val::global("HTMLDivElement").new_()) {}

jsbind::DOMString HTMLDivElement::align() const {
    return HTMLElement::get("align").as<jsbind::DOMString>();
}

void HTMLDivElement::align(const jsbind::DOMString& value) {
    HTMLElement::set("align", value);
}

