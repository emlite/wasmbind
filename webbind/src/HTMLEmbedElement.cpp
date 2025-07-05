#include <webbind/HTMLEmbedElement.hpp>
#include <webbind/Document.hpp>


HTMLEmbedElement HTMLEmbedElement::take_ownership(Handle h) noexcept {
        return HTMLEmbedElement(h);
    }
HTMLEmbedElement HTMLEmbedElement::clone() const noexcept { return *this; }
HTMLEmbedElement::HTMLEmbedElement(Handle h) noexcept : HTMLElement(emlite::Val::take_ownership(h)) {}
HTMLEmbedElement::HTMLEmbedElement(const emlite::Val &val) noexcept: HTMLElement(val) {}


HTMLEmbedElement::HTMLEmbedElement() : HTMLElement(emlite::Val::global("HTMLEmbedElement").new_()) {}

jsbind::USVString HTMLEmbedElement::src() const {
    return HTMLElement::get("src").as<jsbind::USVString>();
}

void HTMLEmbedElement::src(const jsbind::USVString& value) {
    HTMLElement::set("src", value);
}

jsbind::DOMString HTMLEmbedElement::type() const {
    return HTMLElement::get("type").as<jsbind::DOMString>();
}

void HTMLEmbedElement::type(const jsbind::DOMString& value) {
    HTMLElement::set("type", value);
}

jsbind::DOMString HTMLEmbedElement::width() const {
    return HTMLElement::get("width").as<jsbind::DOMString>();
}

void HTMLEmbedElement::width(const jsbind::DOMString& value) {
    HTMLElement::set("width", value);
}

jsbind::DOMString HTMLEmbedElement::height() const {
    return HTMLElement::get("height").as<jsbind::DOMString>();
}

void HTMLEmbedElement::height(const jsbind::DOMString& value) {
    HTMLElement::set("height", value);
}

Document HTMLEmbedElement::getSVGDocument() {
    return HTMLElement::call("getSVGDocument").as<Document>();
}

jsbind::DOMString HTMLEmbedElement::align() const {
    return HTMLElement::get("align").as<jsbind::DOMString>();
}

void HTMLEmbedElement::align(const jsbind::DOMString& value) {
    HTMLElement::set("align", value);
}

jsbind::DOMString HTMLEmbedElement::name() const {
    return HTMLElement::get("name").as<jsbind::DOMString>();
}

void HTMLEmbedElement::name(const jsbind::DOMString& value) {
    HTMLElement::set("name", value);
}

