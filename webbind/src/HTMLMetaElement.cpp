#include <webbind/HTMLMetaElement.hpp>


HTMLMetaElement HTMLMetaElement::take_ownership(Handle h) noexcept {
        return HTMLMetaElement(h);
    }
HTMLMetaElement HTMLMetaElement::clone() const noexcept { return *this; }
HTMLMetaElement::HTMLMetaElement(Handle h) noexcept : HTMLElement(emlite::Val::take_ownership(h)) {}
HTMLMetaElement::HTMLMetaElement(const emlite::Val &val) noexcept: HTMLElement(val) {}


HTMLMetaElement::HTMLMetaElement(): HTMLElement(emlite::Val::global("HTMLMetaElement").new_()) {}

jsbind::DOMString HTMLMetaElement::name() const {
    return HTMLElement::get("name").as<jsbind::DOMString>();
}

void HTMLMetaElement::name(const jsbind::DOMString& value) {
    HTMLElement::set("name", value);
}

jsbind::DOMString HTMLMetaElement::httpEquiv() const {
    return HTMLElement::get("httpEquiv").as<jsbind::DOMString>();
}

void HTMLMetaElement::httpEquiv(const jsbind::DOMString& value) {
    HTMLElement::set("httpEquiv", value);
}

jsbind::DOMString HTMLMetaElement::content() const {
    return HTMLElement::get("content").as<jsbind::DOMString>();
}

void HTMLMetaElement::content(const jsbind::DOMString& value) {
    HTMLElement::set("content", value);
}

jsbind::DOMString HTMLMetaElement::media() const {
    return HTMLElement::get("media").as<jsbind::DOMString>();
}

void HTMLMetaElement::media(const jsbind::DOMString& value) {
    HTMLElement::set("media", value);
}

jsbind::DOMString HTMLMetaElement::scheme() const {
    return HTMLElement::get("scheme").as<jsbind::DOMString>();
}

void HTMLMetaElement::scheme(const jsbind::DOMString& value) {
    HTMLElement::set("scheme", value);
}

