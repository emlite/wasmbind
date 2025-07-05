#include <webbind/HTMLParamElement.hpp>


HTMLParamElement HTMLParamElement::take_ownership(Handle h) noexcept {
        return HTMLParamElement(h);
    }
HTMLParamElement HTMLParamElement::clone() const noexcept { return *this; }
HTMLParamElement::HTMLParamElement(Handle h) noexcept : HTMLElement(emlite::Val::take_ownership(h)) {}
HTMLParamElement::HTMLParamElement(const emlite::Val &val) noexcept: HTMLElement(val) {}


HTMLParamElement::HTMLParamElement() : HTMLElement(emlite::Val::global("HTMLParamElement").new_()) {}

jsbind::DOMString HTMLParamElement::name() const {
    return HTMLElement::get("name").as<jsbind::DOMString>();
}

void HTMLParamElement::name(const jsbind::DOMString& value) {
    HTMLElement::set("name", value);
}

jsbind::DOMString HTMLParamElement::value() const {
    return HTMLElement::get("value").as<jsbind::DOMString>();
}

void HTMLParamElement::value(const jsbind::DOMString& value) {
    HTMLElement::set("value", value);
}

jsbind::DOMString HTMLParamElement::type() const {
    return HTMLElement::get("type").as<jsbind::DOMString>();
}

void HTMLParamElement::type(const jsbind::DOMString& value) {
    HTMLElement::set("type", value);
}

jsbind::DOMString HTMLParamElement::valueType() const {
    return HTMLElement::get("valueType").as<jsbind::DOMString>();
}

void HTMLParamElement::valueType(const jsbind::DOMString& value) {
    HTMLElement::set("valueType", value);
}

