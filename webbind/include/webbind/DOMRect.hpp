#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "DOMRectReadOnly.hpp"
#include "enums.hpp"

class DOMRect;


/// The DOMRect class.
/// [`DOMRect`](https://developer.mozilla.org/en-US/docs/Web/API/DOMRect)
class DOMRect : public DOMRectReadOnly {
    explicit DOMRect(Handle h) noexcept;

public:
    explicit DOMRect(const emlite::Val &val) noexcept;
    static DOMRect take_ownership(Handle h) noexcept;

    [[nodiscard]] DOMRect clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new DOMRect(..)` constructor, creating a new DOMRect instance
    DOMRect();
    /// The `new DOMRect(..)` constructor, creating a new DOMRect instance
    DOMRect(double x);
    /// The `new DOMRect(..)` constructor, creating a new DOMRect instance
    DOMRect(double x, double y);
    /// The `new DOMRect(..)` constructor, creating a new DOMRect instance
    DOMRect(double x, double y, double width);
    /// The `new DOMRect(..)` constructor, creating a new DOMRect instance
    DOMRect(double x, double y, double width, double height);
    /// The fromRect method.
    /// [`DOMRect.fromRect`](https://developer.mozilla.org/en-US/docs/Web/API/DOMRect/fromRect)
    static DOMRect fromRect();
    /// The fromRect method.
    /// [`DOMRect.fromRect`](https://developer.mozilla.org/en-US/docs/Web/API/DOMRect/fromRect)
    static DOMRect fromRect(const DOMRectInit& other);
    /// Getter of the `x` attribute.
    /// [`DOMRect.x`](https://developer.mozilla.org/en-US/docs/Web/API/DOMRect/x)
    [[nodiscard]] double x() const;
    /// Setter of the `x` attribute.
    /// [`DOMRect.x`](https://developer.mozilla.org/en-US/docs/Web/API/DOMRect/x)
    void x(double value);
    /// Getter of the `y` attribute.
    /// [`DOMRect.y`](https://developer.mozilla.org/en-US/docs/Web/API/DOMRect/y)
    [[nodiscard]] double y() const;
    /// Setter of the `y` attribute.
    /// [`DOMRect.y`](https://developer.mozilla.org/en-US/docs/Web/API/DOMRect/y)
    void y(double value);
    /// Getter of the `width` attribute.
    /// [`DOMRect.width`](https://developer.mozilla.org/en-US/docs/Web/API/DOMRect/width)
    [[nodiscard]] double width() const;
    /// Setter of the `width` attribute.
    /// [`DOMRect.width`](https://developer.mozilla.org/en-US/docs/Web/API/DOMRect/width)
    void width(double value);
    /// Getter of the `height` attribute.
    /// [`DOMRect.height`](https://developer.mozilla.org/en-US/docs/Web/API/DOMRect/height)
    [[nodiscard]] double height() const;
    /// Setter of the `height` attribute.
    /// [`DOMRect.height`](https://developer.mozilla.org/en-US/docs/Web/API/DOMRect/height)
    void height(double value);
};

