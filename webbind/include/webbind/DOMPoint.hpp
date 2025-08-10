#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "DOMPointReadOnly.hpp"

namespace webbind {

class DOMPoint;
class DOMPointInit;

/// Interface DOMPoint
/// [`DOMPoint`](https://developer.mozilla.org/en-US/docs/Web/API/DOMPoint)
class DOMPoint : public DOMPointReadOnly {
    explicit DOMPoint(Handle h) noexcept;
public:
    explicit DOMPoint(const emlite::Val &val) noexcept;
    static DOMPoint take_ownership(Handle h) noexcept;
    [[nodiscard]] DOMPoint clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new DOMPoint(..)` constructor, creating a new DOMPoint instance
    DOMPoint();
    /// The `new DOMPoint(..)` constructor, creating a new DOMPoint instance
    DOMPoint(double x);
    /// The `new DOMPoint(..)` constructor, creating a new DOMPoint instance
    DOMPoint(double x, double y);
    /// The `new DOMPoint(..)` constructor, creating a new DOMPoint instance
    DOMPoint(double x, double y, double z);
    /// The `new DOMPoint(..)` constructor, creating a new DOMPoint instance
    DOMPoint(double x, double y, double z, double w);
    /// The fromPoint method.
    /// [`DOMPoint.fromPoint`](https://developer.mozilla.org/en-US/docs/Web/API/DOMPoint/fromPoint)
    static DOMPoint fromPoint();
    /// The fromPoint method.
    /// [`DOMPoint.fromPoint`](https://developer.mozilla.org/en-US/docs/Web/API/DOMPoint/fromPoint)
    static DOMPoint fromPoint(const DOMPointInit& other);
    /// [`DOMPoint.x`](https://developer.mozilla.org/en-US/docs/Web/API/DOMPoint/x)
    /// [`DOMPoint.x`](https://developer.mozilla.org/en-US/docs/Web/API/DOMPoint/x)
    [[nodiscard]] double x() const;
    /// Setter of the `x` attribute.
    /// [`DOMPoint.x`](https://developer.mozilla.org/en-US/docs/Web/API/DOMPoint/x)
    void x(double value);
    /// [`DOMPoint.y`](https://developer.mozilla.org/en-US/docs/Web/API/DOMPoint/y)
    /// [`DOMPoint.y`](https://developer.mozilla.org/en-US/docs/Web/API/DOMPoint/y)
    [[nodiscard]] double y() const;
    /// Setter of the `y` attribute.
    /// [`DOMPoint.y`](https://developer.mozilla.org/en-US/docs/Web/API/DOMPoint/y)
    void y(double value);
    /// [`DOMPoint.z`](https://developer.mozilla.org/en-US/docs/Web/API/DOMPoint/z)
    /// [`DOMPoint.z`](https://developer.mozilla.org/en-US/docs/Web/API/DOMPoint/z)
    [[nodiscard]] double z() const;
    /// Setter of the `z` attribute.
    /// [`DOMPoint.z`](https://developer.mozilla.org/en-US/docs/Web/API/DOMPoint/z)
    void z(double value);
    /// [`DOMPoint.w`](https://developer.mozilla.org/en-US/docs/Web/API/DOMPoint/w)
    /// [`DOMPoint.w`](https://developer.mozilla.org/en-US/docs/Web/API/DOMPoint/w)
    [[nodiscard]] double w() const;
    /// Setter of the `w` attribute.
    /// [`DOMPoint.w`](https://developer.mozilla.org/en-US/docs/Web/API/DOMPoint/w)
    void w(double value);
};

} // namespace webbind