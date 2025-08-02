#include <webbind/HTMLParamElement.hpp>


HTMLParamElement HTMLParamElement::take_ownership(Handle h) noexcept {
        return HTMLParamElement(h);
    }
HTMLParamElement HTMLParamElement::clone() const noexcept { return *this; }
emlite::Val HTMLParamElement::instance() noexcept { return emlite::Val::global("HTMLParamElement"); }
HTMLParamElement::HTMLParamElement(Handle h) noexcept : HTMLElement(emlite::Val::take_ownership(h)) {}
HTMLParamElement::HTMLParamElement(const emlite::Val &val) noexcept: HTMLElement(val) {}


HTMLParamElement::HTMLParamElement() : HTMLElement(emlite::Val::global("HTMLParamElement").new_()) {}

jsbind::String HTMLParamElement::name() const {
    return HTMLElement::get("name").as<jsbind::String>();
}

void HTMLParamElement::name(const jsbind::String& value) {
    HTMLElement::set("name", value);
}

jsbind::String HTMLParamElement::value() const {
    return HTMLElement::get("value").as<jsbind::String>();
}

void HTMLParamElement::value(const jsbind::String& value) {
    HTMLElement::set("value", value);
}

jsbind::String HTMLParamElement::type() const {
    return HTMLElement::get("type").as<jsbind::String>();
}

void HTMLParamElement::type(const jsbind::String& value) {
    HTMLElement::set("type", value);
}

jsbind::String HTMLParamElement::valueType() const {
    return HTMLElement::get("valueType").as<jsbind::String>();
}

void HTMLParamElement::valueType(const jsbind::String& value) {
    HTMLElement::set("valueType", value);
}

