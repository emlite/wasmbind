#include "webbind/HTMLEmbedElement.hpp"
#include "webbind/Document.hpp"

namespace webbind {

HTMLEmbedElement HTMLEmbedElement::take_ownership(Handle h) noexcept {
        return HTMLEmbedElement(h);
    }
HTMLEmbedElement HTMLEmbedElement::clone() const noexcept { return *this; }
emlite::Val HTMLEmbedElement::instance() noexcept { return emlite::Val::global("HTMLEmbedElement"); }
HTMLEmbedElement::HTMLEmbedElement(Handle h) noexcept : HTMLElement(emlite::Val::take_ownership(h)) {}
HTMLEmbedElement::HTMLEmbedElement(const emlite::Val &val) noexcept: HTMLElement(val) {}

HTMLEmbedElement::HTMLEmbedElement() : HTMLElement(emlite::Val::global("HTMLEmbedElement").new_()) {}

jsbind::String HTMLEmbedElement::src() const {
    return HTMLElement::get("src").as<jsbind::String>();
}

void HTMLEmbedElement::src(const jsbind::String& value) {
    HTMLElement::set("src", value);
}

jsbind::String HTMLEmbedElement::type() const {
    return HTMLElement::get("type").as<jsbind::String>();
}

void HTMLEmbedElement::type(const jsbind::String& value) {
    HTMLElement::set("type", value);
}

jsbind::String HTMLEmbedElement::width() const {
    return HTMLElement::get("width").as<jsbind::String>();
}

void HTMLEmbedElement::width(const jsbind::String& value) {
    HTMLElement::set("width", value);
}

jsbind::String HTMLEmbedElement::height() const {
    return HTMLElement::get("height").as<jsbind::String>();
}

void HTMLEmbedElement::height(const jsbind::String& value) {
    HTMLElement::set("height", value);
}

Document HTMLEmbedElement::getSVGDocument() {
    return HTMLElement::call("getSVGDocument").as<Document>();
}

jsbind::String HTMLEmbedElement::align() const {
    return HTMLElement::get("align").as<jsbind::String>();
}

void HTMLEmbedElement::align(const jsbind::String& value) {
    HTMLElement::set("align", value);
}

jsbind::String HTMLEmbedElement::name() const {
    return HTMLElement::get("name").as<jsbind::String>();
}

void HTMLEmbedElement::name(const jsbind::String& value) {
    HTMLElement::set("name", value);
}


} // namespace webbind