#include <webbind/HTMLTableCaptionElement.hpp>


HTMLTableCaptionElement HTMLTableCaptionElement::take_ownership(Handle h) noexcept {
        return HTMLTableCaptionElement(h);
    }
HTMLTableCaptionElement HTMLTableCaptionElement::clone() const noexcept { return *this; }
HTMLTableCaptionElement::HTMLTableCaptionElement(Handle h) noexcept : HTMLElement(emlite::Val::take_ownership(h)) {}
HTMLTableCaptionElement::HTMLTableCaptionElement(const emlite::Val &val) noexcept: HTMLElement(val) {}


HTMLTableCaptionElement::HTMLTableCaptionElement() : HTMLElement(emlite::Val::global("HTMLTableCaptionElement").new_()) {}

jsbind::DOMString HTMLTableCaptionElement::align() const {
    return HTMLElement::get("align").as<jsbind::DOMString>();
}

void HTMLTableCaptionElement::align(const jsbind::DOMString& value) {
    HTMLElement::set("align", value);
}

