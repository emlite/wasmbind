#include <webbind/HTMLFencedFrameElement.hpp>
#include <webbind/FencedFrameConfig.hpp>
#include <webbind/DOMTokenList.hpp>


HTMLFencedFrameElement HTMLFencedFrameElement::take_ownership(Handle h) noexcept {
        return HTMLFencedFrameElement(h);
    }
HTMLFencedFrameElement HTMLFencedFrameElement::clone() const noexcept { return *this; }
HTMLFencedFrameElement::HTMLFencedFrameElement(Handle h) noexcept : HTMLElement(emlite::Val::take_ownership(h)) {}
HTMLFencedFrameElement::HTMLFencedFrameElement(const emlite::Val &val) noexcept: HTMLElement(val) {}


HTMLFencedFrameElement::HTMLFencedFrameElement(): HTMLElement(emlite::Val::global("HTMLFencedFrameElement").new_()) {}

FencedFrameConfig HTMLFencedFrameElement::config() const {
    return HTMLElement::get("config").as<FencedFrameConfig>();
}

void HTMLFencedFrameElement::config(const FencedFrameConfig& value) {
    HTMLElement::set("config", value);
}

jsbind::DOMString HTMLFencedFrameElement::width() const {
    return HTMLElement::get("width").as<jsbind::DOMString>();
}

void HTMLFencedFrameElement::width(const jsbind::DOMString& value) {
    HTMLElement::set("width", value);
}

jsbind::DOMString HTMLFencedFrameElement::height() const {
    return HTMLElement::get("height").as<jsbind::DOMString>();
}

void HTMLFencedFrameElement::height(const jsbind::DOMString& value) {
    HTMLElement::set("height", value);
}

DOMTokenList HTMLFencedFrameElement::sandbox() const {
    return HTMLElement::get("sandbox").as<DOMTokenList>();
}

jsbind::DOMString HTMLFencedFrameElement::allow() const {
    return HTMLElement::get("allow").as<jsbind::DOMString>();
}

void HTMLFencedFrameElement::allow(const jsbind::DOMString& value) {
    HTMLElement::set("allow", value);
}

