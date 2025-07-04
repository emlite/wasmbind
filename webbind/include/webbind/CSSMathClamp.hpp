#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "CSSMathValue.hpp"
#include "enums.hpp"

class CSSNumericValue;


class CSSMathClamp : public CSSMathValue {
    explicit CSSMathClamp(Handle h) noexcept;

public:
    explicit CSSMathClamp(const emlite::Val &val) noexcept;
    static CSSMathClamp take_ownership(Handle h) noexcept;

    CSSMathClamp clone() const noexcept;
    CSSMathClamp(const jsbind::Any& lower, const jsbind::Any& value, const jsbind::Any& upper);
    CSSNumericValue lower() const;
    CSSNumericValue value() const;
    CSSNumericValue upper() const;
};

