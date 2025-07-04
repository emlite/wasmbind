#include <webbind/HTMLFrameElement.hpp>
#include <webbind/Document.hpp>


HTMLFrameElement HTMLFrameElement::take_ownership(Handle h) noexcept {
        return HTMLFrameElement(h);
    }
HTMLFrameElement HTMLFrameElement::clone() const noexcept { return *this; }
HTMLFrameElement::HTMLFrameElement(Handle h) noexcept : HTMLElement(emlite::Val::take_ownership(h)) {}
HTMLFrameElement::HTMLFrameElement(const emlite::Val &val) noexcept: HTMLElement(val) {}


HTMLFrameElement::HTMLFrameElement(): HTMLElement(emlite::Val::global("HTMLFrameElement").new_()) {}

jsbind::DOMString HTMLFrameElement::name() const {
    return HTMLElement::get("name").as<jsbind::DOMString>();
}

void HTMLFrameElement::name(const jsbind::DOMString& value) {
    HTMLElement::set("name", value);
}

jsbind::DOMString HTMLFrameElement::scrolling() const {
    return HTMLElement::get("scrolling").as<jsbind::DOMString>();
}

void HTMLFrameElement::scrolling(const jsbind::DOMString& value) {
    HTMLElement::set("scrolling", value);
}

jsbind::USVString HTMLFrameElement::src() const {
    return HTMLElement::get("src").as<jsbind::USVString>();
}

void HTMLFrameElement::src(const jsbind::USVString& value) {
    HTMLElement::set("src", value);
}

jsbind::DOMString HTMLFrameElement::frameBorder() const {
    return HTMLElement::get("frameBorder").as<jsbind::DOMString>();
}

void HTMLFrameElement::frameBorder(const jsbind::DOMString& value) {
    HTMLElement::set("frameBorder", value);
}

jsbind::USVString HTMLFrameElement::longDesc() const {
    return HTMLElement::get("longDesc").as<jsbind::USVString>();
}

void HTMLFrameElement::longDesc(const jsbind::USVString& value) {
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

jsbind::DOMString HTMLFrameElement::marginHeight() const {
    return HTMLElement::get("marginHeight").as<jsbind::DOMString>();
}

void HTMLFrameElement::marginHeight(const jsbind::DOMString& value) {
    HTMLElement::set("marginHeight", value);
}

jsbind::DOMString HTMLFrameElement::marginWidth() const {
    return HTMLElement::get("marginWidth").as<jsbind::DOMString>();
}

void HTMLFrameElement::marginWidth(const jsbind::DOMString& value) {
    HTMLElement::set("marginWidth", value);
}

