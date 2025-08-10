#include "webbind/HTMLFrameElement.hpp"
#include "webbind/Document.hpp"

namespace webbind {

HTMLFrameElement HTMLFrameElement::take_ownership(Handle h) noexcept {
        return HTMLFrameElement(h);
    }
HTMLFrameElement HTMLFrameElement::clone() const noexcept { return *this; }
emlite::Val HTMLFrameElement::instance() noexcept { return emlite::Val::global("HTMLFrameElement"); }
HTMLFrameElement::HTMLFrameElement(Handle h) noexcept : HTMLElement(emlite::Val::take_ownership(h)) {}
HTMLFrameElement::HTMLFrameElement(const emlite::Val &val) noexcept: HTMLElement(val) {}

HTMLFrameElement::HTMLFrameElement() : HTMLElement(emlite::Val::global("HTMLFrameElement").new_()) {}

jsbind::String HTMLFrameElement::name() const {
    return HTMLElement::get("name").as<jsbind::String>();
}

void HTMLFrameElement::name(const jsbind::String& value) {
    HTMLElement::set("name", value);
}

jsbind::String HTMLFrameElement::scrolling() const {
    return HTMLElement::get("scrolling").as<jsbind::String>();
}

void HTMLFrameElement::scrolling(const jsbind::String& value) {
    HTMLElement::set("scrolling", value);
}

jsbind::String HTMLFrameElement::src() const {
    return HTMLElement::get("src").as<jsbind::String>();
}

void HTMLFrameElement::src(const jsbind::String& value) {
    HTMLElement::set("src", value);
}

jsbind::String HTMLFrameElement::frameBorder() const {
    return HTMLElement::get("frameBorder").as<jsbind::String>();
}

void HTMLFrameElement::frameBorder(const jsbind::String& value) {
    HTMLElement::set("frameBorder", value);
}

jsbind::String HTMLFrameElement::longDesc() const {
    return HTMLElement::get("longDesc").as<jsbind::String>();
}

void HTMLFrameElement::longDesc(const jsbind::String& value) {
    HTMLElement::set("longDesc", value);
}

bool HTMLFrameElement::noResize() const {
    return HTMLElement::get("noResize").as<bool>();
}

void HTMLFrameElement::noResize(bool value) {
    HTMLElement::set("noResize", value);
}

Document HTMLFrameElement::contentDocument() const {
    return HTMLElement::get("contentDocument").as<Document>();
}

jsbind::Any HTMLFrameElement::contentWindow() const {
    return HTMLElement::get("contentWindow").as<jsbind::Any>();
}

jsbind::String HTMLFrameElement::marginHeight() const {
    return HTMLElement::get("marginHeight").as<jsbind::String>();
}

void HTMLFrameElement::marginHeight(const jsbind::String& value) {
    HTMLElement::set("marginHeight", value);
}

jsbind::String HTMLFrameElement::marginWidth() const {
    return HTMLElement::get("marginWidth").as<jsbind::String>();
}

void HTMLFrameElement::marginWidth(const jsbind::String& value) {
    HTMLElement::set("marginWidth", value);
}


} // namespace webbind