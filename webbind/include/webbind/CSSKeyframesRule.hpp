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
    jsbind::String name() const;
    void name(const jsbind::String& value);
    CSSRuleList cssRules() const;
    unsigned long length() const;
    jsbind::Undefined appendRule(const jsbind::String& rule);
    jsbind::Undefined deleteRule(const jsbind::String& select);
    CSSKeyframeRule findRule(const jsbind::String& select);
};

