#include <webbind/HTMLTableElement.hpp>
#include <webbind/HTMLTableCaptionElement.hpp>
#include <webbind/HTMLTableSectionElement.hpp>
#include <webbind/HTMLCollection.hpp>
#include <webbind/HTMLTableRowElement.hpp>

namespace webbind {

HTMLTableElement HTMLTableElement::take_ownership(Handle h) noexcept {
    return HTMLTableElement(h);
}

HTMLTableElement HTMLTableElement::clone() const noexcept { return *this; }

emlite::Val HTMLTableElement::instance() noexcept { return emlite::Val::global("HTMLTableElement"); }

HTMLTableElement::HTMLTableElement(Handle h) noexcept : HTMLElement(emlite::Val::take_ownership(h)) {}

HTMLTableElement::HTMLTableElement(const emlite::Val &val) noexcept: HTMLElement(val) {}

HTMLTableElement::HTMLTableElement() : HTMLElement(emlite::Val::global("HTMLTableElement").new_()) {}

HTMLTableCaptionElement HTMLTableElement::caption() const {
    return HTMLElement::get("caption").as<HTMLTableCaptionElement>();
}

void HTMLTableElement::caption(const HTMLTableCaptionElement& value) {
    HTMLElement::set("caption", value);
}

HTMLTableCaptionElement HTMLTableElement::createCaption() {
    return HTMLElement::call("createCaption").as<HTMLTableCaptionElement>();
}

jsbind::Undefined HTMLTableElement::deleteCaption() {
    return HTMLElement::call("deleteCaption").as<jsbind::Undefined>();
}

HTMLTableSectionElement HTMLTableElement::tHead() const {
    return HTMLElement::get("tHead").as<HTMLTableSectionElement>();
}

void HTMLTableElement::tHead(const HTMLTableSectionElement& value) {
    HTMLElement::set("tHead", value);
}

HTMLTableSectionElement HTMLTableElement::createTHead() {
    return HTMLElement::call("createTHead").as<HTMLTableSectionElement>();
}

jsbind::Undefined HTMLTableElement::deleteTHead() {
    return HTMLElement::call("deleteTHead").as<jsbind::Undefined>();
}

HTMLTableSectionElement HTMLTableElement::tFoot() const {
    return HTMLElement::get("tFoot").as<HTMLTableSectionElement>();
}

void HTMLTableElement::tFoot(const HTMLTableSectionElement& value) {
    HTMLElement::set("tFoot", value);
}

HTMLTableSectionElement HTMLTableElement::createTFoot() {
    return HTMLElement::call("createTFoot").as<HTMLTableSectionElement>();
}

jsbind::Undefined HTMLTableElement::deleteTFoot() {
    return HTMLElement::call("deleteTFoot").as<jsbind::Undefined>();
}

HTMLCollection HTMLTableElement::tBodies() const {
    return HTMLElement::get("tBodies").as<HTMLCollection>();
}

HTMLTableSectionElement HTMLTableElement::createTBody() {
    return HTMLElement::call("createTBody").as<HTMLTableSectionElement>();
}

HTMLCollection HTMLTableElement::rows() const {
    return HTMLElement::get("rows").as<HTMLCollection>();
}

HTMLTableRowElement HTMLTableElement::insertRow() {
    return HTMLElement::call("insertRow").as<HTMLTableRowElement>();
}

HTMLTableRowElement HTMLTableElement::insertRow(long index) {
    return HTMLElement::call("insertRow", index).as<HTMLTableRowElement>();
}

jsbind::Undefined HTMLTableElement::deleteRow(long index) {
    return HTMLElement::call("deleteRow", index).as<jsbind::Undefined>();
}

jsbind::String HTMLTableElement::align() const {
    return HTMLElement::get("align").as<jsbind::String>();
}

void HTMLTableElement::align(const jsbind::String& value) {
    HTMLElement::set("align", value);
}

jsbind::String HTMLTableElement::border() const {
    return HTMLElement::get("border").as<jsbind::String>();
}

void HTMLTableElement::border(const jsbind::String& value) {
    HTMLElement::set("border", value);
}

jsbind::String HTMLTableElement::frame() const {
    return HTMLElement::get("frame").as<jsbind::String>();
}

void HTMLTableElement::frame(const jsbind::String& value) {
    HTMLElement::set("frame", value);
}

jsbind::String HTMLTableElement::rules() const {
    return HTMLElement::get("rules").as<jsbind::String>();
}

void HTMLTableElement::rules(const jsbind::String& value) {
    HTMLElement::set("rules", value);
}

jsbind::String HTMLTableElement::summary() const {
    return HTMLElement::get("summary").as<jsbind::String>();
}

void HTMLTableElement::summary(const jsbind::String& value) {
    HTMLElement::set("summary", value);
}

jsbind::String HTMLTableElement::width() const {
    return HTMLElement::get("width").as<jsbind::String>();
}

void HTMLTableElement::width(const jsbind::String& value) {
    HTMLElement::set("width", value);
}

jsbind::String HTMLTableElement::bgColor() const {
    return HTMLElement::get("bgColor").as<jsbind::String>();
}

void HTMLTableElement::bgColor(const jsbind::String& value) {
    HTMLElement::set("bgColor", value);
}

jsbind::String HTMLTableElement::cellPadding() const {
    return HTMLElement::get("cellPadding").as<jsbind::String>();
}

void HTMLTableElement::cellPadding(const jsbind::String& value) {
    HTMLElement::set("cellPadding", value);
}

jsbind::String HTMLTableElement::cellSpacing() const {
    return HTMLElement::get("cellSpacing").as<jsbind::String>();
}

void HTMLTableElement::cellSpacing(const jsbind::String& value) {
    HTMLElement::set("cellSpacing", value);
}


} // namespace webbind