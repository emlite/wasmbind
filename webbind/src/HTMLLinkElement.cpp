#include <webbind/HTMLLinkElement.hpp>
#include <webbind/DOMTokenList.hpp>
#include <webbind/CSSStyleSheet.hpp>


HTMLLinkElement HTMLLinkElement::take_ownership(Handle h) noexcept {
        return HTMLLinkElement(h);
    }
HTMLLinkElement HTMLLinkElement::clone() const noexcept { return *this; }
emlite::Val HTMLLinkElement::instance() noexcept { return emlite::Val::global("HTMLLinkElement"); }
HTMLLinkElement::HTMLLinkElement(Handle h) noexcept : HTMLElement(emlite::Val::take_ownership(h)) {}
HTMLLinkElement::HTMLLinkElement(const emlite::Val &val) noexcept: HTMLElement(val) {}


HTMLLinkElement::HTMLLinkElement() : HTMLElement(emlite::Val::global("HTMLLinkElement").new_()) {}

jsbind::String HTMLLinkElement::href() const {
    return HTMLElement::get("href").as<jsbind::String>();
}

void HTMLLinkElement::href(const jsbind::String& value) {
    HTMLElement::set("href", value);
}

jsbind::String HTMLLinkElement::crossOrigin() const {
    return HTMLElement::get("crossOrigin").as<jsbind::String>();
}

void HTMLLinkElement::crossOrigin(const jsbind::String& value) {
    HTMLElement::set("crossOrigin", value);
}

jsbind::String HTMLLinkElement::rel() const {
    return HTMLElement::get("rel").as<jsbind::String>();
}

void HTMLLinkElement::rel(const jsbind::String& value) {
    HTMLElement::set("rel", value);
}

jsbind::String HTMLLinkElement::as() const {
    return HTMLElement::get("as").as<jsbind::String>();
}

void HTMLLinkElement::as(const jsbind::String& value) {
    HTMLElement::set("as", value);
}

DOMTokenList HTMLLinkElement::relList() const {
    return HTMLElement::get("relList").as<DOMTokenList>();
}

jsbind::String HTMLLinkElement::media() const {
    return HTMLElement::get("media").as<jsbind::String>();
}

void HTMLLinkElement::media(const jsbind::String& value) {
    HTMLElement::set("media", value);
}

jsbind::String HTMLLinkElement::integrity() const {
    return HTMLElement::get("integrity").as<jsbind::String>();
}

void HTMLLinkElement::integrity(const jsbind::String& value) {
    HTMLElement::set("integrity", value);
}

jsbind::String HTMLLinkElement::hreflang() const {
    return HTMLElement::get("hreflang").as<jsbind::String>();
}

void HTMLLinkElement::hreflang(const jsbind::String& value) {
    HTMLElement::set("hreflang", value);
}

jsbind::String HTMLLinkElement::type() const {
    return HTMLElement::get("type").as<jsbind::String>();
}

void HTMLLinkElement::type(const jsbind::String& value) {
    HTMLElement::set("type", value);
}

DOMTokenList HTMLLinkElement::sizes() const {
    return HTMLElement::get("sizes").as<DOMTokenList>();
}

jsbind::String HTMLLinkElement::imageSrcset() const {
    return HTMLElement::get("imageSrcset").as<jsbind::String>();
}

void HTMLLinkElement::imageSrcset(const jsbind::String& value) {
    HTMLElement::set("imageSrcset", value);
}

jsbind::String HTMLLinkElement::imageSizes() const {
    return HTMLElement::get("imageSizes").as<jsbind::String>();
}

void HTMLLinkElement::imageSizes(const jsbind::String& value) {
    HTMLElement::set("imageSizes", value);
}

jsbind::String HTMLLinkElement::referrerPolicy() const {
    return HTMLElement::get("referrerPolicy").as<jsbind::String>();
}

void HTMLLinkElement::referrerPolicy(const jsbind::String& value) {
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

jsbind::String HTMLLinkElement::fetchPriority() const {
    return HTMLElement::get("fetchPriority").as<jsbind::String>();
}

void HTMLLinkElement::fetchPriority(const jsbind::String& value) {
    HTMLElement::set("fetchPriority", value);
}

jsbind::String HTMLLinkElement::charset() const {
    return HTMLElement::get("charset").as<jsbind::String>();
}

void HTMLLinkElement::charset(const jsbind::String& value) {
    HTMLElement::set("charset", value);
}

jsbind::String HTMLLinkElement::rev() const {
    return HTMLElement::get("rev").as<jsbind::String>();
}

void HTMLLinkElement::rev(const jsbind::String& value) {
    HTMLElement::set("rev", value);
}

jsbind::String HTMLLinkElement::target() const {
    return HTMLElement::get("target").as<jsbind::String>();
}

void HTMLLinkElement::target(const jsbind::String& value) {
    HTMLElement::set("target", value);
}

CSSStyleSheet HTMLLinkElement::sheet() const {
    return HTMLElement::get("sheet").as<CSSStyleSheet>();
}

