#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "CSSMathValue.hpp"
#include "enums.hpp"

class CSSNumericArray;


/// The CSSMathMin class.
/// [`CSSMathMin`](https://developer.mozilla.org/en-US/docs/Web/API/CSSMathMin)
class CSSMathMin : public CSSMathValue {
    explicit CSSMathMin(Handle h) noexcept;

public:
    explicit CSSMathMin(const emlite::Val &val) noexcept;
    static CSSMathMin take_ownership(Handle h) noexcept;

    [[nodiscard]] CSSMathMin clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new CSSMathMin(..)` constructor, creating a new CSSMathMin instance
    CSSMathMin(const jsbind::Any& args);
    /// Getter of the `values` attribute.
    /// [`CSSMathMin.values`](https://developer.mozilla.org/en-US/docs/Web/API/CSSMathMin/values)
    [[nodiscard]] CSSNumericArray values() const;
};

