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


HTMLButtonElement::HTMLButtonElement() : HTMLElement(emlite::Val::global("HTMLButtonElement").new_()) {}

jsbind::String HTMLButtonElement::command() const {
    return HTMLElement::get("command").as<jsbind::String>();
}

void HTMLButtonElement::command(const jsbind::String& value) {
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

jsbind::String HTMLButtonElement::formAction() const {
    return HTMLElement::get("formAction").as<jsbind::String>();
}

void HTMLButtonElement::formAction(const jsbind::String& value) {
    HTMLElement::set("formAction", value);
}

jsbind::String HTMLButtonElement::formEnctype() const {
    return HTMLElement::get("formEnctype").as<jsbind::String>();
}

void HTMLButtonElement::formEnctype(const jsbind::String& value) {
    HTMLElement::set("formEnctype", value);
}

jsbind::String HTMLButtonElement::formMethod() const {
    return HTMLElement::get("formMethod").as<jsbind::String>();
}

void HTMLButtonElement::formMethod(const jsbind::String& value) {
    HTMLElement::set("formMethod", value);
}

bool HTMLButtonElement::formNoValidate() const {
    return HTMLElement::get("formNoValidate").as<bool>();
}

void HTMLButtonElement::formNoValidate(bool value) {
    HTMLElement::set("formNoValidate", value);
}

jsbind::String HTMLButtonElement::formTarget() const {
    return HTMLElement::get("formTarget").as<jsbind::String>();
}

void HTMLButtonElement::formTarget(const jsbind::String& value) {
    HTMLElement::set("formTarget", value);
}

jsbind::String HTMLButtonElement::name() const {
    return HTMLElement::get("name").as<jsbind::String>();
}

void HTMLButtonElement::name(const jsbind::String& value) {
    HTMLElement::set("name", value);
}

jsbind::String HTMLButtonElement::type() const {
    return HTMLElement::get("type").as<jsbind::String>();
}

void HTMLButtonElement::type(const jsbind::String& value) {
    HTMLElement::set("type", value);
}

jsbind::String HTMLButtonElement::value() const {
    return HTMLElement::get("value").as<jsbind::String>();
}

void HTMLButtonElement::value(const jsbind::String& value) {
    HTMLElement::set("value", value);
}

bool HTMLButtonElement::willValidate() const {
    return HTMLElement::get("willValidate").as<bool>();
}

ValidityState HTMLButtonElement::validity() const {
    return HTMLElement::get("validity").as<ValidityState>();
}

jsbind::String HTMLButtonElement::validationMessage() const {
    return HTMLElement::get("validationMessage").as<jsbind::String>();
}

bool HTMLButtonElement::checkValidity() {
    return HTMLElement::call("checkValidity").as<bool>();
}

bool HTMLButtonElement::reportValidity() {
    return HTMLElement::call("reportValidity").as<bool>();
}

jsbind::Undefined HTMLButtonElement::setCustomValidity(const jsbind::String& error) {
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

jsbind::String HTMLButtonElement::popoverTargetAction() const {
    return HTMLElement::get("popoverTargetAction").as<jsbind::String>();
}

void HTMLButtonElement::popoverTargetAction(const jsbind::String& value) {
    HTMLElement::set("popoverTargetAction", value);
}

