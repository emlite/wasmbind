#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "CSSRule.hpp"
#include "enums.hpp"

class CSSRuleList;
class CSSKeyframeRule;


class CSSKeyframesRule : public CSSRule {
    explicit CSSKeyframesRule(Handle h) noexcept;

public:
    explicit CSSKeyframesRule(const emlite::Val &val) noexcept;
    static CSSKeyframesRule take_ownership(Handle h) noexcept;

    CSSKeyframesRule clone() const noexcept;
    jsbind::CSSOMString name() const;
    void name(const jsbind::CSSOMString& value);
    CSSRuleList cssRules() const;
    unsigned long length() const;
    jsbind::Undefined appendRule(const jsbind::CSSOMString& rule);
    jsbind::Undefined deleteRule(const jsbind::CSSOMString& select);
    CSSKeyframeRule findRule(const jsbind::CSSOMString& select);
};

