#include <webbind/HTMLBaseElement.hpp>


HTMLBaseElement HTMLBaseElement::take_ownership(Handle h) noexcept {
        return HTMLBaseElement(h);
    }
HTMLBaseElement HTMLBaseElement::clone() const noexcept { return *this; }
HTMLBaseElement::HTMLBaseElement(Handle h) noexcept : HTMLElement(emlite::Val::take_ownership(h)) {}
HTMLBaseElement::HTMLBaseElement(const emlite::Val &val) noexcept: HTMLElement(val) {}


HTMLBaseElement::HTMLBaseElement() : HTMLElement(emlite::Val::global("HTMLBaseElement").new_()) {}

jsbind::USVString HTMLBaseElement::href() const {
    return HTMLElement::get("href").as<jsbind::USVString>();
}

void HTMLBaseElement::href(const jsbind::USVString& value) {
    HTMLElement::set("href", value);
}

jsbind::DOMString HTMLBaseElement::target() const {
    return HTMLElement::get("target").as<jsbind::DOMString>();
}

void HTMLBaseElement::target(const jsbind::DOMString& value) {
    HTMLElement::set("target", value);
}

