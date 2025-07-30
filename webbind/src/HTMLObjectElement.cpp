#include <webbind/HTMLObjectElement.hpp>
#include <webbind/HTMLFormElement.hpp>
#include <webbind/Document.hpp>
#include <webbind/ValidityState.hpp>


HTMLObjectElement HTMLObjectElement::take_ownership(Handle h) noexcept {
        return HTMLObjectElement(h);
    }
HTMLObjectElement HTMLObjectElement::clone() const noexcept { return *this; }
HTMLObjectElement::HTMLObjectElement(Handle h) noexcept : HTMLElement(emlite::Val::take_ownership(h)) {}
HTMLObjectElement::HTMLObjectElement(const emlite::Val &val) noexcept: HTMLElement(val) {}


HTMLObjectElement::HTMLObjectElement() : HTMLElement(emlite::Val::global("HTMLObjectElement").new_()) {}

jsbind::String HTMLObjectElement::data() const {
    return HTMLElement::get("data").as<jsbind::String>();
}

void HTMLObjectElement::data(const jsbind::String& value) {
    HTMLElement::set("data", value);
}

jsbind::String HTMLObjectElement::type() const {
    return HTMLElement::get("type").as<jsbind::String>();
}

void HTMLObjectElement::type(const jsbind::String& value) {
    HTMLElement::set("type", value);
}

jsbind::String HTMLObjectElement::name() const {
    return HTMLElement::get("name").as<jsbind::String>();
}

void HTMLObjectElement::name(const jsbind::String& value) {
    HTMLElement::set("name", value);
}

HTMLFormElement HTMLObjectElement::form() const {
    return HTMLElement::get("form").as<HTMLFormElement>();
}

jsbind::String HTMLObjectElement::width() const {
    return HTMLElement::get("width").as<jsbind::String>();
}

void HTMLObjectElement::width(const jsbind::String& value) {
    HTMLElement::set("width", value);
}

jsbind::String HTMLObjectElement::height() const {
    return HTMLElement::get("height").as<jsbind::String>();
}

void HTMLObjectElement::height(const jsbind::String& value) {
    HTMLElement::set("height", value);
}

Document HTMLObjectElement::contentDocument() const {
    return HTMLElement::get("contentDocument").as<Document>();
}

jsbind::Any HTMLObjectElement::contentWindow() const {
    return HTMLElement::get("contentWindow").as<jsbind::Any>();
}

Document HTMLObjectElement::getSVGDocument() {
    return HTMLElement::call("getSVGDocument").as<Document>();
}

bool HTMLObjectElement::willValidate() const {
    return HTMLElement::get("willValidate").as<bool>();
}

ValidityState HTMLObjectElement::validity() const {
    return HTMLElement::get("validity").as<ValidityState>();
}

jsbind::String HTMLObjectElement::validationMessage() const {
    return HTMLElement::get("validationMessage").as<jsbind::String>();
}

bool HTMLObjectElement::checkValidity() {
    return HTMLElement::call("checkValidity").as<bool>();
}

bool HTMLObjectElement::reportValidity() {
    return HTMLElement::call("reportValidity").as<bool>();
}

jsbind::Undefined HTMLObjectElement::setCustomValidity(const jsbind::String& error) {
    return HTMLElement::call("setCustomValidity", error).as<jsbind::Undefined>();
}

jsbind::String HTMLObjectElement::align() const {
    return HTMLElement::get("align").as<jsbind::String>();
}

void HTMLObjectElement::align(const jsbind::String& value) {
    HTMLElement::set("align", value);
}

jsbind::String HTMLObjectElement::archive() const {
    return HTMLElement::get("archive").as<jsbind::String>();
}

void HTMLObjectElement::archive(const jsbind::String& value) {
    HTMLElement::set("archive", value);
}

jsbind::String HTMLObjectElement::code() const {
    return HTMLElement::get("code").as<jsbind::String>();
}

void HTMLObjectElement::code(const jsbind::String& value) {
    HTMLElement::set("code", value);
}

bool HTMLObjectElement::declare() const {
    return HTMLElement::get("declare").as<bool>();
}

void HTMLObjectElement::declare(bool value) {
    HTMLElement::set("declare", value);
}

unsigned long HTMLObjectElement::hspace() const {
    return HTMLElement::get("hspace").as<unsigned long>();
}

void HTMLObjectElement::hspace(unsigned long value) {
    HTMLElement::set("hspace", value);
}

jsbind::String HTMLObjectElement::standby() const {
    return HTMLElement::get("standby").as<jsbind::String>();
}

void HTMLObjectElement::standby(const jsbind::String& value) {
    HTMLElement::set("standby", value);
}

unsigned long HTMLObjectElement::vspace() const {
    return HTMLElement::get("vspace").as<unsigned long>();
}

void HTMLObjectElement::vspace(unsigned long value) {
    HTMLElement::set("vspace", value);
}

jsbind::String HTMLObjectElement::codeBase() const {
    return HTMLElement::get("codeBase").as<jsbind::String>();
}

void HTMLObjectElement::codeBase(const jsbind::String& value) {
    HTMLElement::set("codeBase", value);
}

jsbind::String HTMLObjectElement::codeType() const {
    return HTMLElement::get("codeType").as<jsbind::String>();
}

void HTMLObjectElement::codeType(const jsbind::String& value) {
    HTMLElement::set("codeType", value);
}

jsbind::String HTMLObjectElement::useMap() const {
    return HTMLElement::get("useMap").as<jsbind::String>();
}

void HTMLObjectElement::useMap(const jsbind::String& value) {
    HTMLElement::set("useMap", value);
}

jsbind::String HTMLObjectElement::border() const {
    return HTMLElement::get("border").as<jsbind::String>();
}

void HTMLObjectElement::border(const jsbind::String& value) {
    HTMLElement::set("border", value);
}

