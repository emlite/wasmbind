#include "webbind/CSSStyleDeclaration.hpp"
#include "webbind/CSSRule.hpp"

namespace webbind {

CSSStyleDeclaration CSSStyleDeclaration::take_ownership(Handle h) noexcept {
        return CSSStyleDeclaration(h);
    }
CSSStyleDeclaration CSSStyleDeclaration::clone() const noexcept { return *this; }
emlite::Val CSSStyleDeclaration::instance() noexcept { return emlite::Val::global("CSSStyleDeclaration"); }
CSSStyleDeclaration::CSSStyleDeclaration(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
CSSStyleDeclaration::CSSStyleDeclaration(const emlite::Val &val) noexcept: emlite::Val(val) {}

jsbind::String CSSStyleDeclaration::cssText() const {
    return emlite::Val::get("cssText").as<jsbind::String>();
}

void CSSStyleDeclaration::cssText(const jsbind::String& value) {
    emlite::Val::set("cssText", value);
}

unsigned long CSSStyleDeclaration::length() const {
    return emlite::Val::get("length").as<unsigned long>();
}

jsbind::String CSSStyleDeclaration::item(unsigned long index) {
    return emlite::Val::call("item", index).as<jsbind::String>();
}

jsbind::String CSSStyleDeclaration::getPropertyValue(const jsbind::String& property) {
    return emlite::Val::call("getPropertyValue", property).as<jsbind::String>();
}

jsbind::String CSSStyleDeclaration::getPropertyPriority(const jsbind::String& property) {
    return emlite::Val::call("getPropertyPriority", property).as<jsbind::String>();
}

jsbind::Undefined CSSStyleDeclaration::setProperty(const jsbind::String& property, const jsbind::String& value) {
    return emlite::Val::call("setProperty", property, value).as<jsbind::Undefined>();
}

jsbind::Undefined CSSStyleDeclaration::setProperty(const jsbind::String& property, const jsbind::String& value, const jsbind::String& priority) {
    return emlite::Val::call("setProperty", property, value, priority).as<jsbind::Undefined>();
}

jsbind::String CSSStyleDeclaration::removeProperty(const jsbind::String& property) {
    return emlite::Val::call("removeProperty", property).as<jsbind::String>();
}

CSSRule CSSStyleDeclaration::parentRule() const {
    return emlite::Val::get("parentRule").as<CSSRule>();
}


} // namespace webbind