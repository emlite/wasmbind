#include <webbind/CSSStyleDeclaration.hpp>
#include <webbind/CSSRule.hpp>


CSSStyleDeclaration CSSStyleDeclaration::take_ownership(Handle h) noexcept {
        return CSSStyleDeclaration(h);
    }
CSSStyleDeclaration CSSStyleDeclaration::clone() const noexcept { return *this; }
CSSStyleDeclaration::CSSStyleDeclaration(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
CSSStyleDeclaration::CSSStyleDeclaration(const emlite::Val &val) noexcept: emlite::Val(val) {}


jsbind::CSSOMString CSSStyleDeclaration::cssText() const {
    return emlite::Val::get("cssText").as<jsbind::CSSOMString>();
}

void CSSStyleDeclaration::cssText(const jsbind::CSSOMString& value) {
    emlite::Val::set("cssText", value);
}

unsigned long CSSStyleDeclaration::length() const {
    return emlite::Val::get("length").as<unsigned long>();
}

jsbind::CSSOMString CSSStyleDeclaration::item(unsigned long index) {
    return emlite::Val::call("item", index).as<jsbind::CSSOMString>();
}

jsbind::CSSOMString CSSStyleDeclaration::getPropertyValue(const jsbind::CSSOMString& property) {
    return emlite::Val::call("getPropertyValue", property).as<jsbind::CSSOMString>();
}

jsbind::CSSOMString CSSStyleDeclaration::getPropertyPriority(const jsbind::CSSOMString& property) {
    return emlite::Val::call("getPropertyPriority", property).as<jsbind::CSSOMString>();
}

jsbind::Undefined CSSStyleDeclaration::setProperty(const jsbind::CSSOMString& property, const jsbind::CSSOMString& value, const jsbind::CSSOMString& priority) {
    return emlite::Val::call("setProperty", property, value, priority).as<jsbind::Undefined>();
}

jsbind::CSSOMString CSSStyleDeclaration::removeProperty(const jsbind::CSSOMString& property) {
    return emlite::Val::call("removeProperty", property).as<jsbind::CSSOMString>();
}

CSSRule CSSStyleDeclaration::parentRule() const {
    return emlite::Val::get("parentRule").as<CSSRule>();
}

