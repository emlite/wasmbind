#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "CSSMathValue.hpp"

namespace webbind {

class CSSNumericValue;

/// Interface CSSMathNegate
/// [`CSSMathNegate`](https://developer.mozilla.org/en-US/docs/Web/API/CSSMathNegate)
class CSSMathNegate : public CSSMathValue {
    explicit CSSMathNegate(Handle h) noexcept;
public:
    explicit CSSMathNegate(const emlite::Val &val) noexcept;
    static CSSMathNegate take_ownership(Handle h) noexcept;
    [[nodiscard]] CSSMathNegate clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new CSSMathNegate(..)` constructor, creating a new CSSMathNegate instance
    CSSMathNegate(const jsbind::Any& arg);
    /// [`CSSMathNegate.value`](https://developer.mozilla.org/en-US/docs/Web/API/CSSMathNegate/value)
    /// [`CSSMathNegate.value`](https://developer.mozilla.org/en-US/docs/Web/API/CSSMathNegate/value)
    [[nodiscard]] CSSNumericValue value() const;
};

} // namespace webbind