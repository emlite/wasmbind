#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "CSSMathValue.hpp"

namespace webbind {

class CSSNumericArray;

/// Interface CSSMathProduct
/// [`CSSMathProduct`](https://developer.mozilla.org/en-US/docs/Web/API/CSSMathProduct)
class CSSMathProduct : public CSSMathValue {
    explicit CSSMathProduct(Handle h) noexcept;
public:
    explicit CSSMathProduct(const emlite::Val &val) noexcept;
    static CSSMathProduct take_ownership(Handle h) noexcept;
    [[nodiscard]] CSSMathProduct clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new CSSMathProduct(..)` constructor, creating a new CSSMathProduct instance
    CSSMathProduct(const jsbind::Any& args);
    /// [`CSSMathProduct.values`](https://developer.mozilla.org/en-US/docs/Web/API/CSSMathProduct/values)
    /// [`CSSMathProduct.values`](https://developer.mozilla.org/en-US/docs/Web/API/CSSMathProduct/values)
    [[nodiscard]] CSSNumericArray values() const;
};

} // namespace webbind