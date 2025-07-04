#include <webbind/HTMLButtonElement.hpp>
#include <webbind/Element.hpp>
#include <webbind/HTMLFormElement.hpp>
#include <webbind/ValidityState.hpp>
#include <webbind/NodeList.hpp>


HTMLButtonElement HTMLButtonElement::take_ownership(Handle h) noexcept {
        return HTMLButtonElement(h);
    }
HTMLButtonElement HTMLButtonElement::clone() const noexcept { return *this; }
HTMLButtonElement::HTMLButtonElement(Handle h) noexcept : HTMLElement(emlite::Val::take_ownership(h)) {}
HTMLButtonElement::HTMLButtonElement(const emlite::Val &val) noexcept: HTMLElement(val) {}


HTMLButtonElement::HTMLButtonElement(): HTMLElement(emlite::Val::global("HTMLButtonElement").new_()) {}

jsbind::DOMString HTMLButtonElement::command() const {
    return HTMLElement::get("command").as<jsbind::DOMString>();
}

void HTMLButtonElement::command(const jsbind::DOMString& value) {
    HTMLElement::set("command", value);
}

Element HTMLButtonElement::commandForElement() const {
    return HTMLElement::get("commandForElement").as<Element>();
}

void HTMLButtonElement::commandForElement(const Element& value) {
    HTMLElement::set("commandForElement", value);
}

bool HTMLButtonElement::disabled() const {
    return HTMLElement::get("disabled").as<bool>();
}

void HTMLButtonElement::disabled(bool value) {
    HTMLElement::set("disabled", value);
}

HTMLFormElement HTMLButtonElement::form() const {
    return HTMLElement::get("form").as<HTMLFormElement>();
}

jsbind::USVString HTMLButtonElement::formAction() const {
    return HTMLElement::get("formAction").as<jsbind::USVString>();
}

void HTMLButtonElement::formAction(const jsbind::USVString& value) {
    HTMLElement::set("formAction", value);
}

jsbind::DOMString HTMLButtonElement::formEnctype() const {
    return HTMLElement::get("formEnctype").as<jsbind::DOMString>();
}

void HTMLButtonElement::formEnctype(const jsbind::DOMString& value) {
    HTMLElement::set("formEnctype", value);
}

jsbind::DOMString HTMLButtonElement::formMethod() const {
    return HTMLElement::get("formMethod").as<jsbind::DOMString>();
}

void HTMLButtonElement::formMethod(const jsbind::DOMString& value) {
    HTMLElement::set("formMethod", value);
}

bool HTMLButtonElement::formNoValidate() const {
    return HTMLElement::get("formNoValidate").as<bool>();
}

void HTMLButtonElement::formNoValidate(bool value) {
    HTMLElement::set("formNoValidate", value);
}

jsbind::DOMString HTMLButtonElement::formTarget() const {
    return HTMLElement::get("formTarget").as<jsbind::DOMString>();
}

void HTMLButtonElement::formTarget(const jsbind::DOMString& value) {
    HTMLElement::set("formTarget", value);
}

jsbind::DOMString HTMLButtonElement::name() const {
    return HTMLElement::get("name").as<jsbind::DOMString>();
}

void HTMLButtonElement::name(const jsbind::DOMString& value) {
    HTMLElement::set("name", value);
}

jsbind::DOMString HTMLButtonElement::type() const {
    return HTMLElement::get("type").as<jsbind::DOMString>();
}

void HTMLButtonElement::type(const jsbind::DOMString& value) {
    HTMLElement::set("type", value);
}

jsbind::DOMString HTMLButtonElement::value() const {
    return HTMLElement::get("value").as<jsbind::DOMString>();
}

void HTMLButtonElement::value(const jsbind::DOMString& value) {
    HTMLElement::set("value", value);
}

bool HTMLButtonElement::willValidate() const {
    return HTMLElement::get("willValidate").as<bool>();
}

ValidityState HTMLButtonElement::validity() const {
    return HTMLElement::get("validity").as<ValidityState>();
}

jsbind::DOMString HTMLButtonElement::validationMessage() const {
    return HTMLElement::get("validationMessage").as<jsbind::DOMString>();
}

bool HTMLButtonElement::checkValidity() {
    return HTMLElement::call("checkValidity").as<bool>();
}

bool HTMLButtonElement::reportValidity() {
    return HTMLElement::call("reportValidity").as<bool>();
}

jsbind::Undefined HTMLButtonElement::setCustomValidity(const jsbind::DOMString& error) {
    return HTMLElement::call("setCustomValidity", error).as<jsbind::Undefined>();
}

NodeList HTMLButtonElement::labels() const {
    return HTMLElement::get("labels").as<NodeList>();
}

Element HTMLButtonElement::popoverTargetElement() const {
    return HTMLElement::get("popoverTargetElement").as<Element>();
}

void HTMLButtonElement::popoverTargetElement(const Element& value) {
    HTMLElement::set("popoverTargetElement", value);
}

jsbind::DOMString HTMLButtonElement::popoverTargetAction() const {
    return HTMLElement::get("popoverTargetAction").as<jsbind::DOMString>();
}

void HTMLButtonElement::popoverTargetAction(const jsbind::DOMString& value) {
    HTMLElement::set("popoverTargetAction", value);
}

