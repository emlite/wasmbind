#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "CSSMathValue.hpp"

namespace webbind {

class CSSNumericValue;

/// Interface CSSMathClamp
/// [`CSSMathClamp`](https://developer.mozilla.org/en-US/docs/Web/API/CSSMathClamp)
class CSSMathClamp : public CSSMathValue {
    explicit CSSMathClamp(Handle h) noexcept;
public:
    explicit CSSMathClamp(const emlite::Val &val) noexcept;
    static CSSMathClamp take_ownership(Handle h) noexcept;
    [[nodiscard]] CSSMathClamp clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new CSSMathClamp(..)` constructor, creating a new CSSMathClamp instance
    CSSMathClamp(const jsbind::Any& lower, const jsbind::Any& value, const jsbind::Any& upper);
    /// [`CSSMathClamp.lower`](https://developer.mozilla.org/en-US/docs/Web/API/CSSMathClamp/lower)
    /// [`CSSMathClamp.lower`](https://developer.mozilla.org/en-US/docs/Web/API/CSSMathClamp/lower)
    [[nodiscard]] CSSNumericValue lower() const;
    /// [`CSSMathClamp.value`](https://developer.mozilla.org/en-US/docs/Web/API/CSSMathClamp/value)
    /// [`CSSMathClamp.value`](https://developer.mozilla.org/en-US/docs/Web/API/CSSMathClamp/value)
    [[nodiscard]] CSSNumericValue value() const;
    /// [`CSSMathClamp.upper`](https://developer.mozilla.org/en-US/docs/Web/API/CSSMathClamp/upper)
    /// [`CSSMathClamp.upper`](https://developer.mozilla.org/en-US/docs/Web/API/CSSMathClamp/upper)
    [[nodiscard]] CSSNumericValue upper() const;
};

} // namespace webbind