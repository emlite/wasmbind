#include <webbind/HTMLSourceElement.hpp>


HTMLSourceElement HTMLSourceElement::take_ownership(Handle h) noexcept {
        return HTMLSourceElement(h);
    }
HTMLSourceElement HTMLSourceElement::clone() const noexcept { return *this; }
HTMLSourceElement::HTMLSourceElement(Handle h) noexcept : HTMLElement(emlite::Val::take_ownership(h)) {}
HTMLSourceElement::HTMLSourceElement(const emlite::Val &val) noexcept: HTMLElement(val) {}


HTMLSourceElement::HTMLSourceElement(): HTMLElement(emlite::Val::global("HTMLSourceElement").new_()) {}

jsbind::USVString HTMLSourceElement::src() const {
    return HTMLElement::get("src").as<jsbind::USVString>();
}

void HTMLSourceElement::src(const jsbind::USVString& value) {
    HTMLElement::set("src", value);
}

jsbind::DOMString HTMLSourceElement::type() const {
    return HTMLElement::get("type").as<jsbind::DOMString>();
}

void HTMLSourceElement::type(const jsbind::DOMString& value) {
    HTMLElement::set("type", value);
}

jsbind::USVString HTMLSourceElement::srcset() const {
    return HTMLElement::get("srcset").as<jsbind::USVString>();
}

void HTMLSourceElement::srcset(const jsbind::USVString& value) {
    HTMLElement::set("srcset", value);
}

jsbind::DOMString HTMLSourceElement::sizes() const {
    return HTMLElement::get("sizes").as<jsbind::DOMString>();
}

void HTMLSourceElement::sizes(const jsbind::DOMString& value) {
    HTMLElement::set("sizes", value);
}

jsbind::DOMString HTMLSourceElement::media() const {
    return HTMLElement::get("media").as<jsbind::DOMString>();
}

void HTMLSourceElement::media(const jsbind::DOMString& value) {
    HTMLElement::set("media", value);
}

unsigned long HTMLSourceElement::width() const {
    return HTMLElement::get("width").as<unsigned long>();
}

void HTMLSourceElement::width(unsigned long value) {
    HTMLElement::set("width", value);
}

unsigned long HTMLSourceElement::height() const {
    return HTMLElement::get("height").as<unsigned long>();
}

void HTMLSourceElement::height(unsigned long value) {
    HTMLElement::set("height", value);
}

