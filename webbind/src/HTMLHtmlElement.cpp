#include <webbind/HTMLHtmlElement.hpp>


HTMLHtmlElement HTMLHtmlElement::take_ownership(Handle h) noexcept {
        return HTMLHtmlElement(h);
    }
HTMLHtmlElement HTMLHtmlElement::clone() const noexcept { return *this; }
HTMLHtmlElement::HTMLHtmlElement(Handle h) noexcept : HTMLElement(emlite::Val::take_ownership(h)) {}
HTMLHtmlElement::HTMLHtmlElement(const emlite::Val &val) noexcept: HTMLElement(val) {}


HTMLHtmlElement::HTMLHtmlElement() : HTMLElement(emlite::Val::global("HTMLHtmlElement").new_()) {}

jsbind::DOMString HTMLHtmlElement::version() const {
    return HTMLElement::get("version").as<jsbind::DOMString>();
}

void HTMLHtmlElement::version(const jsbind::DOMString& value) {
    HTMLElement::set("version", value);
}

