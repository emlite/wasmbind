#include <webbind/HTMLInputElement.hpp>
#include <webbind/HTMLFormElement.hpp>
#include <webbind/FileList.hpp>
#include <webbind/HTMLDataListElement.hpp>
#include <webbind/ValidityState.hpp>
#include <webbind/NodeList.hpp>
#include <webbind/FileSystemEntry.hpp>
#include <webbind/Element.hpp>


HTMLInputElement HTMLInputElement::take_ownership(Handle h) noexcept {
        return HTMLInputElement(h);
    }
HTMLInputElement HTMLInputElement::clone() const noexcept { return *this; }
HTMLInputElement::HTMLInputElement(Handle h) noexcept : HTMLElement(emlite::Val::take_ownership(h)) {}
HTMLInputElement::HTMLInputElement(const emlite::Val &val) noexcept: HTMLElement(val) {}


HTMLInputElement::HTMLInputElement() : HTMLElement(emlite::Val::global("HTMLInputElement").new_()) {}

jsbind::String HTMLInputElement::accept() const {
    return HTMLElement::get("accept").as<jsbind::String>();
}

void HTMLInputElement::accept(const jsbind::String& value) {
    HTMLElement::set("accept", value);
}

bool HTMLInputElement::alpha() const {
    return HTMLElement::get("alpha").as<bool>();
}

void HTMLInputElement::alpha(bool value) {
    HTMLElement::set("alpha", value);
}

jsbind::String HTMLInputElement::alt() const {
    return HTMLElement::get("alt").as<jsbind::String>();
}

void HTMLInputElement::alt(const jsbind::String& value) {
    HTMLElement::set("alt", value);
}

jsbind::String HTMLInputElement::autocomplete() const {
    return HTMLElement::get("autocomplete").as<jsbind::String>();
}

void HTMLInputElement::autocomplete(const jsbind::String& value) {
    HTMLElement::set("autocomplete", value);
}

bool HTMLInputElement::defaultChecked() const {
    return HTMLElement::get("defaultChecked").as<bool>();
}

void HTMLInputElement::defaultChecked(bool value) {
    HTMLElement::set("defaultChecked", value);
}

bool HTMLInputElement::checked() const {
    return HTMLElement::get("checked").as<bool>();
}

void HTMLInputElement::checked(bool value) {
    HTMLElement::set("checked", value);
}

jsbind::String HTMLInputElement::colorSpace() const {
    return HTMLElement::get("colorSpace").as<jsbind::String>();
}

void HTMLInputElement::colorSpace(const jsbind::String& value) {
    HTMLElement::set("colorSpace", value);
}

jsbind::String HTMLInputElement::dirName() const {
    return HTMLElement::get("dirName").as<jsbind::String>();
}

void HTMLInputElement::dirName(const jsbind::String& value) {
    HTMLElement::set("dirName", value);
}

bool HTMLInputElement::disabled() const {
    return HTMLElement::get("disabled").as<bool>();
}

void HTMLInputElement::disabled(bool value) {
    HTMLElement::set("disabled", value);
}

HTMLFormElement HTMLInputElement::form() const {
    return HTMLElement::get("form").as<HTMLFormElement>();
}

FileList HTMLInputElement::files() const {
    return HTMLElement::get("files").as<FileList>();
}

void HTMLInputElement::files(const FileList& value) {
    HTMLElement::set("files", value);
}

jsbind::String HTMLInputElement::formAction() const {
    return HTMLElement::get("formAction").as<jsbind::String>();
}

void HTMLInputElement::formAction(const jsbind::String& value) {
    HTMLElement::set("formAction", value);
}

jsbind::String HTMLInputElement::formEnctype() const {
    return HTMLElement::get("formEnctype").as<jsbind::String>();
}

void HTMLInputElement::formEnctype(const jsbind::String& value) {
    HTMLElement::set("formEnctype", value);
}

jsbind::String HTMLInputElement::formMethod() const {
    return HTMLElement::get("formMethod").as<jsbind::String>();
}

void HTMLInputElement::formMethod(const jsbind::String& value) {
    HTMLElement::set("formMethod", value);
}

bool HTMLInputElement::formNoValidate() const {
    return HTMLElement::get("formNoValidate").as<bool>();
}

void HTMLInputElement::formNoValidate(bool value) {
    HTMLElement::set("formNoValidate", value);
}

jsbind::String HTMLInputElement::formTarget() const {
    return HTMLElement::get("formTarget").as<jsbind::String>();
}

void HTMLInputElement::formTarget(const jsbind::String& value) {
    HTMLElement::set("formTarget", value);
}

unsigned long HTMLInputElement::height() const {
    return HTMLElement::get("height").as<unsigned long>();
}

void HTMLInputElement::height(unsigned long value) {
    HTMLElement::set("height", value);
}

