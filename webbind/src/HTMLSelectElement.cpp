#include <webbind/HTMLSelectElement.hpp>
#include <webbind/HTMLFormElement.hpp>
#include <webbind/HTMLOptionsCollection.hpp>
#include <webbind/HTMLOptionElement.hpp>
#include <webbind/HTMLCollection.hpp>
#include <webbind/ValidityState.hpp>
#include <webbind/NodeList.hpp>


HTMLSelectElement HTMLSelectElement::take_ownership(Handle h) noexcept {
        return HTMLSelectElement(h);
    }
HTMLSelectElement HTMLSelectElement::clone() const noexcept { return *this; }
HTMLSelectElement::HTMLSelectElement(Handle h) noexcept : HTMLElement(emlite::Val::take_ownership(h)) {}
HTMLSelectElement::HTMLSelectElement(const emlite::Val &val) noexcept: HTMLElement(val) {}


HTMLSelectElement::HTMLSelectElement() : HTMLElement(emlite::Val::global("HTMLSelectElement").new_()) {}

jsbind::DOMString HTMLSelectElement::autocomplete() const {
    return HTMLElement::get("autocomplete").as<jsbind::DOMString>();
}

void HTMLSelectElement::autocomplete(const jsbind::DOMString& value) {
    HTMLElement::set("autocomplete", value);
}

bool HTMLSelectElement::disabled() const {
    return HTMLElement::get("disabled").as<bool>();
}

void HTMLSelectElement::disabled(bool value) {
    HTMLElement::set("disabled", value);
}

HTMLFormElement HTMLSelectElement::form() const {
    return HTMLElement::get("form").as<HTMLFormElement>();
}

bool HTMLSelectElement::multiple() const {
    return HTMLElement::get("multiple").as<bool>();
}

void HTMLSelectElement::multiple(bool value) {
    HTMLElement::set("multiple", value);
}

jsbind::DOMString HTMLSelectElement::name() const {
    return HTMLElement::get("name").as<jsbind::DOMString>();
}

void HTMLSelectElement::name(const jsbind::DOMString& value) {
    HTMLElement::set("name", value);
}

bool HTMLSelectElement::required() const {
    return HTMLElement::get("required").as<bool>();
}

void HTMLSelectElement::required(bool value) {
    HTMLElement::set("required", value);
}

unsigned long HTMLSelectElement::size() const {
    return HTMLElement::get("size").as<unsigned long>();
}

void HTMLSelectElement::size(unsigned long value) {
    HTMLElement::set("size", value);
}

jsbind::DOMString HTMLSelectElement::type() const {
    return HTMLElement::get("type").as<jsbind::DOMString>();
}

HTMLOptionsCollection HTMLSelectElement::options() const {
    return HTMLElement::get("options").as<HTMLOptionsCollection>();
}

unsigned long HTMLSelectElement::length() const {
    return HTMLElement::get("length").as<unsigned long>();
}

void HTMLSelectElement::length(unsigned long value) {
    HTMLElement::set("length", value);
}

HTMLOptionElement HTMLSelectElement::item(unsigned long index) {
    return HTMLElement::call("item", index).as<HTMLOptionElement>();
}

HTMLOptionElement HTMLSelectElement::namedItem(const jsbind::DOMString& name) {
    return HTMLElement::call("namedItem", name).as<HTMLOptionElement>();
}

jsbind::Undefined HTMLSelectElement::add(const jsbind::Any& element) {
    return HTMLElement::call("add", element).as<jsbind::Undefined>();
}

jsbind::Undefined HTMLSelectElement::add(const jsbind::Any& element, const jsbind::Any& before) {
    return HTMLElement::call("add", element, before).as<jsbind::Undefined>();
}

jsbind::Undefined HTMLSelectElement::remove(long index) {
    return HTMLElement::call("remove", index).as<jsbind::Undefined>();
}

HTMLCollection HTMLSelectElement::selectedOptions() const {
    return HTMLElement::get("selectedOptions").as<HTMLCollection>();
}

long HTMLSelectElement::selectedIndex() const {
    return HTMLElement::get("selectedIndex").as<long>();
}

void HTMLSelectElement::selectedIndex(long value) {
    HTMLElement::set("selectedIndex", value);
}

jsbind::DOMString HTMLSelectElement::value() const {
    return HTMLElement::get("value").as<jsbind::DOMString>();
}

void HTMLSelectElement::value(const jsbind::DOMString& value) {
    HTMLElement::set("value", value);
}

bool HTMLSelectElement::willValidate() const {
    return HTMLElement::get("willValidate").as<bool>();
}

ValidityState HTMLSelectElement::validity() const {
    return HTMLElement::get("validity").as<ValidityState>();
}

jsbind::DOMString HTMLSelectElement::validationMessage() const {
    return HTMLElement::get("validationMessage").as<jsbind::DOMString>();
}

bool HTMLSelectElement::checkValidity() {
    return HTMLElement::call("checkValidity").as<bool>();
}

bool HTMLSelectElement::reportValidity() {
    return HTMLElement::call("reportValidity").as<bool>();
}

jsbind::Undefined HTMLSelectElement::setCustomValidity(const jsbind::DOMString& error) {
    return HTMLElement::call("setCustomValidity", error).as<jsbind::Undefined>();
}

jsbind::Undefined HTMLSelectElement::showPicker() {
    return HTMLElement::call("showPicker").as<jsbind::Undefined>();
}

NodeList HTMLSelectElement::labels() const {
    return HTMLElement::get("labels").as<NodeList>();
}

