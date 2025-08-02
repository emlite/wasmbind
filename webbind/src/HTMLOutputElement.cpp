#include <webbind/HTMLOutputElement.hpp>
#include <webbind/DOMTokenList.hpp>
#include <webbind/HTMLFormElement.hpp>
#include <webbind/ValidityState.hpp>
#include <webbind/NodeList.hpp>


HTMLOutputElement HTMLOutputElement::take_ownership(Handle h) noexcept {
        return HTMLOutputElement(h);
    }
HTMLOutputElement HTMLOutputElement::clone() const noexcept { return *this; }
emlite::Val HTMLOutputElement::instance() noexcept { return emlite::Val::global("HTMLOutputElement"); }
HTMLOutputElement::HTMLOutputElement(Handle h) noexcept : HTMLElement(emlite::Val::take_ownership(h)) {}
HTMLOutputElement::HTMLOutputElement(const emlite::Val &val) noexcept: HTMLElement(val) {}


HTMLOutputElement::HTMLOutputElement() : HTMLElement(emlite::Val::global("HTMLOutputElement").new_()) {}

DOMTokenList HTMLOutputElement::htmlFor() const {
    return HTMLElement::get("htmlFor").as<DOMTokenList>();
}

HTMLFormElement HTMLOutputElement::form() const {
    return HTMLElement::get("form").as<HTMLFormElement>();
}

jsbind::String HTMLOutputElement::name() const {
    return HTMLElement::get("name").as<jsbind::String>();
}

void HTMLOutputElement::name(const jsbind::String& value) {
    HTMLElement::set("name", value);
}

jsbind::String HTMLOutputElement::type() const {
    return HTMLElement::get("type").as<jsbind::String>();
}

jsbind::String HTMLOutputElement::defaultValue() const {
    return HTMLElement::get("defaultValue").as<jsbind::String>();
}

void HTMLOutputElement::defaultValue(const jsbind::String& value) {
    HTMLElement::set("defaultValue", value);
}

jsbind::String HTMLOutputElement::value() const {
    return HTMLElement::get("value").as<jsbind::String>();
}

void HTMLOutputElement::value(const jsbind::String& value) {
    HTMLElement::set("value", value);
}

bool HTMLOutputElement::willValidate() const {
    return HTMLElement::get("willValidate").as<bool>();
}

ValidityState HTMLOutputElement::validity() const {
    return HTMLElement::get("validity").as<ValidityState>();
}

jsbind::String HTMLOutputElement::validationMessage() const {
    return HTMLElement::get("validationMessage").as<jsbind::String>();
}

bool HTMLOutputElement::checkValidity() {
    return HTMLElement::call("checkValidity").as<bool>();
}

bool HTMLOutputElement::reportValidity() {
    return HTMLElement::call("reportValidity").as<bool>();
}

jsbind::Undefined HTMLOutputElement::setCustomValidity(const jsbind::String& error) {
    return HTMLElement::call("setCustomValidity", error).as<jsbind::Undefined>();
}

NodeList HTMLOutputElement::labels() const {
    return HTMLElement::get("labels").as<NodeList>();
}

