#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "CSSTransformComponent.hpp"

namespace webbind {

class CSSNumericValue;

/// Interface CSSSkewX
/// [`CSSSkewX`](https://developer.mozilla.org/en-US/docs/Web/API/CSSSkewX)
class CSSSkewX : public CSSTransformComponent {
    explicit CSSSkewX(Handle h) noexcept;
public:
    explicit CSSSkewX(const emlite::Val &val) noexcept;
    static CSSSkewX take_ownership(Handle h) noexcept;
    [[nodiscard]] CSSSkewX clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new CSSSkewX(..)` constructor, creating a new CSSSkewX instance
    CSSSkewX(const CSSNumericValue& ax);
    /// Getter of the `ax` attribute.
    /// [`CSSSkewX.ax`](https://developer.mozilla.org/en-US/docs/Web/API/CSSSkewX/ax)
    [[nodiscard]] CSSNumericValue ax() const;
    /// Setter of the `ax` attribute.
    /// [`CSSSkewX.ax`](https://developer.mozilla.org/en-US/docs/Web/API/CSSSkewX/ax)
    void ax(const CSSNumericValue& value);
};

} // namespace webbind