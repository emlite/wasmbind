#include <webbind/HTMLStyleElement.hpp>
#include <webbind/DOMTokenList.hpp>
#include <webbind/CSSStyleSheet.hpp>


HTMLStyleElement HTMLStyleElement::take_ownership(Handle h) noexcept {
        return HTMLStyleElement(h);
    }
HTMLStyleElement HTMLStyleElement::clone() const noexcept { return *this; }
HTMLStyleElement::HTMLStyleElement(Handle h) noexcept : HTMLElement(emlite::Val::take_ownership(h)) {}
HTMLStyleElement::HTMLStyleElement(const emlite::Val &val) noexcept: HTMLElement(val) {}


HTMLStyleElement::HTMLStyleElement() : HTMLElement(emlite::Val::global("HTMLStyleElement").new_()) {}

bool HTMLStyleElement::disabled() const {
    return HTMLElement::get("disabled").as<bool>();
}

void HTMLStyleElement::disabled(bool value) {
    HTMLElement::set("disabled", value);
}

jsbind::String HTMLStyleElement::media() const {
    return HTMLElement::get("media").as<jsbind::String>();
}

void HTMLStyleElement::media(const jsbind::String& value) {
    HTMLElement::set("media", value);
}

DOMTokenList HTMLStyleElement::blocking() const {
    return HTMLElement::get("blocking").as<DOMTokenList>();
}

jsbind::String HTMLStyleElement::type() const {
    return HTMLElement::get("type").as<jsbind::String>();
}

void HTMLStyleElement::type(const jsbind::String& value) {
    HTMLElement::set("type", value);
}

CSSStyleSheet HTMLStyleElement::sheet() const {
    return HTMLElement::get("sheet").as<CSSStyleSheet>();
}

