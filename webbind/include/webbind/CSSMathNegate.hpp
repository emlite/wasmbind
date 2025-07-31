#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "CSSMathValue.hpp"
#include "enums.hpp"

class CSSNumericValue;


/// The CSSMathNegate class.
/// [`CSSMathNegate`](https://developer.mozilla.org/en-US/docs/Web/API/CSSMathNegate)
class CSSMathNegate : public CSSMathValue {
    explicit CSSMathNegate(Handle h) noexcept;

public:
    explicit CSSMathNegate(const emlite::Val &val) noexcept;
    static CSSMathNegate take_ownership(Handle h) noexcept;

    [[nodiscard]] CSSMathNegate clone() const noexcept;
    /// The `new CSSMathNegate(..)` constructor, creating a new CSSMathNegate instance
    CSSMathNegate(const jsbind::Any& arg);
    /// Getter of the `value` attribute.
    /// [`CSSMathNegate.value`](https://developer.mozilla.org/en-US/docs/Web/API/CSSMathNegate/value)
    [[nodiscard]] CSSNumericValue value() const;
};

