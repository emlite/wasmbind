#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "CSSTransformComponent.hpp"
#include "enums.hpp"


/// The CSSScale class.
/// [`CSSScale`](https://developer.mozilla.org/en-US/docs/Web/API/CSSScale)
class CSSScale : public CSSTransformComponent {
    explicit CSSScale(Handle h) noexcept;

public:
    explicit CSSScale(const emlite::Val &val) noexcept;
    static CSSScale take_ownership(Handle h) noexcept;

    [[nodiscard]] CSSScale clone() const noexcept;
    /// The `new CSSScale(..)` constructor, creating a new CSSScale instance
    CSSScale(const jsbind::Any& x, const jsbind::Any& y);
    /// The `new CSSScale(..)` constructor, creating a new CSSScale instance
    CSSScale(const jsbind::Any& x, const jsbind::Any& y, const jsbind::Any& z);
    /// Getter of the `x` attribute.
    /// [`CSSScale.x`](https://developer.mozilla.org/en-US/docs/Web/API/CSSScale/x)
    [[nodiscard]] jsbind::Any x() const;
    /// Setter of the `x` attribute.
    /// [`CSSScale.x`](https://developer.mozilla.org/en-US/docs/Web/API/CSSScale/x)
    void x(const jsbind::Any& value);
    /// Getter of the `y` attribute.
    /// [`CSSScale.y`](https://developer.mozilla.org/en-US/docs/Web/API/CSSScale/y)
    [[nodiscard]] jsbind::Any y() const;
    /// Setter of the `y` attribute.
    /// [`CSSScale.y`](https://developer.mozilla.org/en-US/docs/Web/API/CSSScale/y)
    void y(const jsbind::Any& value);
    /// Getter of the `z` attribute.
    /// [`CSSScale.z`](https://developer.mozilla.org/en-US/docs/Web/API/CSSScale/z)
    [[nodiscard]] jsbind::Any z() const;
    /// Setter of the `z` attribute.
    /// [`CSSScale.z`](https://developer.mozilla.org/en-US/docs/Web/API/CSSScale/z)
    void z(const jsbind::Any& value);
};

