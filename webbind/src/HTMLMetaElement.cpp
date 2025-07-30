#include <webbind/HTMLMetaElement.hpp>


HTMLMetaElement HTMLMetaElement::take_ownership(Handle h) noexcept {
        return HTMLMetaElement(h);
    }
HTMLMetaElement HTMLMetaElement::clone() const noexcept { return *this; }
HTMLMetaElement::HTMLMetaElement(Handle h) noexcept : HTMLElement(emlite::Val::take_ownership(h)) {}
HTMLMetaElement::HTMLMetaElement(const emlite::Val &val) noexcept: HTMLElement(val) {}


HTMLMetaElement::HTMLMetaElement() : HTMLElement(emlite::Val::global("HTMLMetaElement").new_()) {}

jsbind::String HTMLMetaElement::name() const {
    return HTMLElement::get("name").as<jsbind::String>();
}

void HTMLMetaElement::name(const jsbind::String& value) {
    HTMLElement::set("name", value);
}

jsbind::String HTMLMetaElement::httpEquiv() const {
    return HTMLElement::get("httpEquiv").as<jsbind::String>();
}

void HTMLMetaElement::httpEquiv(const jsbind::String& value) {
    HTMLElement::set("httpEquiv", value);
}

jsbind::String HTMLMetaElement::content() const {
    return HTMLElement::get("content").as<jsbind::String>();
}

void HTMLMetaElement::content(const jsbind::String& value) {
    HTMLElement::set("content", value);
}

jsbind::String HTMLMetaElement::media() const {
    return HTMLElement::get("media").as<jsbind::String>();
}

void HTMLMetaElement::media(const jsbind::String& value) {
    HTMLElement::set("media", value);
}

jsbind::String HTMLMetaElement::scheme() const {
    return HTMLElement::get("scheme").as<jsbind::String>();
}

void HTMLMetaElement::scheme(const jsbind::String& value) {
    HTMLElement::set("scheme", value);
}

