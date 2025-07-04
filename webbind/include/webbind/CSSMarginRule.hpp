#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "CSSRule.hpp"
#include "enums.hpp"

class CSSStyleDeclaration;


class CSSMarginRule : public CSSRule {
    explicit CSSMarginRule(Handle h) noexcept;

public:
    explicit CSSMarginRule(const emlite::Val &val) noexcept;
    static CSSMarginRule take_ownership(Handle h) noexcept;

    CSSMarginRule clone() const noexcept;
    jsbind::CSSOMString name() const;
    CSSStyleDeclaration style() const;
};

