#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "CSSNumericValue.hpp"
#include "enums.hpp"


class CSSMathValue : public CSSNumericValue {
    explicit CSSMathValue(Handle h) noexcept;

public:
    explicit CSSMathValue(const emlite::Val &val) noexcept;
    static CSSMathValue take_ownership(Handle h) noexcept;

    CSSMathValue clone() const noexcept;
    CSSMathOperator operator_() const;
};

