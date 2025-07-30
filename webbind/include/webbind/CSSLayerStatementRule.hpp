#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "CSSRule.hpp"
#include "enums.hpp"


class CSSLayerStatementRule : public CSSRule {
    explicit CSSLayerStatementRule(Handle h) noexcept;

public:
    explicit CSSLayerStatementRule(const emlite::Val &val) noexcept;
    static CSSLayerStatementRule take_ownership(Handle h) noexcept;

    CSSLayerStatementRule clone() const noexcept;
    jsbind::TypedArray<jsbind::String> nameList() const;
};

