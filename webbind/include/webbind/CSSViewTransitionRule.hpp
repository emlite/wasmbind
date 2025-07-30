#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "CSSRule.hpp"
#include "enums.hpp"


class CSSViewTransitionRule : public CSSRule {
    explicit CSSViewTransitionRule(Handle h) noexcept;

public:
    explicit CSSViewTransitionRule(const emlite::Val &val) noexcept;
    static CSSViewTransitionRule take_ownership(Handle h) noexcept;

    CSSViewTransitionRule clone() const noexcept;
    jsbind::String navigation() const;
    jsbind::TypedArray<jsbind::String> types() const;
};

