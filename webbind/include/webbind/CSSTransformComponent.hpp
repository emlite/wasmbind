#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class DOMMatrix;

/// Interface CSSTransformComponent
/// [`CSSTransformComponent`](https://developer.mozilla.org/en-US/docs/Web/API/CSSTransformComponent)
class CSSTransformComponent : public emlite::Val {
    explicit CSSTransformComponent(Handle h) noexcept;
public:
    explicit CSSTransformComponent(const emlite::Val &val) noexcept;
    static CSSTransformComponent take_ownership(Handle h) noexcept;
    [[nodiscard]] CSSTransformComponent clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// [`CSSTransformComponent.is2D`](https://developer.mozilla.org/en-US/docs/Web/API/CSSTransformComponent/is2D)
    /// [`CSSTransformComponent.is2D`](https://developer.mozilla.org/en-US/docs/Web/API/CSSTransformComponent/is2D)
    [[nodiscard]] bool is2D() const;
    /// Setter of the `is2D` attribute.
    /// [`CSSTransformComponent.is2D`](https://developer.mozilla.org/en-US/docs/Web/API/CSSTransformComponent/is2D)
    void is2D(bool value);
    /// The toMatrix method.
    /// [`CSSTransformComponent.toMatrix`](https://developer.mozilla.org/en-US/docs/Web/API/CSSTransformComponent/toMatrix)
    DOMMatrix toMatrix();
};

} // namespace webbind