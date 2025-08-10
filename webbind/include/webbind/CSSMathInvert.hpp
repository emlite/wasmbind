#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "CSSMathValue.hpp"

namespace webbind {

class CSSNumericValue;

/// Interface CSSMathInvert
/// [`CSSMathInvert`](https://developer.mozilla.org/en-US/docs/Web/API/CSSMathInvert)
class CSSMathInvert : public CSSMathValue {
    explicit CSSMathInvert(Handle h) noexcept;
public:
    explicit CSSMathInvert(const emlite::Val &val) noexcept;
    static CSSMathInvert take_ownership(Handle h) noexcept;
    [[nodiscard]] CSSMathInvert clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new CSSMathInvert(..)` constructor, creating a new CSSMathInvert instance
    CSSMathInvert(const jsbind::Any& arg);
    /// [`CSSMathInvert.value`](https://developer.mozilla.org/en-US/docs/Web/API/CSSMathInvert/value)
    /// [`CSSMathInvert.value`](https://developer.mozilla.org/en-US/docs/Web/API/CSSMathInvert/value)
    [[nodiscard]] CSSNumericValue value() const;
};

} // namespace webbind