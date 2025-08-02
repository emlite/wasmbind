#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "DOMPointReadOnly.hpp"
#include "SVGGeometryElement.hpp"
#include "enums.hpp"

class DOMMatrixReadOnly;
class DOMMatrix;
class DOMPoint;


/// The DOMMatrixReadOnly class.
/// [`DOMMatrixReadOnly`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrixReadOnly)
class DOMMatrixReadOnly : public emlite::Val {
    explicit DOMMatrixReadOnly(Handle h) noexcept;

public:
    explicit DOMMatrixReadOnly(const emlite::Val &val) noexcept;
    static DOMMatrixReadOnly take_ownership(Handle h) noexcept;

    [[nodiscard]] DOMMatrixReadOnly clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new DOMMatrixReadOnly(..)` constructor, creating a new DOMMatrixReadOnly instance
    DOMMatrixReadOnly();
    /// The `new DOMMatrixReadOnly(..)` constructor, creating a new DOMMatrixReadOnly instance
    DOMMatrixReadOnly(const jsbind::Any& init);
    /// The fromMatrix method.
    /// [`DOMMatrixReadOnly.fromMatrix`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrixReadOnly/fromMatrix)
    static DOMMatrixReadOnly fromMatrix();
    /// The fromMatrix method.
    /// [`DOMMatrixReadOnly.fromMatrix`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrixReadOnly/fromMatrix)
    static DOMMatrixReadOnly fromMatrix(const DOMMatrixInit& other);
    /// The fromFloat32Array method.
    /// [`DOMMatrixReadOnly.fromFloat32Array`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrixReadOnly/fromFloat32Array)
    static DOMMatrixReadOnly fromFloat32Array(const jsbind::Float32Array& array32);
    /// The fromFloat64Array method.
    /// [`DOMMatrixReadOnly.fromFloat64Array`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrixReadOnly/fromFloat64Array)
    static DOMMatrixReadOnly fromFloat64Array(const jsbind::Float64Array& array64);
    /// Getter of the `a` attribute.
    /// [`DOMMatrixReadOnly.a`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrixReadOnly/a)
    [[nodiscard]] double a() const;
    /// Getter of the `b` attribute.
    /// [`DOMMatrixReadOnly.b`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrixReadOnly/b)
    [[nodiscard]] double b() const;
    /// Getter of the `c` attribute.
    /// [`DOMMatrixReadOnly.c`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrixReadOnly/c)
    [[nodiscard]] double c() const;
    /// Getter of the `d` attribute.
    /// [`DOMMatrixReadOnly.d`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrixReadOnly/d)
    [[nodiscard]] double d() const;
    /// Getter of the `e` attribute.
    /// [`DOMMatrixReadOnly.e`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrixReadOnly/e)
    [[nodiscard]] double e() const;
    /// Getter of the `f` attribute.
    /// [`DOMMatrixReadOnly.f`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrixReadOnly/f)
    [[nodiscard]] double f() const;
    /// Getter of the `m11` attribute.
    /// [`DOMMatrixReadOnly.m11`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrixReadOnly/m11)
    [[nodiscard]] double m11() const;
    /// Getter of the `m12` attribute.
    /// [`DOMMatrixReadOnly.m12`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrixReadOnly/m12)
    [[nodiscard]] double m12() const;
    /// Getter of the `m13` attribute.
    /// [`DOMMatrixReadOnly.m13`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrixReadOnly/m13)
    [[nodiscard]] double m13() const;
    /// Getter of the `m14` attribute.
    /// [`DOMMatrixReadOnly.m14`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrixReadOnly/m14)
    [[nodiscard]] double m14() const;
    /// Getter of the `m21` attribute.
    /// [`DOMMatrixReadOnly.m21`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrixReadOnly/m21)
    [[nodiscard]] double m21() const;
    /// Getter of the `m22` attribute.
    /// [`DOMMatrixReadOnly.m22`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrixReadOnly/m22)
    [[nodiscard]] double m22() const;
    /// Getter of the `m23` attribute.
    /// [`DOMMatrixReadOnly.m23`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrixReadOnly/m23)
    [[nodiscard]] double m23() const;
    /// Getter of the `m24` attribute.
    /// [`DOMMatrixReadOnly.m24`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrixReadOnly/m24)
    [[nodiscard]] double m24() const;
    /// Getter of the `m31` attribute.
    /// [`DOMMatrixReadOnly.m31`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrixReadOnly/m31)
    [[nodiscard]] double m31() const;
    /// Getter of the `m32` attribute.
    /// [`DOMMatrixReadOnly.m32`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrixReadOnly/m32)
    [[nodiscard]] double m32() const;
    /// Getter of the `m33` attribute.
    /// [`DOMMatrixReadOnly.m33`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrixReadOnly/m33)
    [[nodiscard]] double m33() const;
    /// Getter of the `m34` attribute.
    /// [`DOMMatrixReadOnly.m34`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrixReadOnly/m34)
    [[nodiscard]] double m34() const;
    /// Getter of the `m41` attribute.
    /// [`DOMMatrixReadOnly.m41`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrixReadOnly/m41)
    [[nodiscard]] double m41() const;
    /// Getter of the `m42` attribute.
    /// [`DOMMatrixReadOnly.m42`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrixReadOnly/m42)
    [[nodiscard]] double m42() const;
    /// Getter of the `m43` attribute.
    /// [`DOMMatrixReadOnly.m43`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrixReadOnly/m43)
    [[nodiscard]] double m43() const;
    /// Getter of the `m44` attribute.
    /// [`DOMMatrixReadOnly.m44`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrixReadOnly/m44)
    [[nodiscard]] double m44() const;
    /// Getter of the `is2D` attribute.
    /// [`DOMMatrixReadOnly.is2D`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrixReadOnly/is2D)
    [[nodiscard]] bool is2D() const;
    /// Getter of the `isIdentity` attribute.
    /// [`DOMMatrixReadOnly.isIdentity`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrixReadOnly/isIdentity)
    [[nodiscard]] bool isIdentity() const;
    /// The translate method.
    /// [`DOMMatrixReadOnly.translate`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrixReadOnly/translate)
    DOMMatrix translate();
    /// The translate method.
    /// [`DOMMatrixReadOnly.translate`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrixReadOnly/translate)
    DOMMatrix translate(double tx);
    /// The translate method.
    /// [`DOMMatrixReadOnly.translate`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrixReadOnly/translate)
    DOMMatrix translate(double tx, double ty);
    /// The translate method.
    /// [`DOMMatrixReadOnly.translate`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrixReadOnly/translate)
    DOMMatrix translate(double tx, double ty, double tz);
    /// The scale method.
    /// [`DOMMatrixReadOnly.scale`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrixReadOnly/scale)
    DOMMatrix scale();
    /// The scale method.
    /// [`DOMMatrixReadOnly.scale`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrixReadOnly/scale)
    DOMMatrix scale(double scaleX);
    /// The scale method.
    /// [`DOMMatrixReadOnly.scale`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrixReadOnly/scale)
    DOMMatrix scale(double scaleX, double scaleY);
    /// The scale method.
    /// [`DOMMatrixReadOnly.scale`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrixReadOnly/scale)
    DOMMatrix scale(double scaleX, double scaleY, double scaleZ);
    /// The scale method.
    /// [`DOMMatrixReadOnly.scale`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrixReadOnly/scale)
    DOMMatrix scale(double scaleX, double scaleY, double scaleZ, double originX);
    /// The scale method.
    /// [`DOMMatrixReadOnly.scale`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrixReadOnly/scale)
    DOMMatrix scale(double scaleX, double scaleY, double scaleZ, double originX, double originY);
    /// The scale method.
    /// [`DOMMatrixReadOnly.scale`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrixReadOnly/scale)
    DOMMatrix scale(double scaleX, double scaleY, double scaleZ, double originX, double originY, double originZ);
    /// The scaleNonUniform method.
    /// [`DOMMatrixReadOnly.scaleNonUniform`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrixReadOnly/scaleNonUniform)
    DOMMatrix scaleNonUniform();
    /// The scaleNonUniform method.
    /// [`DOMMatrixReadOnly.scaleNonUniform`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrixReadOnly/scaleNonUniform)
    DOMMatrix scaleNonUniform(double scaleX);
    /// The scaleNonUniform method.
    /// [`DOMMatrixReadOnly.scaleNonUniform`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrixReadOnly/scaleNonUniform)
    DOMMatrix scaleNonUniform(double scaleX, double scaleY);
    /// The scale3d method.
    /// [`DOMMatrixReadOnly.scale3d`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrixReadOnly/scale3d)
    DOMMatrix scale3d();
    /// The scale3d method.
    /// [`DOMMatrixReadOnly.scale3d`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrixReadOnly/scale3d)
    DOMMatrix scale3d(double scale);
    /// The scale3d method.
    /// [`DOMMatrixReadOnly.scale3d`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrixReadOnly/scale3d)
    DOMMatrix scale3d(double scale, double originX);
    /// The scale3d method.
    /// [`DOMMatrixReadOnly.scale3d`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrixReadOnly/scale3d)
    DOMMatrix scale3d(double scale, double originX, double originY);
    /// The scale3d method.
    /// [`DOMMatrixReadOnly.scale3d`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrixReadOnly/scale3d)
    DOMMatrix scale3d(double scale, double originX, double originY, double originZ);
    /// The rotate method.
    /// [`DOMMatrixReadOnly.rotate`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrixReadOnly/rotate)
    DOMMatrix rotate();
    /// The rotate method.
    /// [`DOMMatrixReadOnly.rotate`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrixReadOnly/rotate)
    DOMMatrix rotate(double rotX);
    /// The rotate method.
    /// [`DOMMatrixReadOnly.rotate`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrixReadOnly/rotate)
    DOMMatrix rotate(double rotX, double rotY);
    /// The rotate method.
    /// [`DOMMatrixReadOnly.rotate`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrixReadOnly/rotate)
    DOMMatrix rotate(double rotX, double rotY, double rotZ);
    /// The rotateFromVector method.
    /// [`DOMMatrixReadOnly.rotateFromVector`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrixReadOnly/rotateFromVector)
    DOMMatrix rotateFromVector();
    /// The rotateFromVector method.
    /// [`DOMMatrixReadOnly.rotateFromVector`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrixReadOnly/rotateFromVector)
    DOMMatrix rotateFromVector(double x);
    /// The rotateFromVector method.
    /// [`DOMMatrixReadOnly.rotateFromVector`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrixReadOnly/rotateFromVector)
    DOMMatrix rotateFromVector(double x, double y);
    /// The rotateAxisAngle method.
    /// [`DOMMatrixReadOnly.rotateAxisAngle`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrixReadOnly/rotateAxisAngle)
    DOMMatrix rotateAxisAngle();
    /// The rotateAxisAngle method.
    /// [`DOMMatrixReadOnly.rotateAxisAngle`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrixReadOnly/rotateAxisAngle)
    DOMMatrix rotateAxisAngle(double x);
    /// The rotateAxisAngle method.
    /// [`DOMMatrixReadOnly.rotateAxisAngle`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrixReadOnly/rotateAxisAngle)
    DOMMatrix rotateAxisAngle(double x, double y);
    /// The rotateAxisAngle method.
    /// [`DOMMatrixReadOnly.rotateAxisAngle`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrixReadOnly/rotateAxisAngle)
    DOMMatrix rotateAxisAngle(double x, double y, double z);
    /// The rotateAxisAngle method.
    /// [`DOMMatrixReadOnly.rotateAxisAngle`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrixReadOnly/rotateAxisAngle)
    DOMMatrix rotateAxisAngle(double x, double y, double z, double angle);
    /// The skewX method.
    /// [`DOMMatrixReadOnly.skewX`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrixReadOnly/skewX)
    DOMMatrix skewX();
    /// The skewX method.
    /// [`DOMMatrixReadOnly.skewX`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrixReadOnly/skewX)
    DOMMatrix skewX(double sx);
    /// The skewY method.
    /// [`DOMMatrixReadOnly.skewY`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrixReadOnly/skewY)
    DOMMatrix skewY();
    /// The skewY method.
    /// [`DOMMatrixReadOnly.skewY`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrixReadOnly/skewY)
    DOMMatrix skewY(double sy);
    /// The multiply method.
    /// [`DOMMatrixReadOnly.multiply`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrixReadOnly/multiply)
    DOMMatrix multiply();
    /// The multiply method.
    /// [`DOMMatrixReadOnly.multiply`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrixReadOnly/multiply)
    DOMMatrix multiply(const DOMMatrixInit& other);
    /// The flipX method.
    /// [`DOMMatrixReadOnly.flipX`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrixReadOnly/flipX)
    DOMMatrix flipX();
    /// The flipY method.
    /// [`DOMMatrixReadOnly.flipY`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrixReadOnly/flipY)
    DOMMatrix flipY();
    /// The inverse method.
    /// [`DOMMatrixReadOnly.inverse`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrixReadOnly/inverse)
    DOMMatrix inverse();
    /// The transformPoint method.
    /// [`DOMMatrixReadOnly.transformPoint`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrixReadOnly/transformPoint)
    DOMPoint transformPoint();
    /// The transformPoint method.
    /// [`DOMMatrixReadOnly.transformPoint`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrixReadOnly/transformPoint)
    DOMPoint transformPoint(const DOMPointInit& point);
    /// The toFloat32Array method.
    /// [`DOMMatrixReadOnly.toFloat32Array`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrixReadOnly/toFloat32Array)
    jsbind::Float32Array toFloat32Array();
    /// The toFloat64Array method.
    /// [`DOMMatrixReadOnly.toFloat64Array`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrixReadOnly/toFloat64Array)
    jsbind::Float64Array toFloat64Array();
    /// The toJSON method.
    /// [`DOMMatrixReadOnly.toJSON`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrixReadOnly/toJSON)
    jsbind::Object toJSON();
};

