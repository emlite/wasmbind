#include <webbind/CSSStyleSheet.hpp>
#include <webbind/CSSRule.hpp>
#include <webbind/CSSRuleList.hpp>


CSSStyleSheet CSSStyleSheet::take_ownership(Handle h) noexcept {
        return CSSStyleSheet(h);
    }
CSSStyleSheet CSSStyleSheet::clone() const noexcept { return *this; }
CSSStyleSheet::CSSStyleSheet(Handle h) noexcept : StyleSheet(emlite::Val::take_ownership(h)) {}
CSSStyleSheet::CSSStyleSheet(const emlite::Val &val) noexcept: StyleSheet(val) {}


CSSStyleSheet::CSSStyleSheet() : StyleSheet(emlite::Val::global("CSSStyleSheet").new_()) {}

CSSStyleSheet::CSSStyleSheet(const jsbind::Any& options) : StyleSheet(emlite::Val::global("CSSStyleSheet").new_(options)) {}

CSSRule CSSStyleSheet::ownerRule() const {
    return StyleSheet::get("ownerRule").as<CSSRule>();
}

CSSRuleList CSSStyleSheet::cssRules() const {
    return StyleSheet::get("cssRules").as<CSSRuleList>();
}

unsigned long CSSStyleSheet::insertRule(const jsbind::CSSOMString& rule) {
    return StyleSheet::call("insertRule", rule).as<unsigned long>();
}

unsigned long CSSStyleSheet::insertRule(const jsbind::CSSOMString& rule, unsigned long index) {
    return StyleSheet::call("insertRule", rule, index).as<unsigned long>();
}

jsbind::Undefined CSSStyleSheet::deleteRule(unsigned long index) {
    return StyleSheet::call("deleteRule", index).as<jsbind::Undefined>();
}

jsbind::Promise CSSStyleSheet::replace(const jsbind::USVString& text) {
    return StyleSheet::call("replace", text).as<jsbind::Promise>();
}

jsbind::Undefined CSSStyleSheet::replaceSync(const jsbind::USVString& text) {
    return StyleSheet::call("replaceSync", text).as<jsbind::Undefined>();
}

CSSRuleList CSSStyleSheet::rules() const {
    return StyleSheet::get("rules").as<CSSRuleList>();
}

long CSSStyleSheet::addRule() {
    return StyleSheet::call("addRule").as<long>();
}

long CSSStyleSheet::addRule(const jsbind::DOMString& selector) {
    return StyleSheet::call("addRule", selector).as<long>();
}

long CSSStyleSheet::addRule(const jsbind::DOMString& selector, const jsbind::DOMString& style) {
    return StyleSheet::call("addRule", selector, style).as<long>();
}

long CSSStyleSheet::addRule(const jsbind::DOMString& selector, const jsbind::DOMString& style, unsigned long index) {
    return StyleSheet::call("addRule", selector, style, index).as<long>();
}

jsbind::Undefined CSSStyleSheet::removeRule() {
    return StyleSheet::call("removeRule").as<jsbind::Undefined>();
}

jsbind::Undefined CSSStyleSheet::removeRule(unsigned long index) {
    return StyleSheet::call("removeRule", index).as<jsbind::Undefined>();
}

