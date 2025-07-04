#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "CSSMathValue.hpp"
#include "enums.hpp"

class CSSNumericArray;


class CSSMathSum : public CSSMathValue {
    explicit CSSMathSum(Handle h) noexcept;

public:
    explicit CSSMathSum(const emlite::Val &val) noexcept;
    static CSSMathSum take_ownership(Handle h) noexcept;

    CSSMathSum clone() const noexcept;
    CSSMathSum(const jsbind::Any& args);
    CSSNumericArray values() const;
};

