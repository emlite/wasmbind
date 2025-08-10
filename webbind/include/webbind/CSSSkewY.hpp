#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "CSSTransformComponent.hpp"

namespace webbind {

class CSSNumericValue;

/// Interface CSSSkewY
/// [`CSSSkewY`](https://developer.mozilla.org/en-US/docs/Web/API/CSSSkewY)
class CSSSkewY : public CSSTransformComponent {
    explicit CSSSkewY(Handle h) noexcept;
public:
    explicit CSSSkewY(const emlite::Val &val) noexcept;
    static CSSSkewY take_ownership(Handle h) noexcept;
    [[nodiscard]] CSSSkewY clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new CSSSkewY(..)` constructor, creating a new CSSSkewY instance
    CSSSkewY(const CSSNumericValue& ay);
    /// Getter of the `ay` attribute.
    /// [`CSSSkewY.ay`](https://developer.mozilla.org/en-US/docs/Web/API/CSSSkewY/ay)
    [[nodiscard]] CSSNumericValue ay() const;
    /// Setter of the `ay` attribute.
    /// [`CSSSkewY.ay`](https://developer.mozilla.org/en-US/docs/Web/API/CSSSkewY/ay)
    void ay(const CSSNumericValue& value);
};

} // namespace webbind