#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "CSSMathValue.hpp"
#include "enums.hpp"

class CSSNumericArray;


class CSSMathMin : public CSSMathValue {
    explicit CSSMathMin(Handle h) noexcept;

public:
    explicit CSSMathMin(const emlite::Val &val) noexcept;
    static CSSMathMin take_ownership(Handle h) noexcept;

    CSSMathMin clone() const noexcept;
    CSSMathMin(const jsbind::Any& args);
    CSSNumericArray values() const;
};

