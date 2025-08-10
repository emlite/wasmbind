#include <webbind/CSSPageDescriptors.hpp>

namespace webbind {

CSSPageDescriptors CSSPageDescriptors::take_ownership(Handle h) noexcept {
        return CSSPageDescriptors(h);
    }
CSSPageDescriptors CSSPageDescriptors::clone() const noexcept { return *this; }
emlite::Val CSSPageDescriptors::instance() noexcept { return emlite::Val::global("CSSPageDescriptors"); }
CSSPageDescriptors::CSSPageDescriptors(Handle h) noexcept : CSSStyleDeclaration(emlite::Val::take_ownership(h)) {}
CSSPageDescriptors::CSSPageDescriptors(const emlite::Val &val) noexcept: CSSStyleDeclaration(val) {}

jsbind::String CSSPageDescriptors::margin() const {
    return CSSStyleDeclaration::get("margin").as<jsbind::String>();
}

void CSSPageDescriptors::margin(const jsbind::String& value) {
    CSSStyleDeclaration::set("margin", value);
}

jsbind::String CSSPageDescriptors::marginTop() const {
    return CSSStyleDeclaration::get("marginTop").as<jsbind::String>();
}

void CSSPageDescriptors::marginTop(const jsbind::String& value) {
    CSSStyleDeclaration::set("marginTop", value);
}

jsbind::String CSSPageDescriptors::marginRight() const {
    return CSSStyleDeclaration::get("marginRight").as<jsbind::String>();
}

void CSSPageDescriptors::marginRight(const jsbind::String& value) {
    CSSStyleDeclaration::set("marginRight", value);
}

jsbind::String CSSPageDescriptors::marginBottom() const {
    return CSSStyleDeclaration::get("marginBottom").as<jsbind::String>();
}

void CSSPageDescriptors::marginBottom(const jsbind::String& value) {
    CSSStyleDeclaration::set("marginBottom", value);
}

jsbind::String CSSPageDescriptors::marginLeft() const {
    return CSSStyleDeclaration::get("marginLeft").as<jsbind::String>();
}

void CSSPageDescriptors::marginLeft(const jsbind::String& value) {
    CSSStyleDeclaration::set("marginLeft", value);
}

jsbind::String CSSPageDescriptors::margin_top() const {
    return CSSStyleDeclaration::get("margin-top").as<jsbind::String>();
}

void CSSPageDescriptors::margin_top(const jsbind::String& value) {
    CSSStyleDeclaration::set("margin-top", value);
}

jsbind::String CSSPageDescriptors::margin_right() const {
    return CSSStyleDeclaration::get("margin-right").as<jsbind::String>();
}

void CSSPageDescriptors::margin_right(const jsbind::String& value) {
    CSSStyleDeclaration::set("margin-right", value);
}

jsbind::String CSSPageDescriptors::margin_bottom() const {
    return CSSStyleDeclaration::get("margin-bottom").as<jsbind::String>();
}

void CSSPageDescriptors::margin_bottom(const jsbind::String& value) {
    CSSStyleDeclaration::set("margin-bottom", value);
}

jsbind::String CSSPageDescriptors::margin_left() const {
    return CSSStyleDeclaration::get("margin-left").as<jsbind::String>();
}

void CSSPageDescriptors::margin_left(const jsbind::String& value) {
    CSSStyleDeclaration::set("margin-left", value);
}

jsbind::String CSSPageDescriptors::size() const {
    return CSSStyleDeclaration::get("size").as<jsbind::String>();
}

void CSSPageDescriptors::size(const jsbind::String& value) {
    CSSStyleDeclaration::set("size", value);
}

jsbind::String CSSPageDescriptors::pageOrientation() const {
    return CSSStyleDeclaration::get("pageOrientation").as<jsbind::String>();
}

void CSSPageDescriptors::pageOrientation(const jsbind::String& value) {
    CSSStyleDeclaration::set("pageOrientation", value);
}

jsbind::String CSSPageDescriptors::page_orientation() const {
    return CSSStyleDeclaration::get("page-orientation").as<jsbind::String>();
}

void CSSPageDescriptors::page_orientation(const jsbind::String& value) {
    CSSStyleDeclaration::set("page-orientation", value);
}

jsbind::String CSSPageDescriptors::marks() const {
    return CSSStyleDeclaration::get("marks").as<jsbind::String>();
}

void CSSPageDescriptors::marks(const jsbind::String& value) {
    CSSStyleDeclaration::set("marks", value);
}

jsbind::String CSSPageDescriptors::bleed() const {
    return CSSStyleDeclaration::get("bleed").as<jsbind::String>();
}

void CSSPageDescriptors::bleed(const jsbind::String& value) {
    CSSStyleDeclaration::set("bleed", value);
}


} // namespace webbind