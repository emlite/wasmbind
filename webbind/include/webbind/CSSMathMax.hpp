#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "CSSMathValue.hpp"
#include "enums.hpp"

class CSSNumericArray;


class CSSMathMax : public CSSMathValue {
    explicit CSSMathMax(Handle h) noexcept;

public:
    explicit CSSMathMax(const emlite::Val &val) noexcept;
    static CSSMathMax take_ownership(Handle h) noexcept;

    CSSMathMax clone() const noexcept;
    CSSMathMax(const jsbind::Any& args);
    CSSNumericArray values() const;
};

