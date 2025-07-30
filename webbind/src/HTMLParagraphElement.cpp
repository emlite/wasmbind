#include <webbind/HTMLParagraphElement.hpp>


HTMLParagraphElement HTMLParagraphElement::take_ownership(Handle h) noexcept {
        return HTMLParagraphElement(h);
    }
HTMLParagraphElement HTMLParagraphElement::clone() const noexcept { return *this; }
HTMLParagraphElement::HTMLParagraphElement(Handle h) noexcept : HTMLElement(emlite::Val::take_ownership(h)) {}
HTMLParagraphElement::HTMLParagraphElement(const emlite::Val &val) noexcept: HTMLElement(val) {}


HTMLParagraphElement::HTMLParagraphElement() : HTMLElement(emlite::Val::global("HTMLParagraphElement").new_()) {}

jsbind::String HTMLParagraphElement::align() const {
    return HTMLElement::get("align").as<jsbind::String>();
}

void HTMLParagraphElement::align(const jsbind::String& value) {
    HTMLElement::set("align", value);
}

