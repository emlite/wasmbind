#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "CSSGroupingRule.hpp"
#include "enums.hpp"


class CSSConditionRule : public CSSGroupingRule {
    explicit CSSConditionRule(Handle h) noexcept;

public:
    explicit CSSConditionRule(const emlite::Val &val) noexcept;
    static CSSConditionRule take_ownership(Handle h) noexcept;

    CSSConditionRule clone() const noexcept;
    jsbind::CSSOMString conditionText() const;
};

