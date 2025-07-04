#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "CSSRule.hpp"
#include "enums.hpp"


class CSSPropertyRule : public CSSRule {
    explicit CSSPropertyRule(Handle h) noexcept;

public:
    explicit CSSPropertyRule(const emlite::Val &val) noexcept;
    static CSSPropertyRule take_ownership(Handle h) noexcept;

    CSSPropertyRule clone() const noexcept;
    jsbind::CSSOMString name() const;
    jsbind::CSSOMString syntax() const;
    bool inherits() const;
    jsbind::CSSOMString initialValue() const;
};

