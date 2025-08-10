#include "webbind/HTMLTextAreaElement.hpp"
#include "webbind/HTMLFormElement.hpp"
#include "webbind/ValidityState.hpp"
#include "webbind/NodeList.hpp"

namespace webbind {

HTMLTextAreaElement HTMLTextAreaElement::take_ownership(Handle h) noexcept {
        return HTMLTextAreaElement(h);
    }
HTMLTextAreaElement HTMLTextAreaElement::clone() const noexcept { return *this; }
emlite::Val HTMLTextAreaElement::instance() noexcept { return emlite::Val::global("HTMLTextAreaElement"); }
HTMLTextAreaElement::HTMLTextAreaElement(Handle h) noexcept : HTMLElement(emlite::Val::take_ownership(h)) {}
HTMLTextAreaElement::HTMLTextAreaElement(const emlite::Val &val) noexcept: HTMLElement(val) {}

HTMLTextAreaElement::HTMLTextAreaElement() : HTMLElement(emlite::Val::global("HTMLTextAreaElement").new_()) {}

jsbind::String HTMLTextAreaElement::autocomplete() const {
    return HTMLElement::get("autocomplete").as<jsbind::String>();
}

void HTMLTextAreaElement::autocomplete(const jsbind::String& value) {
    HTMLElement::set("autocomplete", value);
}

unsigned long HTMLTextAreaElement::cols() const {
    return HTMLElement::get("cols").as<unsigned long>();
}

void HTMLTextAreaElement::cols(unsigned long value) {
    HTMLElement::set("cols", value);
}

jsbind::String HTMLTextAreaElement::dirName() const {
    return HTMLElement::get("dirName").as<jsbind::String>();
}

void HTMLTextAreaElement::dirName(const jsbind::String& value) {
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

jsbind::String HTMLTextAreaElement::name() const {
    return HTMLElement::get("name").as<jsbind::String>();
}

void HTMLTextAreaElement::name(const jsbind::String& value) {
    HTMLElement::set("name", value);
}

jsbind::String HTMLTextAreaElement::placeholder() const {
    return HTMLElement::get("placeholder").as<jsbind::String>();
}

void HTMLTextAreaElement::placeholder(const jsbind::String& value) {
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

jsbind::String HTMLTextAreaElement::wrap() const {
    return HTMLElement::get("wrap").as<jsbind::String>();
}

void HTMLTextAreaElement::wrap(const jsbind::String& value) {
    HTMLElement::set("wrap", value);
}

jsbind::String HTMLTextAreaElement::type() const {
    return HTMLElement::get("type").as<jsbind::String>();
}

jsbind::String HTMLTextAreaElement::defaultValue() const {
    return HTMLElement::get("defaultValue").as<jsbind::String>();
}

void HTMLTextAreaElement::defaultValue(const jsbind::String& value) {
    HTMLElement::set("defaultValue", value);
}

jsbind::String HTMLTextAreaElement::value() const {
    return HTMLElement::get("value").as<jsbind::String>();
}

void HTMLTextAreaElement::value(const jsbind::String& value) {
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

jsbind::String HTMLTextAreaElement::validationMessage() const {
    return HTMLElement::get("validationMessage").as<jsbind::String>();
}

bool HTMLTextAreaElement::checkValidity() {
    return HTMLElement::call("checkValidity").as<bool>();
}

bool HTMLTextAreaElement::reportValidity() {
    return HTMLElement::call("reportValidity").as<bool>();
}

jsbind::Undefined HTMLTextAreaElement::setCustomValidity(const jsbind::String& error) {
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

jsbind::String HTMLTextAreaElement::selectionDirection() const {
    return HTMLElement::get("selectionDirection").as<jsbind::String>();
}

void HTMLTextAreaElement::selectionDirection(const jsbind::String& value) {
    HTMLElement::set("selectionDirection", value);
}

jsbind::Undefined HTMLTextAreaElement::setRangeText(const jsbind::String& replacement, unsigned long start, unsigned long end) {
    return HTMLElement::call("setRangeText", replacement, start, end).as<jsbind::Undefined>();
}

jsbind::Undefined HTMLTextAreaElement::setRangeText(const jsbind::String& replacement, unsigned long start, unsigned long end, const SelectionMode& selectionMode) {
    return HTMLElement::call("setRangeText", replacement, start, end, selectionMode).as<jsbind::Undefined>();
}

jsbind::Undefined HTMLTextAreaElement::setSelectionRange(unsigned long start, unsigned long end) {
    return HTMLElement::call("setSelectionRange", start, end).as<jsbind::Undefined>();
}

jsbind::Undefined HTMLTextAreaElement::setSelectionRange(unsigned long start, unsigned long end, const jsbind::String& direction) {
    return HTMLElement::call("setSelectionRange", start, end, direction).as<jsbind::Undefined>();
}


} // namespace webbind