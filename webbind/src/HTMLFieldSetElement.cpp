#include <webbind/HTMLFieldSetElement.hpp>
#include <webbind/HTMLFormElement.hpp>
#include <webbind/HTMLCollection.hpp>
#include <webbind/ValidityState.hpp>


HTMLFieldSetElement HTMLFieldSetElement::take_ownership(Handle h) noexcept {
        return HTMLFieldSetElement(h);
    }
HTMLFieldSetElement HTMLFieldSetElement::clone() const noexcept { return *this; }
HTMLFieldSetElement::HTMLFieldSetElement(Handle h) noexcept : HTMLElement(emlite::Val::take_ownership(h)) {}
HTMLFieldSetElement::HTMLFieldSetElement(const emlite::Val &val) noexcept: HTMLElement(val) {}


HTMLFieldSetElement::HTMLFieldSetElement() : HTMLElement(emlite::Val::global("HTMLFieldSetElement").new_()) {}

bool HTMLFieldSetElement::disabled() const {
    return HTMLElement::get("disabled").as<bool>();
}

void HTMLFieldSetElement::disabled(bool value) {
    HTMLElement::set("disabled", value);
}

HTMLFormElement HTMLFieldSetElement::form() const {
    return HTMLElement::get("form").as<HTMLFormElement>();
}

jsbind::DOMString HTMLFieldSetElement::name() const {
    return HTMLElement::get("name").as<jsbind::DOMString>();
}

void HTMLFieldSetElement::name(const jsbind::DOMString& value) {
    HTMLElement::set("name", value);
}

jsbind::DOMString HTMLFieldSetElement::type() const {
    return HTMLElement::get("type").as<jsbind::DOMString>();
}

HTMLCollection HTMLFieldSetElement::elements() const {
    return HTMLElement::get("elements").as<HTMLCollection>();
}

bool HTMLFieldSetElement::willValidate() const {
    return HTMLElement::get("willValidate").as<bool>();
}

ValidityState HTMLFieldSetElement::validity() const {
    return HTMLElement::get("validity").as<ValidityState>();
}

jsbind::DOMString HTMLFieldSetElement::validationMessage() const {
    return HTMLElement::get("validationMessage").as<jsbind::DOMString>();
}

bool HTMLFieldSetElement::checkValidity() {
    return HTMLElement::call("checkValidity").as<bool>();
}

bool HTMLFieldSetElement::reportValidity() {
    return HTMLElement::call("reportValidity").as<bool>();
}

jsbind::Undefined HTMLFieldSetElement::setCustomValidity(const jsbind::DOMString& error) {
    return HTMLElement::call("setCustomValidity", error).as<jsbind::Undefined>();
}

