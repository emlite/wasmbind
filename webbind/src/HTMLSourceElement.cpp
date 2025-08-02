#include <webbind/HTMLSourceElement.hpp>


HTMLSourceElement HTMLSourceElement::take_ownership(Handle h) noexcept {
        return HTMLSourceElement(h);
    }
HTMLSourceElement HTMLSourceElement::clone() const noexcept { return *this; }
emlite::Val HTMLSourceElement::instance() noexcept { return emlite::Val::global("HTMLSourceElement"); }
HTMLSourceElement::HTMLSourceElement(Handle h) noexcept : HTMLElement(emlite::Val::take_ownership(h)) {}
HTMLSourceElement::HTMLSourceElement(const emlite::Val &val) noexcept: HTMLElement(val) {}


HTMLSourceElement::HTMLSourceElement() : HTMLElement(emlite::Val::global("HTMLSourceElement").new_()) {}

jsbind::String HTMLSourceElement::src() const {
    return HTMLElement::get("src").as<jsbind::String>();
}

void HTMLSourceElement::src(const jsbind::String& value) {
    HTMLElement::set("src", value);
}

jsbind::String HTMLSourceElement::type() const {
    return HTMLElement::get("type").as<jsbind::String>();
}

void HTMLSourceElement::type(const jsbind::String& value) {
    HTMLElement::set("type", value);
}

jsbind::String HTMLSourceElement::srcset() const {
    return HTMLElement::get("srcset").as<jsbind::String>();
}

void HTMLSourceElement::srcset(const jsbind::String& value) {
    HTMLElement::set("srcset", value);
}

jsbind::String HTMLSourceElement::sizes() const {
    return HTMLElement::get("sizes").as<jsbind::String>();
}

void HTMLSourceElement::sizes(const jsbind::String& value) {
    HTMLElement::set("sizes", value);
}

jsbind::String HTMLSourceElement::media() const {
    return HTMLElement::get("media").as<jsbind::String>();
}

void HTMLSourceElement::media(const jsbind::String& value) {
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

