#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "CSSMathValue.hpp"
#include "enums.hpp"

class CSSNumericValue;


/// The CSSMathClamp class.
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
    /// Getter of the `lower` attribute.
    /// [`CSSMathClamp.lower`](https://developer.mozilla.org/en-US/docs/Web/API/CSSMathClamp/lower)
    [[nodiscard]] CSSNumericValue lower() const;
    /// Getter of the `value` attribute.
    /// [`CSSMathClamp.value`](https://developer.mozilla.org/en-US/docs/Web/API/CSSMathClamp/value)
    [[nodiscard]] CSSNumericValue value() const;
    /// Getter of the `upper` attribute.
    /// [`CSSMathClamp.upper`](https://developer.mozilla.org/en-US/docs/Web/API/CSSMathClamp/upper)
    [[nodiscard]] CSSNumericValue upper() const;
};

