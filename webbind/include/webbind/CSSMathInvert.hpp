#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "CSSMathValue.hpp"
#include "enums.hpp"

class CSSNumericValue;


class CSSMathInvert : public CSSMathValue {
    explicit CSSMathInvert(Handle h) noexcept;

public:
    explicit CSSMathInvert(const emlite::Val &val) noexcept;
    static CSSMathInvert take_ownership(Handle h) noexcept;

    CSSMathInvert clone() const noexcept;
    CSSMathInvert(const jsbind::Any& arg);
    CSSNumericValue value() const;
};

