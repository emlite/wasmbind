#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "CSSGroupingRule.hpp"
#include "enums.hpp"


class CSSLayerBlockRule : public CSSGroupingRule {
    explicit CSSLayerBlockRule(Handle h) noexcept;

public:
    explicit CSSLayerBlockRule(const emlite::Val &val) noexcept;
    static CSSLayerBlockRule take_ownership(Handle h) noexcept;

    CSSLayerBlockRule clone() const noexcept;
    jsbind::CSSOMString name() const;
};

