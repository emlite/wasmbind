#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "CSSConditionRule.hpp"
#include "enums.hpp"


class CSSContainerRule : public CSSConditionRule {
    explicit CSSContainerRule(Handle h) noexcept;

public:
    explicit CSSContainerRule(const emlite::Val &val) noexcept;
    static CSSContainerRule take_ownership(Handle h) noexcept;

    CSSContainerRule clone() const noexcept;
    jsbind::CSSOMString containerName() const;
    jsbind::CSSOMString containerQuery() const;
};

