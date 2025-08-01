#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "CSSTransformComponent.hpp"
#include "enums.hpp"

class CSSNumericValue;


/// The CSSSkew class.
/// [`CSSSkew`](https://developer.mozilla.org/en-US/docs/Web/API/CSSSkew)
class CSSSkew : public CSSTransformComponent {
    explicit CSSSkew(Handle h) noexcept;

public:
    explicit CSSSkew(const emlite::Val &val) noexcept;
    static CSSSkew take_ownership(Handle h) noexcept;

    [[nodiscard]] CSSSkew clone() const noexcept;
    /// The `new CSSSkew(..)` constructor, creating a new CSSSkew instance
    CSSSkew(const CSSNumericValue& ax, const CSSNumericValue& ay);
    /// Getter of the `ax` attribute.
    /// [`CSSSkew.ax`](https://developer.mozilla.org/en-US/docs/Web/API/CSSSkew/ax)
    [[nodiscard]] CSSNumericValue ax() const;
    /// Setter of the `ax` attribute.
    /// [`CSSSkew.ax`](https://developer.mozilla.org/en-US/docs/Web/API/CSSSkew/ax)
    void ax(const CSSNumericValue& value);
    /// Getter of the `ay` attribute.
    /// [`CSSSkew.ay`](https://developer.mozilla.org/en-US/docs/Web/API/CSSSkew/ay)
    [[nodiscard]] CSSNumericValue ay() const;
    /// Setter of the `ay` attribute.
    /// [`CSSSkew.ay`](https://developer.mozilla.org/en-US/docs/Web/API/CSSSkew/ay)
    void ay(const CSSNumericValue& value);
};

