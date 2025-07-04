#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "CSSRule.hpp"
#include "enums.hpp"

class CSSPositionTryDescriptors;


class CSSPositionTryRule : public CSSRule {
    explicit CSSPositionTryRule(Handle h) noexcept;

public:
    explicit CSSPositionTryRule(const emlite::Val &val) noexcept;
    static CSSPositionTryRule take_ownership(Handle h) noexcept;

    CSSPositionTryRule clone() const noexcept;
    jsbind::CSSOMString name() const;
    CSSPositionTryDescriptors style() const;
};

