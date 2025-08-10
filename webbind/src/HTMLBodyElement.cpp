#include <webbind/HTMLBodyElement.hpp>

namespace webbind {

HTMLBodyElement HTMLBodyElement::take_ownership(Handle h) noexcept {
        return HTMLBodyElement(h);
    }
HTMLBodyElement HTMLBodyElement::clone() const noexcept { return *this; }
emlite::Val HTMLBodyElement::instance() noexcept { return emlite::Val::global("HTMLBodyElement"); }
HTMLBodyElement::HTMLBodyElement(Handle h) noexcept : HTMLElement(emlite::Val::take_ownership(h)) {}
HTMLBodyElement::HTMLBodyElement(const emlite::Val &val) noexcept: HTMLElement(val) {}

HTMLBodyElement::HTMLBodyElement() : HTMLElement(emlite::Val::global("HTMLBodyElement").new_()) {}

jsbind::Any HTMLBodyElement::onorientationchange() const {
    return HTMLElement::get("onorientationchange").as<jsbind::Any>();
}

void HTMLBodyElement::onorientationchange(const jsbind::Any& value) {
    HTMLElement::set("onorientationchange", value);
}

jsbind::String HTMLBodyElement::text() const {
    return HTMLElement::get("text").as<jsbind::String>();
}

void HTMLBodyElement::text(const jsbind::String& value) {
    HTMLElement::set("text", value);
}

jsbind::String HTMLBodyElement::link() const {
    return HTMLElement::get("link").as<jsbind::String>();
}

void HTMLBodyElement::link(const jsbind::String& value) {
    HTMLElement::set("link", value);
}

jsbind::String HTMLBodyElement::vLink() const {
    return HTMLElement::get("vLink").as<jsbind::String>();
}

void HTMLBodyElement::vLink(const jsbind::String& value) {
    HTMLElement::set("vLink", value);
}

jsbind::String HTMLBodyElement::aLink() const {
    return HTMLElement::get("aLink").as<jsbind::String>();
}

void HTMLBodyElement::aLink(const jsbind::String& value) {
    HTMLElement::set("aLink", value);
}

jsbind::String HTMLBodyElement::bgColor() const {
    return HTMLElement::get("bgColor").as<jsbind::String>();
}

void HTMLBodyElement::bgColor(const jsbind::String& value) {
    HTMLElement::set("bgColor", value);
}

jsbind::String HTMLBodyElement::background() const {
    return HTMLElement::get("background").as<jsbind::String>();
}

void HTMLBodyElement::background(const jsbind::String& value) {
    HTMLElement::set("background", value);
}

jsbind::Any HTMLBodyElement::onportalactivate() const {
    return HTMLElement::get("onportalactivate").as<jsbind::Any>();
}

void HTMLBodyElement::onportalactivate(const jsbind::Any& value) {
    HTMLElement::set("onportalactivate", value);
}


} // namespace webbind