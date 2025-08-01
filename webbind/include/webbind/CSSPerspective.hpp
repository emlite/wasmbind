#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "CSSTransformComponent.hpp"
#include "enums.hpp"


/// The CSSPerspective class.
/// [`CSSPerspective`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPerspective)
class CSSPerspective : public CSSTransformComponent {
    explicit CSSPerspective(Handle h) noexcept;

public:
    explicit CSSPerspective(const emlite::Val &val) noexcept;
    static CSSPerspective take_ownership(Handle h) noexcept;

    [[nodiscard]] CSSPerspective clone() const noexcept;
    /// The `new CSSPerspective(..)` constructor, creating a new CSSPerspective instance
    CSSPerspective(const jsbind::Any& length);
    /// Getter of the `length` attribute.
    /// [`CSSPerspective.length`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPerspective/length)
    [[nodiscard]] jsbind::Any length() const;
    /// Setter of the `length` attribute.
    /// [`CSSPerspective.length`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPerspective/length)
    void length(const jsbind::Any& value);
};

