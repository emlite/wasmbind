#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "CSSNumericValue.hpp"
#include "enums.hpp"


/// The CSSMathValue class.
/// [`CSSMathValue`](https://developer.mozilla.org/en-US/docs/Web/API/CSSMathValue)
class CSSMathValue : public CSSNumericValue {
    explicit CSSMathValue(Handle h) noexcept;

public:
    explicit CSSMathValue(const emlite::Val &val) noexcept;
    static CSSMathValue take_ownership(Handle h) noexcept;

    [[nodiscard]] CSSMathValue clone() const noexcept;
    /// Getter of the `operator` attribute.
    /// [`CSSMathValue.operator`](https://developer.mozilla.org/en-US/docs/Web/API/CSSMathValue/operator)
    [[nodiscard]] CSSMathOperator operator_() const;
};

