#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "CSSMathValue.hpp"
#include "enums.hpp"

class CSSNumericArray;


/// The CSSMathMax class.
/// [`CSSMathMax`](https://developer.mozilla.org/en-US/docs/Web/API/CSSMathMax)
class CSSMathMax : public CSSMathValue {
    explicit CSSMathMax(Handle h) noexcept;

public:
    explicit CSSMathMax(const emlite::Val &val) noexcept;
    static CSSMathMax take_ownership(Handle h) noexcept;

    [[nodiscard]] CSSMathMax clone() const noexcept;
    /// The `new CSSMathMax(..)` constructor, creating a new CSSMathMax instance
    CSSMathMax(const jsbind::Any& args);
    /// Getter of the `values` attribute.
    /// [`CSSMathMax.values`](https://developer.mozilla.org/en-US/docs/Web/API/CSSMathMax/values)
    [[nodiscard]] CSSNumericArray values() const;
};

