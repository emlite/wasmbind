#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "CSSTransformComponent.hpp"

namespace webbind {

/// Interface CSSScale
/// [`CSSScale`](https://developer.mozilla.org/en-US/docs/Web/API/CSSScale)
class CSSScale : public CSSTransformComponent {
    explicit CSSScale(Handle h) noexcept;
public:
    explicit CSSScale(const emlite::Val &val) noexcept;
    static CSSScale take_ownership(Handle h) noexcept;
    [[nodiscard]] CSSScale clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new CSSScale(..)` constructor, creating a new CSSScale instance
    CSSScale(const jsbind::Any& x, const jsbind::Any& y);
    /// The `new CSSScale(..)` constructor, creating a new CSSScale instance
    CSSScale(const jsbind::Any& x, const jsbind::Any& y, const jsbind::Any& z);
    /// [`CSSScale.x`](https://developer.mozilla.org/en-US/docs/Web/API/CSSScale/x)
    /// [`CSSScale.x`](https://developer.mozilla.org/en-US/docs/Web/API/CSSScale/x)
    [[nodiscard]] jsbind::Any x() const;
    /// Setter of the `x` attribute.
    /// [`CSSScale.x`](https://developer.mozilla.org/en-US/docs/Web/API/CSSScale/x)
    void x(const jsbind::Any& value);
    /// [`CSSScale.y`](https://developer.mozilla.org/en-US/docs/Web/API/CSSScale/y)
    /// [`CSSScale.y`](https://developer.mozilla.org/en-US/docs/Web/API/CSSScale/y)
    [[nodiscard]] jsbind::Any y() const;
    /// Setter of the `y` attribute.
    /// [`CSSScale.y`](https://developer.mozilla.org/en-US/docs/Web/API/CSSScale/y)
    void y(const jsbind::Any& value);
    /// [`CSSScale.z`](https://developer.mozilla.org/en-US/docs/Web/API/CSSScale/z)
    /// [`CSSScale.z`](https://developer.mozilla.org/en-US/docs/Web/API/CSSScale/z)
    [[nodiscard]] jsbind::Any z() const;
    /// Setter of the `z` attribute.
    /// [`CSSScale.z`](https://developer.mozilla.org/en-US/docs/Web/API/CSSScale/z)
    void z(const jsbind::Any& value);
};

} // namespace webbind