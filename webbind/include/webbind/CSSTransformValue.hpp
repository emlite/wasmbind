#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "CSSStyleValue.hpp"
#include "enums.hpp"

class CSSTransformComponent;
class DOMMatrix;


/// The CSSTransformValue class.
/// [`CSSTransformValue`](https://developer.mozilla.org/en-US/docs/Web/API/CSSTransformValue)
class CSSTransformValue : public CSSStyleValue {
    explicit CSSTransformValue(Handle h) noexcept;

public:
    explicit CSSTransformValue(const emlite::Val &val) noexcept;
    static CSSTransformValue take_ownership(Handle h) noexcept;

    [[nodiscard]] CSSTransformValue clone() const noexcept;
    /// The `new CSSTransformValue(..)` constructor, creating a new CSSTransformValue instance
    CSSTransformValue(const jsbind::TypedArray<CSSTransformComponent>& transforms);
    /// Getter of the `length` attribute.
    /// [`CSSTransformValue.length`](https://developer.mozilla.org/en-US/docs/Web/API/CSSTransformValue/length)
    [[nodiscard]] unsigned long length() const;
    /// Getter of the `is2D` attribute.
    /// [`CSSTransformValue.is2D`](https://developer.mozilla.org/en-US/docs/Web/API/CSSTransformValue/is2D)
    [[nodiscard]] bool is2D() const;
    /// The toMatrix method.
    /// [`CSSTransformValue.toMatrix`](https://developer.mozilla.org/en-US/docs/Web/API/CSSTransformValue/toMatrix)
    DOMMatrix toMatrix();
};

