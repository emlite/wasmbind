#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "CSSMathValue.hpp"
#include "enums.hpp"

class CSSNumericValue;


class CSSMathNegate : public CSSMathValue {
    explicit CSSMathNegate(Handle h) noexcept;

public:
    explicit CSSMathNegate(const emlite::Val &val) noexcept;
    static CSSMathNegate take_ownership(Handle h) noexcept;

    CSSMathNegate clone() const noexcept;
    CSSMathNegate(const jsbind::Any& arg);
    CSSNumericValue value() const;
};

