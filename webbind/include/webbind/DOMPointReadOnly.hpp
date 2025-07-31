#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "SVGGeometryElement.hpp"
#include "enums.hpp"

class DOMPointReadOnly;
class DOMPoint;
class DOMMatrixInit;


class DOMMatrixInit : public emlite::Val {
  explicit DOMMatrixInit(Handle h) noexcept;
public:
    static DOMMatrixInit take_ownership(Handle h) noexcept;
    explicit DOMMatrixInit(const emlite::Val &val) noexcept;
    DOMMatrixInit() noexcept;
    [[nodiscard]] DOMMatrixInit clone() const noexcept;
    [[nodiscard]] double m13() const;
    void m13(double value);
    [[nodiscard]] double m14() const;
    void m14(double value);
    [[nodiscard]] double m23() const;
    void m23(double value);
    [[nodiscard]] double m24() const;
    void m24(double value);
    [[nodiscard]] double m31() const;
    void m31(double value);
    [[nodiscard]] double m32() const;
    void m32(double value);
    [[nodiscard]] double m33() const;
    void m33(double value);
    [[nodiscard]] double m34() const;
    void m34(double value);
    [[nodiscard]] double m43() const;
    void m43(double value);
    [[nodiscard]] double m44() const;
    void m44(double value);
    [[nodiscard]] bool is2D() const;
    void is2D(bool value);
};

/// The DOMPointReadOnly class.
/// [`DOMPointReadOnly`](https://developer.mozilla.org/en-US/docs/Web/API/DOMPointReadOnly)
class DOMPointReadOnly : public emlite::Val {
    explicit DOMPointReadOnly(Handle h) noexcept;

public:
    explicit DOMPointReadOnly(const emlite::Val &val) noexcept;
    static DOMPointReadOnly take_ownership(Handle h) noexcept;

    [[nodiscard]] DOMPointReadOnly clone() const noexcept;
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
    /// Getter of the `x` attribute.
    /// [`DOMPointReadOnly.x`](https://developer.mozilla.org/en-US/docs/Web/API/DOMPointReadOnly/x)
    [[nodiscard]] double x() const;
    /// Getter of the `y` attribute.
    /// [`DOMPointReadOnly.y`](https://developer.mozilla.org/en-US/docs/Web/API/DOMPointReadOnly/y)
    [[nodiscard]] double y() const;
    /// Getter of the `z` attribute.
    /// [`DOMPointReadOnly.z`](https://developer.mozilla.org/en-US/docs/Web/API/DOMPointReadOnly/z)
    [[nodiscard]] double z() const;
    /// Getter of the `w` attribute.
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

