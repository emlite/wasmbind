#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "CSSConditionRule.hpp"
#include "enums.hpp"


class CSSSupportsRule : public CSSConditionRule {
    explicit CSSSupportsRule(Handle h) noexcept;

public:
    explicit CSSSupportsRule(const emlite::Val &val) noexcept;
    static CSSSupportsRule take_ownership(Handle h) noexcept;

    CSSSupportsRule clone() const noexcept;
    bool matches() const;
};

