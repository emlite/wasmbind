#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "CSSMathValue.hpp"

namespace webbind {

class CSSNumericArray;

/// Interface CSSMathMax
/// [`CSSMathMax`](https://developer.mozilla.org/en-US/docs/Web/API/CSSMathMax)
class CSSMathMax : public CSSMathValue {
    explicit CSSMathMax(Handle h) noexcept;
public:
    explicit CSSMathMax(const emlite::Val &val) noexcept;
    static CSSMathMax take_ownership(Handle h) noexcept;
    [[nodiscard]] CSSMathMax clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new CSSMathMax(..)` constructor, creating a new CSSMathMax instance
    CSSMathMax(const jsbind::Any& args);
    /// [`CSSMathMax.values`](https://developer.mozilla.org/en-US/docs/Web/API/CSSMathMax/values)
    /// [`CSSMathMax.values`](https://developer.mozilla.org/en-US/docs/Web/API/CSSMathMax/values)
    [[nodiscard]] CSSNumericArray values() const;
};

} // namespace webbind