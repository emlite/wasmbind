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


HTMLObjectElement::HTMLObjectElement(): HTMLElement(emlite::Val::global("HTMLObjectElement").new_()) {}

jsbind::USVString HTMLObjectElement::data() const {
    return HTMLElement::get("data").as<jsbind::USVString>();
}

void HTMLObjectElement::data(const jsbind::USVString& value) {
    HTMLElement::set("data", value);
}

jsbind::DOMString HTMLObjectElement::type() const {
    return HTMLElement::get("type").as<jsbind::DOMString>();
}

void HTMLObjectElement::type(const jsbind::DOMString& value) {
    HTMLElement::set("type", value);
}

jsbind::DOMString HTMLObjectElement::name() const {
    return HTMLElement::get("name").as<jsbind::DOMString>();
}

void HTMLObjectElement::name(const jsbind::DOMString& value) {
    HTMLElement::set("name", value);
}

HTMLFormElement HTMLObjectElement::form() const {
    return HTMLElement::get("form").as<HTMLFormElement>();
}

jsbind::DOMString HTMLObjectElement::width() const {
    return HTMLElement::get("width").as<jsbind::DOMString>();
}

void HTMLObjectElement::width(const jsbind::DOMString& value) {
    HTMLElement::set("width", value);
}

jsbind::DOMString HTMLObjectElement::height() const {
    return HTMLElement::get("height").as<jsbind::DOMString>();
}

void HTMLObjectElement::height(const jsbind::DOMString& value) {
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

jsbind::DOMString HTMLObjectElement::validationMessage() const {
    return HTMLElement::get("validationMessage").as<jsbind::DOMString>();
}

bool HTMLObjectElement::checkValidity() {
    return HTMLElement::call("checkValidity").as<bool>();
}

bool HTMLObjectElement::reportValidity() {
    return HTMLElement::call("reportValidity").as<bool>();
}

jsbind::Undefined HTMLObjectElement::setCustomValidity(const jsbind::DOMString& error) {
    return HTMLElement::call("setCustomValidity", error).as<jsbind::Undefined>();
}

jsbind::DOMString HTMLObjectElement::align() const {
    return HTMLElement::get("align").as<jsbind::DOMString>();
}

void HTMLObjectElement::align(const jsbind::DOMString& value) {
    HTMLElement::set("align", value);
}

jsbind::DOMString HTMLObjectElement::archive() const {
    return HTMLElement::get("archive").as<jsbind::DOMString>();
}

void HTMLObjectElement::archive(const jsbind::DOMString& value) {
    HTMLElement::set("archive", value);
}

jsbind::DOMString HTMLObjectElement::code() const {
    return HTMLElement::get("code").as<jsbind::DOMString>();
}

void HTMLObjectElement::code(const jsbind::DOMString& value) {
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

jsbind::DOMString HTMLObjectElement::standby() const {
    return HTMLElement::get("standby").as<jsbind::DOMString>();
}

void HTMLObjectElement::standby(const jsbind::DOMString& value) {
    HTMLElement::set("standby", value);
}

unsigned long HTMLObjectElement::vspace() const {
    return HTMLElement::get("vspace").as<unsigned long>();
}

void HTMLObjectElement::vspace(unsigned long value) {
    HTMLElement::set("vspace", value);
}

jsbind::DOMString HTMLObjectElement::codeBase() const {
    return HTMLElement::get("codeBase").as<jsbind::DOMString>();
}

void HTMLObjectElement::codeBase(const jsbind::DOMString& value) {
    HTMLElement::set("codeBase", value);
}

jsbind::DOMString HTMLObjectElement::codeType() const {
    return HTMLElement::get("codeType").as<jsbind::DOMString>();
}

void HTMLObjectElement::codeType(const jsbind::DOMString& value) {
    HTMLElement::set("codeType", value);
}

jsbind::DOMString HTMLObjectElement::useMap() const {
    return HTMLElement::get("useMap").as<jsbind::DOMString>();
}

void HTMLObjectElement::useMap(const jsbind::DOMString& value) {
    HTMLElement::set("useMap", value);
}

jsbind::DOMString HTMLObjectElement::border() const {
    return HTMLElement::get("border").as<jsbind::DOMString>();
}

void HTMLObjectElement::border(const jsbind::DOMString& value) {
    HTMLElement::set("border", value);
}

