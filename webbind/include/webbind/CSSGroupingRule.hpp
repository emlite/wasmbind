#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "CSSRule.hpp"
#include "enums.hpp"

class CSSRuleList;


class CSSGroupingRule : public CSSRule {
    explicit CSSGroupingRule(Handle h) noexcept;

public:
    explicit CSSGroupingRule(const emlite::Val &val) noexcept;
    static CSSGroupingRule take_ownership(Handle h) noexcept;

    CSSGroupingRule clone() const noexcept;
    CSSRuleList cssRules() const;
    unsigned long insertRule(const jsbind::String& rule);
    unsigned long insertRule(const jsbind::String& rule, unsigned long index);
    jsbind::Undefined deleteRule(unsigned long index);
};

