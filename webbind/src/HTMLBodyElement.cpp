#include <webbind/HTMLBodyElement.hpp>


HTMLBodyElement HTMLBodyElement::take_ownership(Handle h) noexcept {
        return HTMLBodyElement(h);
    }
HTMLBodyElement HTMLBodyElement::clone() const noexcept { return *this; }
HTMLBodyElement::HTMLBodyElement(Handle h) noexcept : HTMLElement(emlite::Val::take_ownership(h)) {}
HTMLBodyElement::HTMLBodyElement(const emlite::Val &val) noexcept: HTMLElement(val) {}


HTMLBodyElement::HTMLBodyElement() : HTMLElement(emlite::Val::global("HTMLBodyElement").new_()) {}

jsbind::Any HTMLBodyElement::onorientationchange() const {
    return HTMLElement::get("onorientationchange").as<jsbind::Any>();
}

void HTMLBodyElement::onorientationchange(const jsbind::Any& value) {
    HTMLElement::set("onorientationchange", value);
}

jsbind::DOMString HTMLBodyElement::text() const {
    return HTMLElement::get("text").as<jsbind::DOMString>();
}

void HTMLBodyElement::text(const jsbind::DOMString& value) {
    HTMLElement::set("text", value);
}

jsbind::DOMString HTMLBodyElement::link() const {
    return HTMLElement::get("link").as<jsbind::DOMString>();
}

void HTMLBodyElement::link(const jsbind::DOMString& value) {
    HTMLElement::set("link", value);
}

jsbind::DOMString HTMLBodyElement::vLink() const {
    return HTMLElement::get("vLink").as<jsbind::DOMString>();
}

void HTMLBodyElement::vLink(const jsbind::DOMString& value) {
    HTMLElement::set("vLink", value);
}

jsbind::DOMString HTMLBodyElement::aLink() const {
    return HTMLElement::get("aLink").as<jsbind::DOMString>();
}

void HTMLBodyElement::aLink(const jsbind::DOMString& value) {
    HTMLElement::set("aLink", value);
}

jsbind::DOMString HTMLBodyElement::bgColor() const {
    return HTMLElement::get("bgColor").as<jsbind::DOMString>();
}

void HTMLBodyElement::bgColor(const jsbind::DOMString& value) {
    HTMLElement::set("bgColor", value);
}

jsbind::DOMString HTMLBodyElement::background() const {
    return HTMLElement::get("background").as<jsbind::DOMString>();
}

void HTMLBodyElement::background(const jsbind::DOMString& value) {
    HTMLElement::set("background", value);
}

jsbind::Any HTMLBodyElement::onportalactivate() const {
    return HTMLElement::get("onportalactivate").as<jsbind::Any>();
}

void HTMLBodyElement::onportalactivate(const jsbind::Any& value) {
    HTMLElement::set("onportalactivate", value);
}

