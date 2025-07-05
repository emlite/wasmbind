#include <webbind/HTMLOutputElement.hpp>
#include <webbind/DOMTokenList.hpp>
#include <webbind/HTMLFormElement.hpp>
#include <webbind/ValidityState.hpp>
#include <webbind/NodeList.hpp>


HTMLOutputElement HTMLOutputElement::take_ownership(Handle h) noexcept {
        return HTMLOutputElement(h);
    }
HTMLOutputElement HTMLOutputElement::clone() const noexcept { return *this; }
HTMLOutputElement::HTMLOutputElement(Handle h) noexcept : HTMLElement(emlite::Val::take_ownership(h)) {}
HTMLOutputElement::HTMLOutputElement(const emlite::Val &val) noexcept: HTMLElement(val) {}


HTMLOutputElement::HTMLOutputElement() : HTMLElement(emlite::Val::global("HTMLOutputElement").new_()) {}

DOMTokenList HTMLOutputElement::htmlFor() const {
    return HTMLElement::get("htmlFor").as<DOMTokenList>();
}

HTMLFormElement HTMLOutputElement::form() const {
    return HTMLElement::get("form").as<HTMLFormElement>();
}

jsbind::DOMString HTMLOutputElement::name() const {
    return HTMLElement::get("name").as<jsbind::DOMString>();
}

void HTMLOutputElement::name(const jsbind::DOMString& value) {
    HTMLElement::set("name", value);
}

jsbind::DOMString HTMLOutputElement::type() const {
    return HTMLElement::get("type").as<jsbind::DOMString>();
}

jsbind::DOMString HTMLOutputElement::defaultValue() const {
    return HTMLElement::get("defaultValue").as<jsbind::DOMString>();
}

void HTMLOutputElement::defaultValue(const jsbind::DOMString& value) {
    HTMLElement::set("defaultValue", value);
}

jsbind::DOMString HTMLOutputElement::value() const {
    return HTMLElement::get("value").as<jsbind::DOMString>();
}

void HTMLOutputElement::value(const jsbind::DOMString& value) {
    HTMLElement::set("value", value);
}

bool HTMLOutputElement::willValidate() const {
    return HTMLElement::get("willValidate").as<bool>();
}

ValidityState HTMLOutputElement::validity() const {
    return HTMLElement::get("validity").as<ValidityState>();
}

jsbind::DOMString HTMLOutputElement::validationMessage() const {
    return HTMLElement::get("validationMessage").as<jsbind::DOMString>();
}

bool HTMLOutputElement::checkValidity() {
    return HTMLElement::call("checkValidity").as<bool>();
}

bool HTMLOutputElement::reportValidity() {
    return HTMLElement::call("reportValidity").as<bool>();
}

jsbind::Undefined HTMLOutputElement::setCustomValidity(const jsbind::DOMString& error) {
    return HTMLElement::call("setCustomValidity", error).as<jsbind::Undefined>();
}

NodeList HTMLOutputElement::labels() const {
    return HTMLElement::get("labels").as<NodeList>();
}

