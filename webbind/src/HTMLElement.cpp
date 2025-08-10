#include <webbind/HTMLElement.hpp>
#include <webbind/ElementInternals.hpp>
#include <webbind/ShowPopoverOptions.hpp>
#include <webbind/EditContext.hpp>
#include <webbind/CSSStyleDeclaration.hpp>
#include <webbind/DOMStringMap.hpp>
#include <webbind/FocusOptions.hpp>

namespace webbind {

HTMLElement HTMLElement::take_ownership(Handle h) noexcept {
    return HTMLElement(h);
}

HTMLElement HTMLElement::clone() const noexcept { return *this; }

emlite::Val HTMLElement::instance() noexcept { return emlite::Val::global("HTMLElement"); }

HTMLElement::HTMLElement(Handle h) noexcept : Element(emlite::Val::take_ownership(h)) {}

HTMLElement::HTMLElement(const emlite::Val &val) noexcept: Element(val) {}

HTMLElement::HTMLElement() : Element(emlite::Val::global("HTMLElement").new_()) {}

jsbind::String HTMLElement::title() const {
    return Element::get("title").as<jsbind::String>();
}

void HTMLElement::title(const jsbind::String& value) {
    Element::set("title", value);
}

jsbind::String HTMLElement::lang() const {
    return Element::get("lang").as<jsbind::String>();
}

void HTMLElement::lang(const jsbind::String& value) {
    Element::set("lang", value);
}

bool HTMLElement::translate() const {
    return Element::get("translate").as<bool>();
}

void HTMLElement::translate(bool value) {
    Element::set("translate", value);
}

jsbind::String HTMLElement::dir() const {
    return Element::get("dir").as<jsbind::String>();
}

void HTMLElement::dir(const jsbind::String& value) {
    Element::set("dir", value);
}

jsbind::Any HTMLElement::hidden() const {
    return Element::get("hidden").as<jsbind::Any>();
}

void HTMLElement::hidden(const jsbind::Any& value) {
    Element::set("hidden", value);
}

bool HTMLElement::inert() const {
    return Element::get("inert").as<bool>();
}

void HTMLElement::inert(bool value) {
    Element::set("inert", value);
}

jsbind::Undefined HTMLElement::click() {
    return Element::call("click").as<jsbind::Undefined>();
}

jsbind::String HTMLElement::accessKey() const {
    return Element::get("accessKey").as<jsbind::String>();
}

void HTMLElement::accessKey(const jsbind::String& value) {
    Element::set("accessKey", value);
}

jsbind::String HTMLElement::accessKeyLabel() const {
    return Element::get("accessKeyLabel").as<jsbind::String>();
}

bool HTMLElement::draggable() const {
    return Element::get("draggable").as<bool>();
}

void HTMLElement::draggable(bool value) {
    Element::set("draggable", value);
}

bool HTMLElement::spellcheck() const {
    return Element::get("spellcheck").as<bool>();
}

void HTMLElement::spellcheck(bool value) {
    Element::set("spellcheck", value);
}

jsbind::String HTMLElement::writingSuggestions() const {
    return Element::get("writingSuggestions").as<jsbind::String>();
}

void HTMLElement::writingSuggestions(const jsbind::String& value) {
    Element::set("writingSuggestions", value);
}

jsbind::String HTMLElement::autocapitalize() const {
    return Element::get("autocapitalize").as<jsbind::String>();
}

void HTMLElement::autocapitalize(const jsbind::String& value) {
    Element::set("autocapitalize", value);
}

bool HTMLElement::autocorrect() const {
    return Element::get("autocorrect").as<bool>();
}

void HTMLElement::autocorrect(bool value) {
    Element::set("autocorrect", value);
}

jsbind::String HTMLElement::innerText() const {
    return Element::get("innerText").as<jsbind::String>();
}

void HTMLElement::innerText(const jsbind::String& value) {
    Element::set("innerText", value);
}

jsbind::String HTMLElement::outerText() const {
    return Element::get("outerText").as<jsbind::String>();
}

void HTMLElement::outerText(const jsbind::String& value) {
    Element::set("outerText", value);
}

ElementInternals HTMLElement::attachInternals() {
    return Element::call("attachInternals").as<ElementInternals>();
}

jsbind::Undefined HTMLElement::showPopover() {
    return Element::call("showPopover").as<jsbind::Undefined>();
}

jsbind::Undefined HTMLElement::showPopover(const ShowPopoverOptions& options) {
    return Element::call("showPopover", options).as<jsbind::Undefined>();
}

jsbind::Undefined HTMLElement::hidePopover() {
    return Element::call("hidePopover").as<jsbind::Undefined>();
}

bool HTMLElement::togglePopover() {
    return Element::call("togglePopover").as<bool>();
}

bool HTMLElement::togglePopover(const jsbind::Any& options) {
    return Element::call("togglePopover", options).as<bool>();
}

jsbind::String HTMLElement::popover() const {
    return Element::get("popover").as<jsbind::String>();
}

void HTMLElement::popover(const jsbind::String& value) {
    Element::set("popover", value);
}

Element HTMLElement::scrollParent() const {
    return Element::get("scrollParent").as<Element>();
}

Element HTMLElement::offsetParent() const {
    return Element::get("offsetParent").as<Element>();
}

long HTMLElement::offsetTop() const {
    return Element::get("offsetTop").as<long>();
}

long HTMLElement::offsetLeft() const {
    return Element::get("offsetLeft").as<long>();
}

long HTMLElement::offsetWidth() const {
    return Element::get("offsetWidth").as<long>();
}

long HTMLElement::offsetHeight() const {
    return Element::get("offsetHeight").as<long>();
}

EditContext HTMLElement::editContext() const {
    return Element::get("editContext").as<EditContext>();
}

void HTMLElement::editContext(const EditContext& value) {
    Element::set("editContext", value);
}

CSSStyleDeclaration HTMLElement::style() const {
    return Element::get("style").as<CSSStyleDeclaration>();
}

jsbind::Any HTMLElement::onbeforexrselect() const {
    return Element::get("onbeforexrselect").as<jsbind::Any>();
}

void HTMLElement::onbeforexrselect(const jsbind::Any& value) {
    Element::set("onbeforexrselect", value);
}

jsbind::String HTMLElement::virtualKeyboardPolicy() const {
    return Element::get("virtualKeyboardPolicy").as<jsbind::String>();
}

void HTMLElement::virtualKeyboardPolicy(const jsbind::String& value) {
    Element::set("virtualKeyboardPolicy", value);
}

DOMStringMap HTMLElement::dataset() const {
    return Element::get("dataset").as<DOMStringMap>();
}

jsbind::String HTMLElement::nonce() const {
    return Element::get("nonce").as<jsbind::String>();
}

void HTMLElement::nonce(const jsbind::String& value) {
    Element::set("nonce", value);
}

bool HTMLElement::autofocus() const {
    return Element::get("autofocus").as<bool>();
}

void HTMLElement::autofocus(bool value) {
    Element::set("autofocus", value);
}

long HTMLElement::tabIndex() const {
    return Element::get("tabIndex").as<long>();
}

void HTMLElement::tabIndex(long value) {
    Element::set("tabIndex", value);
}

jsbind::Undefined HTMLElement::focus() {
    return Element::call("focus").as<jsbind::Undefined>();
}

jsbind::Undefined HTMLElement::focus(const FocusOptions& options) {
    return Element::call("focus", options).as<jsbind::Undefined>();
}

jsbind::Undefined HTMLElement::blur() {
    return Element::call("blur").as<jsbind::Undefined>();
}


} // namespace webbind