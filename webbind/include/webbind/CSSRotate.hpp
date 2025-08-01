#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "CSSTransformComponent.hpp"
#include "enums.hpp"

class CSSNumericValue;


/// The CSSRotate class.
/// [`CSSRotate`](https://developer.mozilla.org/en-US/docs/Web/API/CSSRotate)
class CSSRotate : public CSSTransformComponent {
    explicit CSSRotate(Handle h) noexcept;

public:
    explicit CSSRotate(const emlite::Val &val) noexcept;
    static CSSRotate take_ownership(Handle h) noexcept;

    [[nodiscard]] CSSRotate clone() const noexcept;
    /// The `new CSSRotate(..)` constructor, creating a new CSSRotate instance
    CSSRotate(const jsbind::Any& x, const jsbind::Any& y, const jsbind::Any& z, const CSSNumericValue& angle);
    /// Getter of the `x` attribute.
    /// [`CSSRotate.x`](https://developer.mozilla.org/en-US/docs/Web/API/CSSRotate/x)
    [[nodiscard]] jsbind::Any x() const;
    /// Setter of the `x` attribute.
    /// [`CSSRotate.x`](https://developer.mozilla.org/en-US/docs/Web/API/CSSRotate/x)
    void x(const jsbind::Any& value);
    /// Getter of the `y` attribute.
    /// [`CSSRotate.y`](https://developer.mozilla.org/en-US/docs/Web/API/CSSRotate/y)
    [[nodiscard]] jsbind::Any y() const;
    /// Setter of the `y` attribute.
    /// [`CSSRotate.y`](https://developer.mozilla.org/en-US/docs/Web/API/CSSRotate/y)
    void y(const jsbind::Any& value);
    /// Getter of the `z` attribute.
    /// [`CSSRotate.z`](https://developer.mozilla.org/en-US/docs/Web/API/CSSRotate/z)
    [[nodiscard]] jsbind::Any z() const;
    /// Setter of the `z` attribute.
    /// [`CSSRotate.z`](https://developer.mozilla.org/en-US/docs/Web/API/CSSRotate/z)
    void z(const jsbind::Any& value);
    /// Getter of the `angle` attribute.
    /// [`CSSRotate.angle`](https://developer.mozilla.org/en-US/docs/Web/API/CSSRotate/angle)
    [[nodiscard]] CSSNumericValue angle() const;
    /// Setter of the `angle` attribute.
    /// [`CSSRotate.angle`](https://developer.mozilla.org/en-US/docs/Web/API/CSSRotate/angle)
    void angle(const CSSNumericValue& value);
};

