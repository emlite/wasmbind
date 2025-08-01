#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "CSSTransformComponent.hpp"
#include "enums.hpp"

class CSSNumericValue;


/// The CSSSkewX class.
/// [`CSSSkewX`](https://developer.mozilla.org/en-US/docs/Web/API/CSSSkewX)
class CSSSkewX : public CSSTransformComponent {
    explicit CSSSkewX(Handle h) noexcept;

public:
    explicit CSSSkewX(const emlite::Val &val) noexcept;
    static CSSSkewX take_ownership(Handle h) noexcept;

    [[nodiscard]] CSSSkewX clone() const noexcept;
    /// The `new CSSSkewX(..)` constructor, creating a new CSSSkewX instance
    CSSSkewX(const CSSNumericValue& ax);
    /// Getter of the `ax` attribute.
    /// [`CSSSkewX.ax`](https://developer.mozilla.org/en-US/docs/Web/API/CSSSkewX/ax)
    [[nodiscard]] CSSNumericValue ax() const;
    /// Setter of the `ax` attribute.
    /// [`CSSSkewX.ax`](https://developer.mozilla.org/en-US/docs/Web/API/CSSSkewX/ax)
    void ax(const CSSNumericValue& value);
};

