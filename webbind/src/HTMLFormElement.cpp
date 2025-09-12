#include <webbind/HTMLFormElement.hpp>
#include <webbind/DOMTokenList.hpp>
#include <webbind/HTMLFormControlsCollection.hpp>
#include <webbind/Element.hpp>

namespace webbind {

HTMLFormElement HTMLFormElement::take_ownership(Handle h) noexcept {
    return HTMLFormElement(h);
}

HTMLFormElement HTMLFormElement::clone() const noexcept { return *this; }

emlite::Val HTMLFormElement::instance() noexcept { return emlite::Val::global("HTMLFormElement"); }

HTMLFormElement::HTMLFormElement(Handle h) noexcept : HTMLElement(emlite::Val::take_ownership(h)) {}

HTMLFormElement::HTMLFormElement(const emlite::Val &val) noexcept: HTMLElement(val) {}

HTMLFormElement::HTMLFormElement() : HTMLElement(emlite::Val::global("HTMLFormElement").new_()) {}

jsbind::String HTMLFormElement::acceptCharset() const {
    return HTMLElement::get("acceptCharset").as<jsbind::String>();
}

void HTMLFormElement::acceptCharset(const jsbind::String& value) {
    HTMLElement::set("acceptCharset", value);
}

jsbind::String HTMLFormElement::action() const {
    return HTMLElement::get("action").as<jsbind::String>();
}

void HTMLFormElement::action(const jsbind::String& value) {
    HTMLElement::set("action", value);
}

jsbind::String HTMLFormElement::autocomplete() const {
    return HTMLElement::get("autocomplete").as<jsbind::String>();
}

void HTMLFormElement::autocomplete(const jsbind::String& value) {
    HTMLElement::set("autocomplete", value);
}

jsbind::String HTMLFormElement::enctype() const {
    return HTMLElement::get("enctype").as<jsbind::String>();
}

void HTMLFormElement::enctype(const jsbind::String& value) {
    HTMLElement::set("enctype", value);
}

jsbind::String HTMLFormElement::encoding() const {
    return HTMLElement::get("encoding").as<jsbind::String>();
}

void HTMLFormElement::encoding(const jsbind::String& value) {
    HTMLElement::set("encoding", value);
}

jsbind::String HTMLFormElement::method() const {
    return HTMLElement::get("method").as<jsbind::String>();
}

void HTMLFormElement::method(const jsbind::String& value) {
    HTMLElement::set("method", value);
}

jsbind::String HTMLFormElement::name() const {
    return HTMLElement::get("name").as<jsbind::String>();
}

void HTMLFormElement::name(const jsbind::String& value) {
    HTMLElement::set("name", value);
}

bool HTMLFormElement::noValidate() const {
    return HTMLElement::get("noValidate").as<bool>();
}

void HTMLFormElement::noValidate(bool value) {
    HTMLElement::set("noValidate", value);
}

jsbind::String HTMLFormElement::target() const {
    return HTMLElement::get("target").as<jsbind::String>();
}

void HTMLFormElement::target(const jsbind::String& value) {
    HTMLElement::set("target", value);
}

jsbind::String HTMLFormElement::rel() const {
    return HTMLElement::get("rel").as<jsbind::String>();
}

void HTMLFormElement::rel(const jsbind::String& value) {
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


} // namespace webbind