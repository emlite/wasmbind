#include "webbind/HTMLScriptElement.hpp"
#include "webbind/DOMTokenList.hpp"

namespace webbind {

HTMLScriptElement HTMLScriptElement::take_ownership(Handle h) noexcept {
        return HTMLScriptElement(h);
    }
HTMLScriptElement HTMLScriptElement::clone() const noexcept { return *this; }
emlite::Val HTMLScriptElement::instance() noexcept { return emlite::Val::global("HTMLScriptElement"); }
HTMLScriptElement::HTMLScriptElement(Handle h) noexcept : HTMLElement(emlite::Val::take_ownership(h)) {}
HTMLScriptElement::HTMLScriptElement(const emlite::Val &val) noexcept: HTMLElement(val) {}

HTMLScriptElement::HTMLScriptElement() : HTMLElement(emlite::Val::global("HTMLScriptElement").new_()) {}

jsbind::String HTMLScriptElement::type() const {
    return HTMLElement::get("type").as<jsbind::String>();
}

void HTMLScriptElement::type(const jsbind::String& value) {
    HTMLElement::set("type", value);
}

jsbind::String HTMLScriptElement::src() const {
    return HTMLElement::get("src").as<jsbind::String>();
}

void HTMLScriptElement::src(const jsbind::String& value) {
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

jsbind::String HTMLScriptElement::crossOrigin() const {
    return HTMLElement::get("crossOrigin").as<jsbind::String>();
}

void HTMLScriptElement::crossOrigin(const jsbind::String& value) {
    HTMLElement::set("crossOrigin", value);
}

jsbind::String HTMLScriptElement::referrerPolicy() const {
    return HTMLElement::get("referrerPolicy").as<jsbind::String>();
}

void HTMLScriptElement::referrerPolicy(const jsbind::String& value) {
    HTMLElement::set("referrerPolicy", value);
}

jsbind::String HTMLScriptElement::integrity() const {
    return HTMLElement::get("integrity").as<jsbind::String>();
}

void HTMLScriptElement::integrity(const jsbind::String& value) {
    HTMLElement::set("integrity", value);
}

jsbind::String HTMLScriptElement::fetchPriority() const {
    return HTMLElement::get("fetchPriority").as<jsbind::String>();
}

void HTMLScriptElement::fetchPriority(const jsbind::String& value) {
    HTMLElement::set("fetchPriority", value);
}

jsbind::String HTMLScriptElement::text() const {
    return HTMLElement::get("text").as<jsbind::String>();
}

void HTMLScriptElement::text(const jsbind::String& value) {
    HTMLElement::set("text", value);
}

bool HTMLScriptElement::supports(const jsbind::String& type) {
    return emlite::Val::global("htmlscriptelement").call("supports", type).as<bool>();
}

jsbind::String HTMLScriptElement::charset() const {
    return HTMLElement::get("charset").as<jsbind::String>();
}

void HTMLScriptElement::charset(const jsbind::String& value) {
    HTMLElement::set("charset", value);
}

jsbind::String HTMLScriptElement::event() const {
    return HTMLElement::get("event").as<jsbind::String>();
}

void HTMLScriptElement::event(const jsbind::String& value) {
    HTMLElement::set("event", value);
}

jsbind::String HTMLScriptElement::htmlFor() const {
    return HTMLElement::get("htmlFor").as<jsbind::String>();
}

void HTMLScriptElement::htmlFor(const jsbind::String& value) {
    HTMLElement::set("htmlFor", value);
}

jsbind::String HTMLScriptElement::attributionSrc() const {
    return HTMLElement::get("attributionSrc").as<jsbind::String>();
}

void HTMLScriptElement::attributionSrc(const jsbind::String& value) {
    HTMLElement::set("attributionSrc", value);
}


} // namespace webbind