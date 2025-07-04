#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "CSSMathValue.hpp"
#include "enums.hpp"

class CSSNumericArray;


class CSSMathProduct : public CSSMathValue {
    explicit CSSMathProduct(Handle h) noexcept;

public:
    explicit CSSMathProduct(const emlite::Val &val) noexcept;
    static CSSMathProduct take_ownership(Handle h) noexcept;

    CSSMathProduct clone() const noexcept;
    CSSMathProduct(const jsbind::Any& args);
    CSSNumericArray values() const;
};

