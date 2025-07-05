#include <webbind/HTMLFormElement.hpp>
#include <webbind/DOMTokenList.hpp>
#include <webbind/HTMLFormControlsCollection.hpp>


HTMLFormElement HTMLFormElement::take_ownership(Handle h) noexcept {
        return HTMLFormElement(h);
    }
HTMLFormElement HTMLFormElement::clone() const noexcept { return *this; }
HTMLFormElement::HTMLFormElement(Handle h) noexcept : HTMLElement(emlite::Val::take_ownership(h)) {}
HTMLFormElement::HTMLFormElement(const emlite::Val &val) noexcept: HTMLElement(val) {}


HTMLFormElement::HTMLFormElement() : HTMLElement(emlite::Val::global("HTMLFormElement").new_()) {}

jsbind::DOMString HTMLFormElement::acceptCharset() const {
    return HTMLElement::get("acceptCharset").as<jsbind::DOMString>();
}

void HTMLFormElement::acceptCharset(const jsbind::DOMString& value) {
    HTMLElement::set("acceptCharset", value);
}

jsbind::USVString HTMLFormElement::action() const {
    return HTMLElement::get("action").as<jsbind::USVString>();
}

void HTMLFormElement::action(const jsbind::USVString& value) {
    HTMLElement::set("action", value);
}

jsbind::DOMString HTMLFormElement::autocomplete() const {
    return HTMLElement::get("autocomplete").as<jsbind::DOMString>();
}

void HTMLFormElement::autocomplete(const jsbind::DOMString& value) {
    HTMLElement::set("autocomplete", value);
}

jsbind::DOMString HTMLFormElement::enctype() const {
    return HTMLElement::get("enctype").as<jsbind::DOMString>();
}

void HTMLFormElement::enctype(const jsbind::DOMString& value) {
    HTMLElement::set("enctype", value);
}

jsbind::DOMString HTMLFormElement::encoding() const {
    return HTMLElement::get("encoding").as<jsbind::DOMString>();
}

void HTMLFormElement::encoding(const jsbind::DOMString& value) {
    HTMLElement::set("encoding", value);
}

jsbind::DOMString HTMLFormElement::method() const {
    return HTMLElement::get("method").as<jsbind::DOMString>();
}

void HTMLFormElement::method(const jsbind::DOMString& value) {
    HTMLElement::set("method", value);
}

jsbind::DOMString HTMLFormElement::name() const {
    return HTMLElement::get("name").as<jsbind::DOMString>();
}

void HTMLFormElement::name(const jsbind::DOMString& value) {
    HTMLElement::set("name", value);
}

bool HTMLFormElement::noValidate() const {
    return HTMLElement::get("noValidate").as<bool>();
}

void HTMLFormElement::noValidate(bool value) {
    HTMLElement::set("noValidate", value);
}

jsbind::DOMString HTMLFormElement::target() const {
    return HTMLElement::get("target").as<jsbind::DOMString>();
}

void HTMLFormElement::target(const jsbind::DOMString& value) {
    HTMLElement::set("target", value);
}

jsbind::DOMString HTMLFormElement::rel() const {
    return HTMLElement::get("rel").as<jsbind::DOMString>();
}

void HTMLFormElement::rel(const jsbind::DOMString& value) {
    HTMLElement::set("rel", value);
}

DOMTokenList HTMLFormElement::relList() const {
    return HTMLElement::get("relList").as<DOMTokenList>();
}

HTMLFormControlsCollection HTMLFormElement::elements() const {
    return HTMLElement::get("elements").as<HTMLFormControlsCollection>();
}

unsigned long HTMLFormElement::length() const {
    return HTMLElement::get("length").as<unsigned long>();
}

jsbind::Undefined HTMLFormElement::submit() {
    return HTMLElement::call("submit").as<jsbind::Undefined>();
}

jsbind::Undefined HTMLFormElement::requestSubmit() {
    return HTMLElement::call("requestSubmit").as<jsbind::Undefined>();
}

jsbind::Undefined HTMLFormElement::requestSubmit(const HTMLElement& submitter) {
    return HTMLElement::call("requestSubmit", submitter).as<jsbind::Undefined>();
}

jsbind::Undefined HTMLFormElement::reset() {
    return HTMLElement::call("reset").as<jsbind::Undefined>();
}

bool HTMLFormElement::checkValidity() {
    return HTMLElement::call("checkValidity").as<bool>();
}

bool HTMLFormElement::reportValidity() {
    return HTMLElement::call("reportValidity").as<bool>();
}

