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


HTMLInputElement::HTMLInputElement(): HTMLElement(emlite::Val::global("HTMLInputElement").new_()) {}

jsbind::DOMString HTMLInputElement::accept() const {
    return HTMLElement::get("accept").as<jsbind::DOMString>();
}

void HTMLInputElement::accept(const jsbind::DOMString& value) {
    HTMLElement::set("accept", value);
}

bool HTMLInputElement::alpha() const {
    return HTMLElement::get("alpha").as<bool>();
}

void HTMLInputElement::alpha(bool value) {
    HTMLElement::set("alpha", value);
}

jsbind::DOMString HTMLInputElement::alt() const {
    return HTMLElement::get("alt").as<jsbind::DOMString>();
}

void HTMLInputElement::alt(const jsbind::DOMString& value) {
    HTMLElement::set("alt", value);
}

jsbind::DOMString HTMLInputElement::autocomplete() const {
    return HTMLElement::get("autocomplete").as<jsbind::DOMString>();
}

void HTMLInputElement::autocomplete(const jsbind::DOMString& value) {
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

jsbind::DOMString HTMLInputElement::colorSpace() const {
    return HTMLElement::get("colorSpace").as<jsbind::DOMString>();
}

void HTMLInputElement::colorSpace(const jsbind::DOMString& value) {
    HTMLElement::set("colorSpace", value);
}

jsbind::DOMString HTMLInputElement::dirName() const {
    return HTMLElement::get("dirName").as<jsbind::DOMString>();
}

void HTMLInputElement::dirName(const jsbind::DOMString& value) {
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

jsbind::USVString HTMLInputElement::formAction() const {
    return HTMLElement::get("formAction").as<jsbind::USVString>();
}

void HTMLInputElement::formAction(const jsbind::USVString& value) {
    HTMLElement::set("formAction", value);
}

jsbind::DOMString HTMLInputElement::formEnctype() const {
    return HTMLElement::get("formEnctype").as<jsbind::DOMString>();
}

void HTMLInputElement::formEnctype(const jsbind::DOMString& value) {
    HTMLElement::set("formEnctype", value);
}

jsbind::DOMString HTMLInputElement::formMethod() const {
    return HTMLElement::get("formMethod").as<jsbind::DOMString>();
}

void HTMLInputElement::formMethod(const jsbind::DOMString& value) {
    HTMLElement::set("formMethod", value);
}

bool HTMLInputElement::formNoValidate() const {
    return HTMLElement::get("formNoValidate").as<bool>();
}

void HTMLInputElement::formNoValidate(bool value) {
    HTMLElement::set("formNoValidate", value);
}

jsbind::DOMString HTMLInputElement::formTarget() const {
    return HTMLElement::get("formTarget").as<jsbind::DOMString>();
}

void HTMLInputElement::formTarget(const jsbind::DOMString& value) {
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

jsbind::DOMString HTMLInputElement::max() const {
    return HTMLElement::get("max").as<jsbind::DOMString>();
}

void HTMLInputElement::max(const jsbind::DOMString& value) {
    HTMLElement::set("max", value);
}

long HTMLInputElement::maxLength() const {
    return HTMLElement::get("maxLength").as<long>();
}

void HTMLInputElement::maxLength(long value) {
    HTMLElement::set("maxLength", value);
}

jsbind::DOMString HTMLInputElement::min() const {
    return HTMLElement::get("min").as<jsbind::DOMString>();
}

void HTMLInputElement::min(const jsbind::DOMString& value) {
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

jsbind::DOMString HTMLInputElement::name() const {
    return HTMLElement::get("name").as<jsbind::DOMString>();
}

void HTMLInputElement::name(const jsbind::DOMString& value) {
    HTMLElement::set("name", value);
}

jsbind::DOMString HTMLInputElement::pattern() const {
    return HTMLElement::get("pattern").as<jsbind::DOMString>();
}

void HTMLInputElement::pattern(const jsbind::DOMString& value) {
    HTMLElement::set("pattern", value);
}

jsbind::DOMString HTMLInputElement::placeholder() const {
    return HTMLElement::get("placeholder").as<jsbind::DOMString>();
}

void HTMLInputElement::placeholder(const jsbind::DOMString& value) {
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

jsbind::USVString HTMLInputElement::src() const {
    return HTMLElement::get("src").as<jsbind::USVString>();
}

void HTMLInputElement::src(const jsbind::USVString& value) {
    HTMLElement::set("src", value);
}

jsbind::DOMString HTMLInputElement::step() const {
    return HTMLElement::get("step").as<jsbind::DOMString>();
}

void HTMLInputElement::step(const jsbind::DOMString& value) {
    HTMLElement::set("step", value);
}

jsbind::DOMString HTMLInputElement::type() const {
    return HTMLElement::get("type").as<jsbind::DOMString>();
}

void HTMLInputElement::type(const jsbind::DOMString& value) {
    HTMLElement::set("type", value);
}

jsbind::DOMString HTMLInputElement::defaultValue() const {
    return HTMLElement::get("defaultValue").as<jsbind::DOMString>();
}

void HTMLInputElement::defaultValue(const jsbind::DOMString& value) {
    HTMLElement::set("defaultValue", value);
}

jsbind::DOMString HTMLInputElement::value() const {
    return HTMLElement::get("value").as<jsbind::DOMString>();
}

void HTMLInputElement::value(const jsbind::DOMString& value) {
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

jsbind::Undefined HTMLInputElement::stepUp(long n) {
    return HTMLElement::call("stepUp", n).as<jsbind::Undefined>();
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

jsbind::DOMString HTMLInputElement::validationMessage() const {
    return HTMLElement::get("validationMessage").as<jsbind::DOMString>();
}

bool HTMLInputElement::checkValidity() {
    return HTMLElement::call("checkValidity").as<bool>();
}

bool HTMLInputElement::reportValidity() {
    return HTMLElement::call("reportValidity").as<bool>();
}

jsbind::Undefined HTMLInputElement::setCustomValidity(const jsbind::DOMString& error) {
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

jsbind::DOMString HTMLInputElement::selectionDirection() const {
    return HTMLElement::get("selectionDirection").as<jsbind::DOMString>();
}

void HTMLInputElement::selectionDirection(const jsbind::DOMString& value) {
    HTMLElement::set("selectionDirection", value);
}

jsbind::Undefined HTMLInputElement::setRangeText(const jsbind::DOMString& replacement, unsigned long start, unsigned long end, const SelectionMode& selectionMode) {
    return HTMLElement::call("setRangeText", replacement, start, end, selectionMode).as<jsbind::Undefined>();
}

jsbind::Undefined HTMLInputElement::setSelectionRange(unsigned long start, unsigned long end, const jsbind::DOMString& direction) {
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

jsbind::FrozenArray<FileSystemEntry> HTMLInputElement::webkitEntries() const {
    return HTMLElement::get("webkitEntries").as<jsbind::FrozenArray<FileSystemEntry>>();
}

jsbind::DOMString HTMLInputElement::capture() const {
    return HTMLElement::get("capture").as<jsbind::DOMString>();
}

void HTMLInputElement::capture(const jsbind::DOMString& value) {
    HTMLElement::set("capture", value);
}

jsbind::DOMString HTMLInputElement::align() const {
    return HTMLElement::get("align").as<jsbind::DOMString>();
}

void HTMLInputElement::align(const jsbind::DOMString& value) {
    HTMLElement::set("align", value);
}

jsbind::DOMString HTMLInputElement::useMap() const {
    return HTMLElement::get("useMap").as<jsbind::DOMString>();
}

void HTMLInputElement::useMap(const jsbind::DOMString& value) {
    HTMLElement::set("useMap", value);
}

Element HTMLInputElement::popoverTargetElement() const {
    return HTMLElement::get("popoverTargetElement").as<Element>();
}

void HTMLInputElement::popoverTargetElement(const Element& value) {
    HTMLElement::set("popoverTargetElement", value);
}

jsbind::DOMString HTMLInputElement::popoverTargetAction() const {
    return HTMLElement::get("popoverTargetAction").as<jsbind::DOMString>();
}

void HTMLInputElement::popoverTargetAction(const jsbind::DOMString& value) {
    HTMLElement::set("popoverTargetAction", value);
}

