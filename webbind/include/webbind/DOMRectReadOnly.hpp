#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class DOMRectReadOnly;
class DOMRectInit;


class DOMRectInit : public emlite::Val {
  explicit DOMRectInit(Handle h) noexcept;
public:
    static DOMRectInit take_ownership(Handle h) noexcept;
    explicit DOMRectInit(const emlite::Val &val) noexcept;
    DOMRectInit() noexcept;
    [[nodiscard]] DOMRectInit clone() const noexcept;
    [[nodiscard]] double x() const;
    void x(double value);
    [[nodiscard]] double y() const;
    void y(double value);
    [[nodiscard]] double width() const;
    void width(double value);
    [[nodiscard]] double height() const;
    void height(double value);
};

/// The DOMRectReadOnly class.
/// [`DOMRectReadOnly`](https://developer.mozilla.org/en-US/docs/Web/API/DOMRectReadOnly)
class DOMRectReadOnly : public emlite::Val {
    explicit DOMRectReadOnly(Handle h) noexcept;

public:
    explicit DOMRectReadOnly(const emlite::Val &val) noexcept;
    static DOMRectReadOnly take_ownership(Handle h) noexcept;

    [[nodiscard]] DOMRectReadOnly clone() const noexcept;
    /// The `new DOMRectReadOnly(..)` constructor, creating a new DOMRectReadOnly instance
    DOMRectReadOnly();
    /// The `new DOMRectReadOnly(..)` constructor, creating a new DOMRectReadOnly instance
    DOMRectReadOnly(double x);
    /// The `new DOMRectReadOnly(..)` constructor, creating a new DOMRectReadOnly instance
    DOMRectReadOnly(double x, double y);
    /// The `new DOMRectReadOnly(..)` constructor, creating a new DOMRectReadOnly instance
    DOMRectReadOnly(double x, double y, double width);
    /// The `new DOMRectReadOnly(..)` constructor, creating a new DOMRectReadOnly instance
    DOMRectReadOnly(double x, double y, double width, double height);
    /// The fromRect method.
    /// [`DOMRectReadOnly.fromRect`](https://developer.mozilla.org/en-US/docs/Web/API/DOMRectReadOnly/fromRect)
    static DOMRectReadOnly fromRect();
    /// The fromRect method.
    /// [`DOMRectReadOnly.fromRect`](https://developer.mozilla.org/en-US/docs/Web/API/DOMRectReadOnly/fromRect)
    static DOMRectReadOnly fromRect(const DOMRectInit& other);
    /// Getter of the `x` attribute.
    /// [`DOMRectReadOnly.x`](https://developer.mozilla.org/en-US/docs/Web/API/DOMRectReadOnly/x)
    [[nodiscard]] double x() const;
    /// Getter of the `y` attribute.
    /// [`DOMRectReadOnly.y`](https://developer.mozilla.org/en-US/docs/Web/API/DOMRectReadOnly/y)
    [[nodiscard]] double y() const;
    /// Getter of the `width` attribute.
    /// [`DOMRectReadOnly.width`](https://developer.mozilla.org/en-US/docs/Web/API/DOMRectReadOnly/width)
    [[nodiscard]] double width() const;
    /// Getter of the `height` attribute.
    /// [`DOMRectReadOnly.height`](https://developer.mozilla.org/en-US/docs/Web/API/DOMRectReadOnly/height)
    [[nodiscard]] double height() const;
    /// Getter of the `top` attribute.
    /// [`DOMRectReadOnly.top`](https://developer.mozilla.org/en-US/docs/Web/API/DOMRectReadOnly/top)
    [[nodiscard]] double top() const;
    /// Getter of the `right` attribute.
    /// [`DOMRectReadOnly.right`](https://developer.mozilla.org/en-US/docs/Web/API/DOMRectReadOnly/right)
    [[nodiscard]] double right() const;
    /// Getter of the `bottom` attribute.
    /// [`DOMRectReadOnly.bottom`](https://developer.mozilla.org/en-US/docs/Web/API/DOMRectReadOnly/bottom)
    [[nodiscard]] double bottom() const;
    /// Getter of the `left` attribute.
    /// [`DOMRectReadOnly.left`](https://developer.mozilla.org/en-US/docs/Web/API/DOMRectReadOnly/left)
    [[nodiscard]] double left() const;
    /// The toJSON method.
    /// [`DOMRectReadOnly.toJSON`](https://developer.mozilla.org/en-US/docs/Web/API/DOMRectReadOnly/toJSON)
    jsbind::Object toJSON();
};