bool HTMLInputElement::indeterminate() const {
    return HTMLElement::get("indeterminate").as<bool>();
}

void HTMLInputElement::indeterminate(bool value) {
    HTMLElement::set("indeterminate", value);
}

HTMLDataListElement HTMLInputElement::list() const {
    return HTMLElement::get("list").as<HTMLDataListElement>();
}

jsbind::String HTMLInputElement::max() const {
    return HTMLElement::get("max").as<jsbind::String>();
}

void HTMLInputElement::max(const jsbind::String& value) {
    HTMLElement::set("max", value);
}

long HTMLInputElement::maxLength() const {
    return HTMLElement::get("maxLength").as<long>();
}

void HTMLInputElement::maxLength(long value) {
    HTMLElement::set("maxLength", value);
}

jsbind::String HTMLInputElement::min() const {
    return HTMLElement::get("min").as<jsbind::String>();
}

void HTMLInputElement::min(const jsbind::String& value) {
    HTMLElement::set("min", value);
}

long HTMLInputElement::minLength() const {
    return HTMLElement::get("minLength").as<long>();
}

void HTMLInputElement::minLength(long value) {
    HTMLElement::set("minLength", value);
}

bool HTMLInputElement::multiple() const {
    return HTMLElement::get("multiple").as<bool>();
}

void HTMLInputElement::multiple(bool value) {
    HTMLElement::set("multiple", value);
}

jsbind::String HTMLInputElement::name() const {
    return HTMLElement::get("name").as<jsbind::String>();
}

void HTMLInputElement::name(const jsbind::String& value) {
    HTMLElement::set("name", value);
}

jsbind::String HTMLInputElement::pattern() const {
    return HTMLElement::get("pattern").as<jsbind::String>();
}

void HTMLInputElement::pattern(const jsbind::String& value) {
    HTMLElement::set("pattern", value);
}

jsbind::String HTMLInputElement::placeholder() const {
    return HTMLElement::get("placeholder").as<jsbind::String>();
}

void HTMLInputElement::placeholder(const jsbind::String& value) {
    HTMLElement::set("placeholder", value);
}

bool HTMLInputElement::readOnly() const {
    return HTMLElement::get("readOnly").as<bool>();
}

void HTMLInputElement::readOnly(bool value) {
    HTMLElement::set("readOnly", value);
}

bool HTMLInputElement::required() const {
    return HTMLElement::get("required").as<bool>();
}

void HTMLInputElement::required(bool value) {
    HTMLElement::set("required", value);
}

unsigned long HTMLInputElement::size() const {
    return HTMLElement::get("size").as<unsigned long>();
}

void HTMLInputElement::size(unsigned long value) {
    HTMLElement::set("size", value);
}

jsbind::String HTMLInputElement::src() const {
    return HTMLElement::get("src").as<jsbind::String>();
}

void HTMLInputElement::src(const jsbind::String& value) {
    HTMLElement::set("src", value);
}

jsbind::String HTMLInputElement::step() const {
    return HTMLElement::get("step").as<jsbind::String>();
}

void HTMLInputElement::step(const jsbind::String& value) {
    HTMLElement::set("step", value);
}

jsbind::String HTMLInputElement::type() const {
    return HTMLElement::get("type").as<jsbind::String>();
}

void HTMLInputElement::type(const jsbind::String& value) {
    HTMLElement::set("type", value);
}

jsbind::String HTMLInputElement::defaultValue() const {
    return HTMLElement::get("defaultValue").as<jsbind::String>();
}

void HTMLInputElement::defaultValue(const jsbind::String& value) {
    HTMLElement::set("defaultValue", value);
}

jsbind::String HTMLInputElement::value() const {
    return HTMLElement::get("value").as<jsbind::String>();
}

void HTMLInputElement::value(const jsbind::String& value) {
    HTMLElement::set("value", value);
}

jsbind::Object HTMLInputElement::valueAsDate() const {
    return HTMLElement::get("valueAsDate").as<jsbind::Object>();
}

void HTMLInputElement::valueAsDate(const jsbind::Object& value) {
    HTMLElement::set("valueAsDate", value);
}

double HTMLInputElement::valueAsNumber() const {
    return HTMLElement::get("valueAsNumber").as<double>();
}

void HTMLInputElement::valueAsNumber(double value) {
    HTMLElement::set("valueAsNumber", value);
}

unsigned long HTMLInputElement::width() const {
    return HTMLElement::get("width").as<unsigned long>();
}

void HTMLInputElement::width(unsigned long value) {
    HTMLElement::set("width", value);
}

jsbind::Undefined HTMLInputElement::stepUp() {
    return HTMLElement::call("stepUp").as<jsbind::Undefined>();
}

jsbind::Undefined HTMLInputElement::stepUp(long n) {
    return HTMLElement::call("stepUp", n).as<jsbind::Undefined>();
}

