#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class DOMMatrixReadOnly;
class DOMMatrixInit;
class DOMMatrix;
class DOMPoint;
class DOMPointInit;

/// Interface DOMMatrixReadOnly
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
    /// [`DOMMatrixReadOnly.a`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrixReadOnly/a)
    /// [`DOMMatrixReadOnly.a`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrixReadOnly/a)
    [[nodiscard]] double a() const;
    /// [`DOMMatrixReadOnly.b`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrixReadOnly/b)
    /// [`DOMMatrixReadOnly.b`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrixReadOnly/b)
    [[nodiscard]] double b() const;
    /// [`DOMMatrixReadOnly.c`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrixReadOnly/c)
    /// [`DOMMatrixReadOnly.c`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrixReadOnly/c)
    [[nodiscard]] double c() const;
    /// [`DOMMatrixReadOnly.d`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrixReadOnly/d)
    /// [`DOMMatrixReadOnly.d`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrixReadOnly/d)
    [[nodiscard]] double d() const;
    /// [`DOMMatrixReadOnly.e`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrixReadOnly/e)
    /// [`DOMMatrixReadOnly.e`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrixReadOnly/e)
    [[nodiscard]] double e() const;
    /// [`DOMMatrixReadOnly.f`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrixReadOnly/f)
    /// [`DOMMatrixReadOnly.f`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrixReadOnly/f)
    [[nodiscard]] double f() const;
    /// [`DOMMatrixReadOnly.m11`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrixReadOnly/m11)
    /// [`DOMMatrixReadOnly.m11`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrixReadOnly/m11)
    [[nodiscard]] double m11() const;
    /// [`DOMMatrixReadOnly.m12`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrixReadOnly/m12)
    /// [`DOMMatrixReadOnly.m12`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrixReadOnly/m12)
    [[nodiscard]] double m12() const;
    /// [`DOMMatrixReadOnly.m13`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrixReadOnly/m13)
    /// [`DOMMatrixReadOnly.m13`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrixReadOnly/m13)
    [[nodiscard]] double m13() const;
    /// [`DOMMatrixReadOnly.m14`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrixReadOnly/m14)
    /// [`DOMMatrixReadOnly.m14`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrixReadOnly/m14)
    [[nodiscard]] double m14() const;
    /// [`DOMMatrixReadOnly.m21`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrixReadOnly/m21)
    /// [`DOMMatrixReadOnly.m21`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrixReadOnly/m21)
    [[nodiscard]] double m21() const;
    /// [`DOMMatrixReadOnly.m22`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrixReadOnly/m22)
    /// [`DOMMatrixReadOnly.m22`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrixReadOnly/m22)
    [[nodiscard]] double m22() const;
    /// [`DOMMatrixReadOnly.m23`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrixReadOnly/m23)
    /// [`DOMMatrixReadOnly.m23`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrixReadOnly/m23)
    [[nodiscard]] double m23() const;
    /// [`DOMMatrixReadOnly.m24`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrixReadOnly/m24)
    /// [`DOMMatrixReadOnly.m24`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrixReadOnly/m24)
    [[nodiscard]] double m24() const;
    /// [`DOMMatrixReadOnly.m31`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrixReadOnly/m31)
    /// [`DOMMatrixReadOnly.m31`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrixReadOnly/m31)
    [[nodiscard]] double m31() const;
    /// [`DOMMatrixReadOnly.m32`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrixReadOnly/m32)
    /// [`DOMMatrixReadOnly.m32`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrixReadOnly/m32)
    [[nodiscard]] double m32() const;
    /// [`DOMMatrixReadOnly.m33`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrixReadOnly/m33)
    /// [`DOMMatrixReadOnly.m33`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrixReadOnly/m33)
    [[nodiscard]] double m33() const;
    /// [`DOMMatrixReadOnly.m34`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrixReadOnly/m34)
    /// [`DOMMatrixReadOnly.m34`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrixReadOnly/m34)
    [[nodiscard]] double m34() const;
    /// [`DOMMatrixReadOnly.m41`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrixReadOnly/m41)
    /// [`DOMMatrixReadOnly.m41`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrixReadOnly/m41)
    [[nodiscard]] double m41() const;
    /// [`DOMMatrixReadOnly.m42`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrixReadOnly/m42)
    /// [`DOMMatrixReadOnly.m42`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrixReadOnly/m42)
    [[nodiscard]] double m42() const;
    /// [`DOMMatrixReadOnly.m43`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrixReadOnly/m43)
    /// [`DOMMatrixReadOnly.m43`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrixReadOnly/m43)
    [[nodiscard]] double m43() const;
    /// [`DOMMatrixReadOnly.m44`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrixReadOnly/m44)
    /// [`DOMMatrixReadOnly.m44`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrixReadOnly/m44)
    [[nodiscard]] double m44() const;
    /// [`DOMMatrixReadOnly.is2D`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrixReadOnly/is2D)
    /// [`DOMMatrixReadOnly.is2D`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrixReadOnly/is2D)
    [[nodiscard]] bool is2D() const;
    /// [`DOMMatrixReadOnly.isIdentity`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrixReadOnly/isIdentity)
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

} // namespace webbind