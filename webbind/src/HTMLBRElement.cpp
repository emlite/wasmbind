#include <webbind/HTMLBRElement.hpp>


HTMLBRElement HTMLBRElement::take_ownership(Handle h) noexcept {
        return HTMLBRElement(h);
    }
HTMLBRElement HTMLBRElement::clone() const noexcept { return *this; }
HTMLBRElement::HTMLBRElement(Handle h) noexcept : HTMLElement(emlite::Val::take_ownership(h)) {}
HTMLBRElement::HTMLBRElement(const emlite::Val &val) noexcept: HTMLElement(val) {}


HTMLBRElement::HTMLBRElement(): HTMLElement(emlite::Val::global("HTMLBRElement").new_()) {}

jsbind::DOMString HTMLBRElement::clear() const {
    return HTMLElement::get("clear").as<jsbind::DOMString>();
}

void HTMLBRElement::clear(const jsbind::DOMString& value) {
    HTMLElement::set("clear", value);
}

