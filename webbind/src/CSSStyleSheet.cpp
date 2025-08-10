#include <webbind/CSSStyleSheet.hpp>
#include <webbind/CSSStyleSheetInit.hpp>
#include <webbind/CSSRule.hpp>
#include <webbind/CSSRuleList.hpp>
#include <webbind/CSSStyleSheet.hpp>

namespace webbind {

CSSStyleSheet CSSStyleSheet::take_ownership(Handle h) noexcept {
    return CSSStyleSheet(h);
}

CSSStyleSheet CSSStyleSheet::clone() const noexcept { return *this; }

emlite::Val CSSStyleSheet::instance() noexcept { return emlite::Val::global("CSSStyleSheet"); }

CSSStyleSheet::CSSStyleSheet(Handle h) noexcept : StyleSheet(emlite::Val::take_ownership(h)) {}

CSSStyleSheet::CSSStyleSheet(const emlite::Val &val) noexcept: StyleSheet(val) {}

CSSStyleSheet::CSSStyleSheet() : StyleSheet(emlite::Val::global("CSSStyleSheet").new_()) {}

CSSStyleSheet::CSSStyleSheet(const CSSStyleSheetInit& options) : StyleSheet(emlite::Val::global("CSSStyleSheet").new_(options)) {}

CSSRule CSSStyleSheet::ownerRule() const {
    return StyleSheet::get("ownerRule").as<CSSRule>();
}

CSSRuleList CSSStyleSheet::cssRules() const {
    return StyleSheet::get("cssRules").as<CSSRuleList>();
}

unsigned long CSSStyleSheet::insertRule(const jsbind::String& rule) {
    return StyleSheet::call("insertRule", rule).as<unsigned long>();
}

unsigned long CSSStyleSheet::insertRule(const jsbind::String& rule, unsigned long index) {
    return StyleSheet::call("insertRule", rule, index).as<unsigned long>();
}

jsbind::Undefined CSSStyleSheet::deleteRule(unsigned long index) {
    return StyleSheet::call("deleteRule", index).as<jsbind::Undefined>();
}

jsbind::Promise<CSSStyleSheet> CSSStyleSheet::replace(const jsbind::String& text) {
    return StyleSheet::call("replace", text).as<jsbind::Promise<CSSStyleSheet>>();
}

jsbind::Undefined CSSStyleSheet::replaceSync(const jsbind::String& text) {
    return StyleSheet::call("replaceSync", text).as<jsbind::Undefined>();
}

CSSRuleList CSSStyleSheet::rules() const {
    return StyleSheet::get("rules").as<CSSRuleList>();
}

long CSSStyleSheet::addRule() {
    return StyleSheet::call("addRule").as<long>();
}

long CSSStyleSheet::addRule(const jsbind::String& selector) {
    return StyleSheet::call("addRule", selector).as<long>();
}

long CSSStyleSheet::addRule(const jsbind::String& selector, const jsbind::String& style) {
    return StyleSheet::call("addRule", selector, style).as<long>();
}

long CSSStyleSheet::addRule(const jsbind::String& selector, const jsbind::String& style, unsigned long index) {
    return StyleSheet::call("addRule", selector, style, index).as<long>();
}

jsbind::Undefined CSSStyleSheet::removeRule() {
    return StyleSheet::call("removeRule").as<jsbind::Undefined>();
}

jsbind::Undefined CSSStyleSheet::removeRule(unsigned long index) {
    return StyleSheet::call("removeRule", index).as<jsbind::Undefined>();
}


} // namespace webbind