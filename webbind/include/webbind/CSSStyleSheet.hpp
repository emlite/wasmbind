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
    CSSStyleSheet(const jsbind::Any& options);
    CSSRule ownerRule() const;
    CSSRuleList cssRules() const;
    unsigned long insertRule(const jsbind::CSSOMString& rule, unsigned long index);
    jsbind::Undefined deleteRule(unsigned long index);
    jsbind::Promise replace(const jsbind::USVString& text);
    jsbind::Undefined replaceSync(const jsbind::USVString& text);
    CSSRuleList rules() const;
    long addRule(const jsbind::DOMString& selector, const jsbind::DOMString& style, unsigned long index);
    jsbind::Undefined removeRule(unsigned long index);
};

