#include "webbind/HTMLTemplateElement.hpp"
#include "webbind/DocumentFragment.hpp"

namespace webbind {

HTMLTemplateElement HTMLTemplateElement::take_ownership(Handle h) noexcept {
        return HTMLTemplateElement(h);
    }
HTMLTemplateElement HTMLTemplateElement::clone() const noexcept { return *this; }
emlite::Val HTMLTemplateElement::instance() noexcept { return emlite::Val::global("HTMLTemplateElement"); }
HTMLTemplateElement::HTMLTemplateElement(Handle h) noexcept : HTMLElement(emlite::Val::take_ownership(h)) {}
HTMLTemplateElement::HTMLTemplateElement(const emlite::Val &val) noexcept: HTMLElement(val) {}

HTMLTemplateElement::HTMLTemplateElement() : HTMLElement(emlite::Val::global("HTMLTemplateElement").new_()) {}

DocumentFragment HTMLTemplateElement::content() const {
    return HTMLElement::get("content").as<DocumentFragment>();
}

jsbind::String HTMLTemplateElement::shadowRootMode() const {
    return HTMLElement::get("shadowRootMode").as<jsbind::String>();
}

void HTMLTemplateElement::shadowRootMode(const jsbind::String& value) {
    HTMLElement::set("shadowRootMode", value);
}

bool HTMLTemplateElement::shadowRootDelegatesFocus() const {
    return HTMLElement::get("shadowRootDelegatesFocus").as<bool>();
}

void HTMLTemplateElement::shadowRootDelegatesFocus(bool value) {
    HTMLElement::set("shadowRootDelegatesFocus", value);
}

bool HTMLTemplateElement::shadowRootClonable() const {
    return HTMLElement::get("shadowRootClonable").as<bool>();
}

void HTMLTemplateElement::shadowRootClonable(bool value) {
    HTMLElement::set("shadowRootClonable", value);
}

bool HTMLTemplateElement::shadowRootSerializable() const {
    return HTMLElement::get("shadowRootSerializable").as<bool>();
}

void HTMLTemplateElement::shadowRootSerializable(bool value) {
    HTMLElement::set("shadowRootSerializable", value);
}

jsbind::String HTMLTemplateElement::shadowRootCustomElementRegistry() const {
    return HTMLElement::get("shadowRootCustomElementRegistry").as<jsbind::String>();
}

void HTMLTemplateElement::shadowRootCustomElementRegistry(const jsbind::String& value) {
    HTMLElement::set("shadowRootCustomElementRegistry", value);
}


} // namespace webbind