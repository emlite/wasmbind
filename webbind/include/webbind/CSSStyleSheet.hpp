#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "StyleSheet.hpp"
#include "enums.hpp"

class CSSRule;
class CSSRuleList;
class CSSStyleSheet;


class CSSStyleSheet : public StyleSheet {
    explicit CSSStyleSheet(Handle h) noexcept;

public:
    explicit CSSStyleSheet(const emlite::Val &val) noexcept;
    static CSSStyleSheet take_ownership(Handle h) noexcept;

    CSSStyleSheet clone() const noexcept;
    CSSStyleSheet();
    CSSStyleSheet(const jsbind::Any& options);
    CSSRule ownerRule() const;
    CSSRuleList cssRules() const;
    unsigned long insertRule(const jsbind::String& rule);
    unsigned long insertRule(const jsbind::String& rule, unsigned long index);
    jsbind::Undefined deleteRule(unsigned long index);
    jsbind::Promise<CSSStyleSheet> replace(const jsbind::String& text);
    jsbind::Undefined replaceSync(const jsbind::String& text);
    CSSRuleList rules() const;
    long addRule();
    long addRule(const jsbind::String& selector);
    long addRule(const jsbind::String& selector, const jsbind::String& style);
    long addRule(const jsbind::String& selector, const jsbind::String& style, unsigned long index);
    jsbind::Undefined removeRule();
    jsbind::Undefined removeRule(unsigned long index);
};

