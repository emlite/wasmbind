#include <webbind/HTMLFencedFrameElement.hpp>
#include <webbind/FencedFrameConfig.hpp>
#include <webbind/DOMTokenList.hpp>


HTMLFencedFrameElement HTMLFencedFrameElement::take_ownership(Handle h) noexcept {
        return HTMLFencedFrameElement(h);
    }
HTMLFencedFrameElement HTMLFencedFrameElement::clone() const noexcept { return *this; }
emlite::Val HTMLFencedFrameElement::instance() noexcept { return emlite::Val::global("HTMLFencedFrameElement"); }
HTMLFencedFrameElement::HTMLFencedFrameElement(Handle h) noexcept : HTMLElement(emlite::Val::take_ownership(h)) {}
HTMLFencedFrameElement::HTMLFencedFrameElement(const emlite::Val &val) noexcept: HTMLElement(val) {}


HTMLFencedFrameElement::HTMLFencedFrameElement() : HTMLElement(emlite::Val::global("HTMLFencedFrameElement").new_()) {}

FencedFrameConfig HTMLFencedFrameElement::config() const {
    return HTMLElement::get("config").as<FencedFrameConfig>();
}

void HTMLFencedFrameElement::config(const FencedFrameConfig& value) {
    HTMLElement::set("config", value);
}

jsbind::String HTMLFencedFrameElement::width() const {
    return HTMLElement::get("width").as<jsbind::String>();
}

void HTMLFencedFrameElement::width(const jsbind::String& value) {
    HTMLElement::set("width", value);
}

jsbind::String HTMLFencedFrameElement::height() const {
    return HTMLElement::get("height").as<jsbind::String>();
}

void HTMLFencedFrameElement::height(const jsbind::String& value) {
    HTMLElement::set("height", value);
}

DOMTokenList HTMLFencedFrameElement::sandbox() const {
    return HTMLElement::get("sandbox").as<DOMTokenList>();
}

jsbind::String HTMLFencedFrameElement::allow() const {
    return HTMLElement::get("allow").as<jsbind::String>();
}

void HTMLFencedFrameElement::allow(const jsbind::String& value) {
    HTMLElement::set("allow", value);
}

