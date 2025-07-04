#include <webbind/HTMLLinkElement.hpp>
#include <webbind/DOMTokenList.hpp>
#include <webbind/CSSStyleSheet.hpp>


HTMLLinkElement HTMLLinkElement::take_ownership(Handle h) noexcept {
        return HTMLLinkElement(h);
    }
HTMLLinkElement HTMLLinkElement::clone() const noexcept { return *this; }
HTMLLinkElement::HTMLLinkElement(Handle h) noexcept : HTMLElement(emlite::Val::take_ownership(h)) {}
HTMLLinkElement::HTMLLinkElement(const emlite::Val &val) noexcept: HTMLElement(val) {}


HTMLLinkElement::HTMLLinkElement(): HTMLElement(emlite::Val::global("HTMLLinkElement").new_()) {}

jsbind::USVString HTMLLinkElement::href() const {
    return HTMLElement::get("href").as<jsbind::USVString>();
}

void HTMLLinkElement::href(const jsbind::USVString& value) {
    HTMLElement::set("href", value);
}

jsbind::DOMString HTMLLinkElement::crossOrigin() const {
    return HTMLElement::get("crossOrigin").as<jsbind::DOMString>();
}

void HTMLLinkElement::crossOrigin(const jsbind::DOMString& value) {
    HTMLElement::set("crossOrigin", value);
}

jsbind::DOMString HTMLLinkElement::rel() const {
    return HTMLElement::get("rel").as<jsbind::DOMString>();
}

void HTMLLinkElement::rel(const jsbind::DOMString& value) {
    HTMLElement::set("rel", value);
}

jsbind::DOMString HTMLLinkElement::as() const {
    return HTMLElement::get("as").as<jsbind::DOMString>();
}

void HTMLLinkElement::as(const jsbind::DOMString& value) {
    HTMLElement::set("as", value);
}

DOMTokenList HTMLLinkElement::relList() const {
    return HTMLElement::get("relList").as<DOMTokenList>();
}

jsbind::DOMString HTMLLinkElement::media() const {
    return HTMLElement::get("media").as<jsbind::DOMString>();
}

void HTMLLinkElement::media(const jsbind::DOMString& value) {
    HTMLElement::set("media", value);
}

jsbind::DOMString HTMLLinkElement::integrity() const {
    return HTMLElement::get("integrity").as<jsbind::DOMString>();
}

void HTMLLinkElement::integrity(const jsbind::DOMString& value) {
    HTMLElement::set("integrity", value);
}

jsbind::DOMString HTMLLinkElement::hreflang() const {
    return HTMLElement::get("hreflang").as<jsbind::DOMString>();
}

void HTMLLinkElement::hreflang(const jsbind::DOMString& value) {
    HTMLElement::set("hreflang", value);
}

jsbind::DOMString HTMLLinkElement::type() const {
    return HTMLElement::get("type").as<jsbind::DOMString>();
}

void HTMLLinkElement::type(const jsbind::DOMString& value) {
    HTMLElement::set("type", value);
}

DOMTokenList HTMLLinkElement::sizes() const {
    return HTMLElement::get("sizes").as<DOMTokenList>();
}

jsbind::USVString HTMLLinkElement::imageSrcset() const {
    return HTMLElement::get("imageSrcset").as<jsbind::USVString>();
}

void HTMLLinkElement::imageSrcset(const jsbind::USVString& value) {
    HTMLElement::set("imageSrcset", value);
}

jsbind::DOMString HTMLLinkElement::imageSizes() const {
    return HTMLElement::get("imageSizes").as<jsbind::DOMString>();
}

void HTMLLinkElement::imageSizes(const jsbind::DOMString& value) {
    HTMLElement::set("imageSizes", value);
}

jsbind::DOMString HTMLLinkElement::referrerPolicy() const {
    return HTMLElement::get("referrerPolicy").as<jsbind::DOMString>();
}

void HTMLLinkElement::referrerPolicy(const jsbind::DOMString& value) {
    HTMLElement::set("referrerPolicy", value);
}

DOMTokenList HTMLLinkElement::blocking() const {
    return HTMLElement::get("blocking").as<DOMTokenList>();
}

bool HTMLLinkElement::disabled() const {
    return HTMLElement::get("disabled").as<bool>();
}

void HTMLLinkElement::disabled(bool value) {
    HTMLElement::set("disabled", value);
}

jsbind::DOMString HTMLLinkElement::fetchPriority() const {
    return HTMLElement::get("fetchPriority").as<jsbind::DOMString>();
}

void HTMLLinkElement::fetchPriority(const jsbind::DOMString& value) {
    HTMLElement::set("fetchPriority", value);
}

jsbind::DOMString HTMLLinkElement::charset() const {
    return HTMLElement::get("charset").as<jsbind::DOMString>();
}

void HTMLLinkElement::charset(const jsbind::DOMString& value) {
    HTMLElement::set("charset", value);
}

jsbind::DOMString HTMLLinkElement::rev() const {
    return HTMLElement::get("rev").as<jsbind::DOMString>();
}

void HTMLLinkElement::rev(const jsbind::DOMString& value) {
    HTMLElement::set("rev", value);
}

jsbind::DOMString HTMLLinkElement::target() const {
    return HTMLElement::get("target").as<jsbind::DOMString>();
}

void HTMLLinkElement::target(const jsbind::DOMString& value) {
    HTMLElement::set("target", value);
}

CSSStyleSheet HTMLLinkElement::sheet() const {
    return HTMLElement::get("sheet").as<CSSStyleSheet>();
}

