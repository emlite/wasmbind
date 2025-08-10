#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class DOMRectReadOnly;
class DOMRectInit;

/// Interface DOMRectReadOnly
/// [`DOMRectReadOnly`](https://developer.mozilla.org/en-US/docs/Web/API/DOMRectReadOnly)
class DOMRectReadOnly : public emlite::Val {
    explicit DOMRectReadOnly(Handle h) noexcept;
public:
    explicit DOMRectReadOnly(const emlite::Val &val) noexcept;
    static DOMRectReadOnly take_ownership(Handle h) noexcept;
    [[nodiscard]] DOMRectReadOnly clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
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
    /// [`DOMRectReadOnly.x`](https://developer.mozilla.org/en-US/docs/Web/API/DOMRectReadOnly/x)
    /// [`DOMRectReadOnly.x`](https://developer.mozilla.org/en-US/docs/Web/API/DOMRectReadOnly/x)
    [[nodiscard]] double x() const;
    /// [`DOMRectReadOnly.y`](https://developer.mozilla.org/en-US/docs/Web/API/DOMRectReadOnly/y)
    /// [`DOMRectReadOnly.y`](https://developer.mozilla.org/en-US/docs/Web/API/DOMRectReadOnly/y)
    [[nodiscard]] double y() const;
    /// [`DOMRectReadOnly.width`](https://developer.mozilla.org/en-US/docs/Web/API/DOMRectReadOnly/width)
    /// [`DOMRectReadOnly.width`](https://developer.mozilla.org/en-US/docs/Web/API/DOMRectReadOnly/width)
    [[nodiscard]] double width() const;
    /// [`DOMRectReadOnly.height`](https://developer.mozilla.org/en-US/docs/Web/API/DOMRectReadOnly/height)
    /// [`DOMRectReadOnly.height`](https://developer.mozilla.org/en-US/docs/Web/API/DOMRectReadOnly/height)
    [[nodiscard]] double height() const;
    /// [`DOMRectReadOnly.top`](https://developer.mozilla.org/en-US/docs/Web/API/DOMRectReadOnly/top)
    /// [`DOMRectReadOnly.top`](https://developer.mozilla.org/en-US/docs/Web/API/DOMRectReadOnly/top)
    [[nodiscard]] double top() const;
    /// [`DOMRectReadOnly.right`](https://developer.mozilla.org/en-US/docs/Web/API/DOMRectReadOnly/right)
    /// [`DOMRectReadOnly.right`](https://developer.mozilla.org/en-US/docs/Web/API/DOMRectReadOnly/right)
    [[nodiscard]] double right() const;
    /// [`DOMRectReadOnly.bottom`](https://developer.mozilla.org/en-US/docs/Web/API/DOMRectReadOnly/bottom)
    /// [`DOMRectReadOnly.bottom`](https://developer.mozilla.org/en-US/docs/Web/API/DOMRectReadOnly/bottom)
    [[nodiscard]] double bottom() const;
    /// [`DOMRectReadOnly.left`](https://developer.mozilla.org/en-US/docs/Web/API/DOMRectReadOnly/left)
    /// [`DOMRectReadOnly.left`](https://developer.mozilla.org/en-US/docs/Web/API/DOMRectReadOnly/left)
    [[nodiscard]] double left() const;
    /// The toJSON method.
    /// [`DOMRectReadOnly.toJSON`](https://developer.mozilla.org/en-US/docs/Web/API/DOMRectReadOnly/toJSON)
    jsbind::Object toJSON();
};

} // namespace webbind