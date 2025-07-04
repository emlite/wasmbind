#include <webbind/HTMLTextAreaElement.hpp>
#include <webbind/HTMLFormElement.hpp>
#include <webbind/ValidityState.hpp>
#include <webbind/NodeList.hpp>


HTMLTextAreaElement HTMLTextAreaElement::take_ownership(Handle h) noexcept {
        return HTMLTextAreaElement(h);
    }
HTMLTextAreaElement HTMLTextAreaElement::clone() const noexcept { return *this; }
HTMLTextAreaElement::HTMLTextAreaElement(Handle h) noexcept : HTMLElement(emlite::Val::take_ownership(h)) {}
HTMLTextAreaElement::HTMLTextAreaElement(const emlite::Val &val) noexcept: HTMLElement(val) {}


HTMLTextAreaElement::HTMLTextAreaElement(): HTMLElement(emlite::Val::global("HTMLTextAreaElement").new_()) {}

jsbind::DOMString HTMLTextAreaElement::autocomplete() const {
    return HTMLElement::get("autocomplete").as<jsbind::DOMString>();
}

void HTMLTextAreaElement::autocomplete(const jsbind::DOMString& value) {
    HTMLElement::set("autocomplete", value);
}

unsigned long HTMLTextAreaElement::cols() const {
    return HTMLElement::get("cols").as<unsigned long>();
}

void HTMLTextAreaElement::cols(unsigned long value) {
    HTMLElement::set("cols", value);
}

jsbind::DOMString HTMLTextAreaElement::dirName() const {
    return HTMLElement::get("dirName").as<jsbind::DOMString>();
}

void HTMLTextAreaElement::dirName(const jsbind::DOMString& value) {
    HTMLElement::set("dirName", value);
}

bool HTMLTextAreaElement::disabled() const {
    return HTMLElement::get("disabled").as<bool>();
}

void HTMLTextAreaElement::disabled(bool value) {
    HTMLElement::set("disabled", value);
}

HTMLFormElement HTMLTextAreaElement::form() const {
    return HTMLElement::get("form").as<HTMLFormElement>();
}

long HTMLTextAreaElement::maxLength() const {
    return HTMLElement::get("maxLength").as<long>();
}

void HTMLTextAreaElement::maxLength(long value) {
    HTMLElement::set("maxLength", value);
}

long HTMLTextAreaElement::minLength() const {
    return HTMLElement::get("minLength").as<long>();
}

void HTMLTextAreaElement::minLength(long value) {
    HTMLElement::set("minLength", value);
}

jsbind::DOMString HTMLTextAreaElement::name() const {
    return HTMLElement::get("name").as<jsbind::DOMString>();
}

void HTMLTextAreaElement::name(const jsbind::DOMString& value) {
    HTMLElement::set("name", value);
}

jsbind::DOMString HTMLTextAreaElement::placeholder() const {
    return HTMLElement::get("placeholder").as<jsbind::DOMString>();
}

void HTMLTextAreaElement::placeholder(const jsbind::DOMString& value) {
    HTMLElement::set("placeholder", value);
}

bool HTMLTextAreaElement::readOnly() const {
    return HTMLElement::get("readOnly").as<bool>();
}

void HTMLTextAreaElement::readOnly(bool value) {
    HTMLElement::set("readOnly", value);
}

bool HTMLTextAreaElement::required() const {
    return HTMLElement::get("required").as<bool>();
}

void HTMLTextAreaElement::required(bool value) {
    HTMLElement::set("required", value);
}

unsigned long HTMLTextAreaElement::rows() const {
    return HTMLElement::get("rows").as<unsigned long>();
}

void HTMLTextAreaElement::rows(unsigned long value) {
    HTMLElement::set("rows", value);
}

jsbind::DOMString HTMLTextAreaElement::wrap() const {
    return HTMLElement::get("wrap").as<jsbind::DOMString>();
}

void HTMLTextAreaElement::wrap(const jsbind::DOMString& value) {
    HTMLElement::set("wrap", value);
}

jsbind::DOMString HTMLTextAreaElement::type() const {
    return HTMLElement::get("type").as<jsbind::DOMString>();
}

jsbind::DOMString HTMLTextAreaElement::defaultValue() const {
    return HTMLElement::get("defaultValue").as<jsbind::DOMString>();
}

void HTMLTextAreaElement::defaultValue(const jsbind::DOMString& value) {
    HTMLElement::set("defaultValue", value);
}

jsbind::DOMString HTMLTextAreaElement::value() const {
    return HTMLElement::get("value").as<jsbind::DOMString>();
}

void HTMLTextAreaElement::value(const jsbind::DOMString& value) {
    HTMLElement::set("value", value);
}

unsigned long HTMLTextAreaElement::textLength() const {
    return HTMLElement::get("textLength").as<unsigned long>();
}

bool HTMLTextAreaElement::willValidate() const {
    return HTMLElement::get("willValidate").as<bool>();
}

ValidityState HTMLTextAreaElement::validity() const {
    return HTMLElement::get("validity").as<ValidityState>();
}

jsbind::DOMString HTMLTextAreaElement::validationMessage() const {
    return HTMLElement::get("validationMessage").as<jsbind::DOMString>();
}

bool HTMLTextAreaElement::checkValidity() {
    return HTMLElement::call("checkValidity").as<bool>();
}

bool HTMLTextAreaElement::reportValidity() {
    return HTMLElement::call("reportValidity").as<bool>();
}

jsbind::Undefined HTMLTextAreaElement::setCustomValidity(const jsbind::DOMString& error) {
    return HTMLElement::call("setCustomValidity", error).as<jsbind::Undefined>();
}

NodeList HTMLTextAreaElement::labels() const {
    return HTMLElement::get("labels").as<NodeList>();
}

jsbind::Undefined HTMLTextAreaElement::select() {
    return HTMLElement::call("select").as<jsbind::Undefined>();
}

unsigned long HTMLTextAreaElement::selectionStart() const {
    return HTMLElement::get("selectionStart").as<unsigned long>();
}

void HTMLTextAreaElement::selectionStart(unsigned long value) {
    HTMLElement::set("selectionStart", value);
}

unsigned long HTMLTextAreaElement::selectionEnd() const {
    return HTMLElement::get("selectionEnd").as<unsigned long>();
}

void HTMLTextAreaElement::selectionEnd(unsigned long value) {
    HTMLElement::set("selectionEnd", value);
}

jsbind::DOMString HTMLTextAreaElement::selectionDirection() const {
    return HTMLElement::get("selectionDirection").as<jsbind::DOMString>();
}

void HTMLTextAreaElement::selectionDirection(const jsbind::DOMString& value) {
    HTMLElement::set("selectionDirection", value);
}

jsbind::Undefined HTMLTextAreaElement::setRangeText(const jsbind::DOMString& replacement, unsigned long start, unsigned long end, const SelectionMode& selectionMode) {
    return HTMLElement::call("setRangeText", replacement, start, end, selectionMode).as<jsbind::Undefined>();
}

jsbind::Undefined HTMLTextAreaElement::setSelectionRange(unsigned long start, unsigned long end, const jsbind::DOMString& direction) {
    return HTMLElement::call("setSelectionRange", start, end, direction).as<jsbind::Undefined>();
}

