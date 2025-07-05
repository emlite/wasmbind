#include <webbind/HTMLScriptElement.hpp>
#include <webbind/DOMTokenList.hpp>


HTMLScriptElement HTMLScriptElement::take_ownership(Handle h) noexcept {
        return HTMLScriptElement(h);
    }
HTMLScriptElement HTMLScriptElement::clone() const noexcept { return *this; }
HTMLScriptElement::HTMLScriptElement(Handle h) noexcept : HTMLElement(emlite::Val::take_ownership(h)) {}
HTMLScriptElement::HTMLScriptElement(const emlite::Val &val) noexcept: HTMLElement(val) {}


HTMLScriptElement::HTMLScriptElement() : HTMLElement(emlite::Val::global("HTMLScriptElement").new_()) {}

jsbind::DOMString HTMLScriptElement::type() const {
    return HTMLElement::get("type").as<jsbind::DOMString>();
}

void HTMLScriptElement::type(const jsbind::DOMString& value) {
    HTMLElement::set("type", value);
}

jsbind::USVString HTMLScriptElement::src() const {
    return HTMLElement::get("src").as<jsbind::USVString>();
}

void HTMLScriptElement::src(const jsbind::USVString& value) {
    HTMLElement::set("src", value);
}

bool HTMLScriptElement::noModule() const {
    return HTMLElement::get("noModule").as<bool>();
}

void HTMLScriptElement::noModule(bool value) {
    HTMLElement::set("noModule", value);
}

bool HTMLScriptElement::async() const {
    return HTMLElement::get("async").as<bool>();
}

void HTMLScriptElement::async(bool value) {
    HTMLElement::set("async", value);
}

bool HTMLScriptElement::defer() const {
    return HTMLElement::get("defer").as<bool>();
}

void HTMLScriptElement::defer(bool value) {
    HTMLElement::set("defer", value);
}

DOMTokenList HTMLScriptElement::blocking() const {
    return HTMLElement::get("blocking").as<DOMTokenList>();
}

jsbind::DOMString HTMLScriptElement::crossOrigin() const {
    return HTMLElement::get("crossOrigin").as<jsbind::DOMString>();
}

void HTMLScriptElement::crossOrigin(const jsbind::DOMString& value) {
    HTMLElement::set("crossOrigin", value);
}

jsbind::DOMString HTMLScriptElement::referrerPolicy() const {
    return HTMLElement::get("referrerPolicy").as<jsbind::DOMString>();
}

void HTMLScriptElement::referrerPolicy(const jsbind::DOMString& value) {
    HTMLElement::set("referrerPolicy", value);
}

jsbind::DOMString HTMLScriptElement::integrity() const {
    return HTMLElement::get("integrity").as<jsbind::DOMString>();
}

void HTMLScriptElement::integrity(const jsbind::DOMString& value) {
    HTMLElement::set("integrity", value);
}

jsbind::DOMString HTMLScriptElement::fetchPriority() const {
    return HTMLElement::get("fetchPriority").as<jsbind::DOMString>();
}

void HTMLScriptElement::fetchPriority(const jsbind::DOMString& value) {
    HTMLElement::set("fetchPriority", value);
}

jsbind::DOMString HTMLScriptElement::text() const {
    return HTMLElement::get("text").as<jsbind::DOMString>();
}

void HTMLScriptElement::text(const jsbind::DOMString& value) {
    HTMLElement::set("text", value);
}

bool HTMLScriptElement::supports(const jsbind::DOMString& type) {
    return emlite::Val::global("htmlscriptelement").call("supports", type).as<bool>();
}

jsbind::DOMString HTMLScriptElement::charset() const {
    return HTMLElement::get("charset").as<jsbind::DOMString>();
}

void HTMLScriptElement::charset(const jsbind::DOMString& value) {
    HTMLElement::set("charset", value);
}

jsbind::DOMString HTMLScriptElement::event() const {
    return HTMLElement::get("event").as<jsbind::DOMString>();
}

void HTMLScriptElement::event(const jsbind::DOMString& value) {
    HTMLElement::set("event", value);
}

jsbind::DOMString HTMLScriptElement::htmlFor() const {
    return HTMLElement::get("htmlFor").as<jsbind::DOMString>();
}

void HTMLScriptElement::htmlFor(const jsbind::DOMString& value) {
    HTMLElement::set("htmlFor", value);
}

jsbind::USVString HTMLScriptElement::attributionSrc() const {
    return HTMLElement::get("attributionSrc").as<jsbind::USVString>();
}

void HTMLScriptElement::attributionSrc(const jsbind::USVString& value) {
    HTMLElement::set("attributionSrc", value);
}

