#include <webbind/HTMLElement.hpp>
#include <webbind/ElementInternals.hpp>
#include <webbind/EditContext.hpp>
#include <webbind/CSSStyleDeclaration.hpp>
#include <webbind/DOMStringMap.hpp>
#include <webbind/SVGElement.hpp>


ShowPopoverOptions::ShowPopoverOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
ShowPopoverOptions ShowPopoverOptions::take_ownership(Handle h) noexcept {
        return ShowPopoverOptions(h);
    }
ShowPopoverOptions::ShowPopoverOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
ShowPopoverOptions::ShowPopoverOptions() noexcept: emlite::Val(emlite::Val::object()) {}
ShowPopoverOptions ShowPopoverOptions::clone() const noexcept { return *this; }

HTMLElement ShowPopoverOptions::source() const {
    return emlite::Val::get("source").as<HTMLElement>();
}

void ShowPopoverOptions::source(const HTMLElement& value) {
    emlite::Val::set("source", value);
}

HTMLElement HTMLElement::take_ownership(Handle h) noexcept {
        return HTMLElement(h);
    }
HTMLElement HTMLElement::clone() const noexcept { return *this; }
HTMLElement::HTMLElement(Handle h) noexcept : Element(emlite::Val::take_ownership(h)) {}
HTMLElement::HTMLElement(const emlite::Val &val) noexcept: Element(val) {}


HTMLElement::HTMLElement(): Element(emlite::Val::global("HTMLElement").new_()) {}

jsbind::DOMString HTMLElement::title() const {
    return Element::get("title").as<jsbind::DOMString>();
}

void HTMLElement::title(const jsbind::DOMString& value) {
    Element::set("title", value);
}

jsbind::DOMString HTMLElement::lang() const {
    return Element::get("lang").as<jsbind::DOMString>();
}

void HTMLElement::lang(const jsbind::DOMString& value) {
    Element::set("lang", value);
}

bool HTMLElement::translate() const {
    return Element::get("translate").as<bool>();
}

void HTMLElement::translate(bool value) {
    Element::set("translate", value);
}

jsbind::DOMString HTMLElement::dir() const {
    return Element::get("dir").as<jsbind::DOMString>();
}

void HTMLElement::dir(const jsbind::DOMString& value) {
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

jsbind::DOMString HTMLElement::accessKey() const {
    return Element::get("accessKey").as<jsbind::DOMString>();
}

void HTMLElement::accessKey(const jsbind::DOMString& value) {
    Element::set("accessKey", value);
}

jsbind::DOMString HTMLElement::accessKeyLabel() const {
    return Element::get("accessKeyLabel").as<jsbind::DOMString>();
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

jsbind::DOMString HTMLElement::writingSuggestions() const {
    return Element::get("writingSuggestions").as<jsbind::DOMString>();
}

void HTMLElement::writingSuggestions(const jsbind::DOMString& value) {
    Element::set("writingSuggestions", value);
}

jsbind::DOMString HTMLElement::autocapitalize() const {
    return Element::get("autocapitalize").as<jsbind::DOMString>();
}

void HTMLElement::autocapitalize(const jsbind::DOMString& value) {
    Element::set("autocapitalize", value);
}

bool HTMLElement::autocorrect() const {
    return Element::get("autocorrect").as<bool>();
}

void HTMLElement::autocorrect(bool value) {
    Element::set("autocorrect", value);
}

jsbind::DOMString HTMLElement::innerText() const {
    return Element::get("innerText").as<jsbind::DOMString>();
}

void HTMLElement::innerText(const jsbind::DOMString& value) {
    Element::set("innerText", value);
}

jsbind::DOMString HTMLElement::outerText() const {
    return Element::get("outerText").as<jsbind::DOMString>();
}

void HTMLElement::outerText(const jsbind::DOMString& value) {
    Element::set("outerText", value);
}

ElementInternals HTMLElement::attachInternals() {
    return Element::call("attachInternals").as<ElementInternals>();
}

jsbind::Undefined HTMLElement::showPopover(const ShowPopoverOptions& options) {
    return Element::call("showPopover", options).as<jsbind::Undefined>();
}

jsbind::Undefined HTMLElement::hidePopover() {
    return Element::call("hidePopover").as<jsbind::Undefined>();
}

bool HTMLElement::togglePopover(const jsbind::Any& options) {
    return Element::call("togglePopover", options).as<bool>();
}

jsbind::DOMString HTMLElement::popover() const {
    return Element::get("popover").as<jsbind::DOMString>();
}

void HTMLElement::popover(const jsbind::DOMString& value) {
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

jsbind::DOMString HTMLElement::virtualKeyboardPolicy() const {
    return Element::get("virtualKeyboardPolicy").as<jsbind::DOMString>();
}

void HTMLElement::virtualKeyboardPolicy(const jsbind::DOMString& value) {
    Element::set("virtualKeyboardPolicy", value);
}

DOMStringMap HTMLElement::dataset() const {
    return Element::get("dataset").as<DOMStringMap>();
}

jsbind::DOMString HTMLElement::nonce() const {
    return Element::get("nonce").as<jsbind::DOMString>();
}

void HTMLElement::nonce(const jsbind::DOMString& value) {
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

jsbind::Undefined HTMLElement::focus(const FocusOptions& options) {
    return Element::call("focus", options).as<jsbind::Undefined>();
}

jsbind::Undefined HTMLElement::blur() {
    return Element::call("blur").as<jsbind::Undefined>();
}