jsbind::Undefined HTMLInputElement::stepDown() {
    return HTMLElement::call("stepDown").as<jsbind::Undefined>();
}

jsbind::Undefined HTMLInputElement::stepDown(long n) {
    return HTMLElement::call("stepDown", n).as<jsbind::Undefined>();
}

bool HTMLInputElement::willValidate() const {
    return HTMLElement::get("willValidate").as<bool>();
}

ValidityState HTMLInputElement::validity() const {
    return HTMLElement::get("validity").as<ValidityState>();
}

jsbind::String HTMLInputElement::validationMessage() const {
    return HTMLElement::get("validationMessage").as<jsbind::String>();
}

bool HTMLInputElement::checkValidity() {
    return HTMLElement::call("checkValidity").as<bool>();
}

bool HTMLInputElement::reportValidity() {
    return HTMLElement::call("reportValidity").as<bool>();
}

jsbind::Undefined HTMLInputElement::setCustomValidity(const jsbind::String& error) {
    return HTMLElement::call("setCustomValidity", error).as<jsbind::Undefined>();
}

NodeList HTMLInputElement::labels() const {
    return HTMLElement::get("labels").as<NodeList>();
}

jsbind::Undefined HTMLInputElement::select() {
    return HTMLElement::call("select").as<jsbind::Undefined>();
}

unsigned long HTMLInputElement::selectionStart() const {
    return HTMLElement::get("selectionStart").as<unsigned long>();
}

void HTMLInputElement::selectionStart(unsigned long value) {
    HTMLElement::set("selectionStart", value);
}

unsigned long HTMLInputElement::selectionEnd() const {
    return HTMLElement::get("selectionEnd").as<unsigned long>();
}

void HTMLInputElement::selectionEnd(unsigned long value) {
    HTMLElement::set("selectionEnd", value);
}

jsbind::String HTMLInputElement::selectionDirection() const {
    return HTMLElement::get("selectionDirection").as<jsbind::String>();
}

void HTMLInputElement::selectionDirection(const jsbind::String& value) {
    HTMLElement::set("selectionDirection", value);
}

jsbind::Undefined HTMLInputElement::setRangeText(const jsbind::String& replacement, unsigned long start, unsigned long end) {
    return HTMLElement::call("setRangeText", replacement, start, end).as<jsbind::Undefined>();
}

jsbind::Undefined HTMLInputElement::setRangeText(const jsbind::String& replacement, unsigned long start, unsigned long end, const SelectionMode& selectionMode) {
    return HTMLElement::call("setRangeText", replacement, start, end, selectionMode).as<jsbind::Undefined>();
}

jsbind::Undefined HTMLInputElement::setSelectionRange(unsigned long start, unsigned long end) {
    return HTMLElement::call("setSelectionRange", start, end).as<jsbind::Undefined>();
}

jsbind::Undefined HTMLInputElement::setSelectionRange(unsigned long start, unsigned long end, const jsbind::String& direction) {
    return HTMLElement::call("setSelectionRange", start, end, direction).as<jsbind::Undefined>();
}

jsbind::Undefined HTMLInputElement::showPicker() {
    return HTMLElement::call("showPicker").as<jsbind::Undefined>();
}

bool HTMLInputElement::webkitdirectory() const {
    return HTMLElement::get("webkitdirectory").as<bool>();
}

void HTMLInputElement::webkitdirectory(bool value) {
    HTMLElement::set("webkitdirectory", value);
}

jsbind::TypedArray<FileSystemEntry> HTMLInputElement::webkitEntries() const {
    return HTMLElement::get("webkitEntries").as<jsbind::TypedArray<FileSystemEntry>>();
}

jsbind::String HTMLInputElement::capture() const {
    return HTMLElement::get("capture").as<jsbind::String>();
}

void HTMLInputElement::capture(const jsbind::String& value) {
    HTMLElement::set("capture", value);
}

jsbind::String HTMLInputElement::align() const {
    return HTMLElement::get("align").as<jsbind::String>();
}

void HTMLInputElement::align(const jsbind::String& value) {
    HTMLElement::set("align", value);
}

jsbind::String HTMLInputElement::useMap() const {
    return HTMLElement::get("useMap").as<jsbind::String>();
}

void HTMLInputElement::useMap(const jsbind::String& value) {
    HTMLElement::set("useMap", value);
}

Element HTMLInputElement::popoverTargetElement() const {
    return HTMLElement::get("popoverTargetElement").as<Element>();
}

void HTMLInputElement::popoverTargetElement(const Element& value) {
    HTMLElement::set("popoverTargetElement", value);
}

jsbind::String HTMLInputElement::popoverTargetAction() const {
    return HTMLElement::get("popoverTargetAction").as<jsbind::String>();
}

void HTMLInputElement::popoverTargetAction(const jsbind::String& value) {
    HTMLElement::set("popoverTargetAction", value);
}

