#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "DOMPointInit.hpp"
#include "DOMMatrixInit.hpp"

namespace webbind {

class DOMPointReadOnly;
class DOMPoint;

/// Interface DOMPointReadOnly
/// [`DOMPointReadOnly`](https://developer.mozilla.org/en-US/docs/Web/API/DOMPointReadOnly)
class DOMPointReadOnly : public emlite::Val {
    explicit DOMPointReadOnly(Handle h) noexcept;
public:
    explicit DOMPointReadOnly(const emlite::Val &val) noexcept;
    static DOMPointReadOnly take_ownership(Handle h) noexcept;
    [[nodiscard]] DOMPointReadOnly clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new DOMPointReadOnly(..)` constructor, creating a new DOMPointReadOnly instance
    DOMPointReadOnly();
    /// The `new DOMPointReadOnly(..)` constructor, creating a new DOMPointReadOnly instance
    DOMPointReadOnly(double x);
    /// The `new DOMPointReadOnly(..)` constructor, creating a new DOMPointReadOnly instance
    DOMPointReadOnly(double x, double y);
    /// The `new DOMPointReadOnly(..)` constructor, creating a new DOMPointReadOnly instance
    DOMPointReadOnly(double x, double y, double z);
    /// The `new DOMPointReadOnly(..)` constructor, creating a new DOMPointReadOnly instance
    DOMPointReadOnly(double x, double y, double z, double w);
    /// The fromPoint method.
    /// [`DOMPointReadOnly.fromPoint`](https://developer.mozilla.org/en-US/docs/Web/API/DOMPointReadOnly/fromPoint)
    static DOMPointReadOnly fromPoint();
    /// The fromPoint method.
    /// [`DOMPointReadOnly.fromPoint`](https://developer.mozilla.org/en-US/docs/Web/API/DOMPointReadOnly/fromPoint)
    static DOMPointReadOnly fromPoint(const DOMPointInit& other);
    /// [`DOMPointReadOnly.x`](https://developer.mozilla.org/en-US/docs/Web/API/DOMPointReadOnly/x)
    /// [`DOMPointReadOnly.x`](https://developer.mozilla.org/en-US/docs/Web/API/DOMPointReadOnly/x)
    [[nodiscard]] double x() const;
    /// [`DOMPointReadOnly.y`](https://developer.mozilla.org/en-US/docs/Web/API/DOMPointReadOnly/y)
    /// [`DOMPointReadOnly.y`](https://developer.mozilla.org/en-US/docs/Web/API/DOMPointReadOnly/y)
    [[nodiscard]] double y() const;
    /// [`DOMPointReadOnly.z`](https://developer.mozilla.org/en-US/docs/Web/API/DOMPointReadOnly/z)
    /// [`DOMPointReadOnly.z`](https://developer.mozilla.org/en-US/docs/Web/API/DOMPointReadOnly/z)
    [[nodiscard]] double z() const;
    /// [`DOMPointReadOnly.w`](https://developer.mozilla.org/en-US/docs/Web/API/DOMPointReadOnly/w)
    /// [`DOMPointReadOnly.w`](https://developer.mozilla.org/en-US/docs/Web/API/DOMPointReadOnly/w)
    [[nodiscard]] double w() const;
    /// The matrixTransform method.
    /// [`DOMPointReadOnly.matrixTransform`](https://developer.mozilla.org/en-US/docs/Web/API/DOMPointReadOnly/matrixTransform)
    DOMPoint matrixTransform();
    /// The matrixTransform method.
    /// [`DOMPointReadOnly.matrixTransform`](https://developer.mozilla.org/en-US/docs/Web/API/DOMPointReadOnly/matrixTransform)
    DOMPoint matrixTransform(const DOMMatrixInit& matrix);
    /// The toJSON method.
    /// [`DOMPointReadOnly.toJSON`](https://developer.mozilla.org/en-US/docs/Web/API/DOMPointReadOnly/toJSON)
    jsbind::Object toJSON();
};

} // namespace webbind