#include <webbind/CSSPageDescriptors.hpp>


CSSPageDescriptors CSSPageDescriptors::take_ownership(Handle h) noexcept {
        return CSSPageDescriptors(h);
    }
CSSPageDescriptors CSSPageDescriptors::clone() const noexcept { return *this; }
CSSPageDescriptors::CSSPageDescriptors(Handle h) noexcept : CSSStyleDeclaration(emlite::Val::take_ownership(h)) {}
CSSPageDescriptors::CSSPageDescriptors(const emlite::Val &val) noexcept: CSSStyleDeclaration(val) {}


jsbind::CSSOMString CSSPageDescriptors::margin() const {
    return CSSStyleDeclaration::get("margin").as<jsbind::CSSOMString>();
}

void CSSPageDescriptors::margin(const jsbind::CSSOMString& value) {
    CSSStyleDeclaration::set("margin", value);
}

jsbind::CSSOMString CSSPageDescriptors::marginTop() const {
    return CSSStyleDeclaration::get("marginTop").as<jsbind::CSSOMString>();
}

void CSSPageDescriptors::marginTop(const jsbind::CSSOMString& value) {
    CSSStyleDeclaration::set("marginTop", value);
}

jsbind::CSSOMString CSSPageDescriptors::marginRight() const {
    return CSSStyleDeclaration::get("marginRight").as<jsbind::CSSOMString>();
}

void CSSPageDescriptors::marginRight(const jsbind::CSSOMString& value) {
    CSSStyleDeclaration::set("marginRight", value);
}

jsbind::CSSOMString CSSPageDescriptors::marginBottom() const {
    return CSSStyleDeclaration::get("marginBottom").as<jsbind::CSSOMString>();
}

void CSSPageDescriptors::marginBottom(const jsbind::CSSOMString& value) {
    CSSStyleDeclaration::set("marginBottom", value);
}

jsbind::CSSOMString CSSPageDescriptors::marginLeft() const {
    return CSSStyleDeclaration::get("marginLeft").as<jsbind::CSSOMString>();
}

void CSSPageDescriptors::marginLeft(const jsbind::CSSOMString& value) {
    CSSStyleDeclaration::set("marginLeft", value);
}

jsbind::CSSOMString CSSPageDescriptors::margin_top() const {
    return CSSStyleDeclaration::get("margin-top").as<jsbind::CSSOMString>();
}

void CSSPageDescriptors::margin_top(const jsbind::CSSOMString& value) {
    CSSStyleDeclaration::set("margin-top", value);
}

jsbind::CSSOMString CSSPageDescriptors::margin_right() const {
    return CSSStyleDeclaration::get("margin-right").as<jsbind::CSSOMString>();
}

void CSSPageDescriptors::margin_right(const jsbind::CSSOMString& value) {
    CSSStyleDeclaration::set("margin-right", value);
}

jsbind::CSSOMString CSSPageDescriptors::margin_bottom() const {
    return CSSStyleDeclaration::get("margin-bottom").as<jsbind::CSSOMString>();
}

void CSSPageDescriptors::margin_bottom(const jsbind::CSSOMString& value) {
    CSSStyleDeclaration::set("margin-bottom", value);
}

jsbind::CSSOMString CSSPageDescriptors::margin_left() const {
    return CSSStyleDeclaration::get("margin-left").as<jsbind::CSSOMString>();
}

void CSSPageDescriptors::margin_left(const jsbind::CSSOMString& value) {
    CSSStyleDeclaration::set("margin-left", value);
}

jsbind::CSSOMString CSSPageDescriptors::size() const {
    return CSSStyleDeclaration::get("size").as<jsbind::CSSOMString>();
}

void CSSPageDescriptors::size(const jsbind::CSSOMString& value) {
    CSSStyleDeclaration::set("size", value);
}

jsbind::CSSOMString CSSPageDescriptors::pageOrientation() const {
    return CSSStyleDeclaration::get("pageOrientation").as<jsbind::CSSOMString>();
}

void CSSPageDescriptors::pageOrientation(const jsbind::CSSOMString& value) {
    CSSStyleDeclaration::set("pageOrientation", value);
}

jsbind::CSSOMString CSSPageDescriptors::page_orientation() const {
    return CSSStyleDeclaration::get("page-orientation").as<jsbind::CSSOMString>();
}

void CSSPageDescriptors::page_orientation(const jsbind::CSSOMString& value) {
    CSSStyleDeclaration::set("page-orientation", value);
}

jsbind::CSSOMString CSSPageDescriptors::marks() const {
    return CSSStyleDeclaration::get("marks").as<jsbind::CSSOMString>();
}

void CSSPageDescriptors::marks(const jsbind::CSSOMString& value) {
    CSSStyleDeclaration::set("marks", value);
}

jsbind::CSSOMString CSSPageDescriptors::bleed() const {
    return CSSStyleDeclaration::get("bleed").as<jsbind::CSSOMString>();
}

void CSSPageDescriptors::bleed(const jsbind::CSSOMString& value) {
    CSSStyleDeclaration::set("bleed", value);
}

