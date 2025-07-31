#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "CSSMathValue.hpp"
#include "enums.hpp"

class CSSNumericArray;


/// The CSSMathSum class.
/// [`CSSMathSum`](https://developer.mozilla.org/en-US/docs/Web/API/CSSMathSum)
class CSSMathSum : public CSSMathValue {
    explicit CSSMathSum(Handle h) noexcept;

public:
    explicit CSSMathSum(const emlite::Val &val) noexcept;
    static CSSMathSum take_ownership(Handle h) noexcept;

    [[nodiscard]] CSSMathSum clone() const noexcept;
    /// The `new CSSMathSum(..)` constructor, creating a new CSSMathSum instance
    CSSMathSum(const jsbind::Any& args);
    /// Getter of the `values` attribute.
    /// [`CSSMathSum.values`](https://developer.mozilla.org/en-US/docs/Web/API/CSSMathSum/values)
    [[nodiscard]] CSSNumericArray values() const;
};

