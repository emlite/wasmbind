#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "DOMMatrixReadOnly.hpp"
#include "DOMMatrixInit.hpp"

namespace webbind {

class DOMMatrix;

/// Interface DOMMatrix
/// [`DOMMatrix`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrix)
class DOMMatrix : public DOMMatrixReadOnly {
    explicit DOMMatrix(Handle h) noexcept;
public:
    explicit DOMMatrix(const emlite::Val &val) noexcept;
    static DOMMatrix take_ownership(Handle h) noexcept;
    [[nodiscard]] DOMMatrix clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new DOMMatrix(..)` constructor, creating a new DOMMatrix instance
    DOMMatrix();
    /// The `new DOMMatrix(..)` constructor, creating a new DOMMatrix instance
    DOMMatrix(const jsbind::Any& init);
    /// The fromMatrix method.
    /// [`DOMMatrix.fromMatrix`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrix/fromMatrix)
    static DOMMatrix fromMatrix();
    /// The fromMatrix method.
    /// [`DOMMatrix.fromMatrix`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrix/fromMatrix)
    static DOMMatrix fromMatrix(const DOMMatrixInit& other);
    /// The fromFloat32Array method.
    /// [`DOMMatrix.fromFloat32Array`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrix/fromFloat32Array)
    static DOMMatrix fromFloat32Array(const jsbind::Float32Array& array32);
    /// The fromFloat64Array method.
    /// [`DOMMatrix.fromFloat64Array`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrix/fromFloat64Array)
    static DOMMatrix fromFloat64Array(const jsbind::Float64Array& array64);
    /// [`DOMMatrix.a`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrix/a)
    /// [`DOMMatrix.a`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrix/a)
    [[nodiscard]] double a() const;
    /// Setter of the `a` attribute.
    /// [`DOMMatrix.a`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrix/a)
    void a(double value);
    /// [`DOMMatrix.b`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrix/b)
    /// [`DOMMatrix.b`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrix/b)
    [[nodiscard]] double b() const;
    /// Setter of the `b` attribute.
    /// [`DOMMatrix.b`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrix/b)
    void b(double value);
    /// [`DOMMatrix.c`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrix/c)
    /// [`DOMMatrix.c`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrix/c)
    [[nodiscard]] double c() const;
    /// Setter of the `c` attribute.
    /// [`DOMMatrix.c`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrix/c)
    void c(double value);
    /// [`DOMMatrix.d`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrix/d)
    /// [`DOMMatrix.d`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrix/d)
    [[nodiscard]] double d() const;
    /// Setter of the `d` attribute.
    /// [`DOMMatrix.d`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrix/d)
    void d(double value);
    /// [`DOMMatrix.e`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrix/e)
    /// [`DOMMatrix.e`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrix/e)
    [[nodiscard]] double e() const;
    /// Setter of the `e` attribute.
    /// [`DOMMatrix.e`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrix/e)
    void e(double value);
    /// [`DOMMatrix.f`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrix/f)
    /// [`DOMMatrix.f`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrix/f)
    [[nodiscard]] double f() const;
    /// Setter of the `f` attribute.
    /// [`DOMMatrix.f`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrix/f)
    void f(double value);
    /// [`DOMMatrix.m11`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrix/m11)
    /// [`DOMMatrix.m11`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrix/m11)
    [[nodiscard]] double m11() const;
    /// Setter of the `m11` attribute.
    /// [`DOMMatrix.m11`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrix/m11)
    void m11(double value);
    /// [`DOMMatrix.m12`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrix/m12)
    /// [`DOMMatrix.m12`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrix/m12)
    [[nodiscard]] double m12() const;
    /// Setter of the `m12` attribute.
    /// [`DOMMatrix.m12`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrix/m12)
    void m12(double value);
    /// [`DOMMatrix.m13`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrix/m13)
    /// [`DOMMatrix.m13`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrix/m13)
    [[nodiscard]] double m13() const;
    /// Setter of the `m13` attribute.
    /// [`DOMMatrix.m13`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrix/m13)
    void m13(double value);
    /// [`DOMMatrix.m14`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrix/m14)
    /// [`DOMMatrix.m14`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrix/m14)
    [[nodiscard]] double m14() const;
    /// Setter of the `m14` attribute.
    /// [`DOMMatrix.m14`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrix/m14)
    void m14(double value);
    /// [`DOMMatrix.m21`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrix/m21)
    /// [`DOMMatrix.m21`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrix/m21)
    [[nodiscard]] double m21() const;
    /// Setter of the `m21` attribute.
    /// [`DOMMatrix.m21`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrix/m21)
    void m21(double value);
    /// [`DOMMatrix.m22`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrix/m22)
    /// [`DOMMatrix.m22`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrix/m22)
    [[nodiscard]] double m22() const;
    /// Setter of the `m22` attribute.
    /// [`DOMMatrix.m22`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrix/m22)
    void m22(double value);
    /// [`DOMMatrix.m23`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrix/m23)
    /// [`DOMMatrix.m23`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrix/m23)
    [[nodiscard]] double m23() const;
    /// Setter of the `m23` attribute.
    /// [`DOMMatrix.m23`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrix/m23)
    void m23(double value);
    /// [`DOMMatrix.m24`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrix/m24)
    /// [`DOMMatrix.m24`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrix/m24)
    [[nodiscard]] double m24() const;
    /// Setter of the `m24` attribute.
    /// [`DOMMatrix.m24`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrix/m24)
    void m24(double value);
    /// [`DOMMatrix.m31`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrix/m31)
    /// [`DOMMatrix.m31`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrix/m31)
    [[nodiscard]] double m31() const;
    /// Setter of the `m31` attribute.
    /// [`DOMMatrix.m31`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrix/m31)
    void m31(double value);
    /// [`DOMMatrix.m32`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrix/m32)
    /// [`DOMMatrix.m32`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrix/m32)
    [[nodiscard]] double m32() const;
    /// Setter of the `m32` attribute.
    /// [`DOMMatrix.m32`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrix/m32)
    void m32(double value);
    /// [`DOMMatrix.m33`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrix/m33)
    /// [`DOMMatrix.m33`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrix/m33)
    [[nodiscard]] double m33() const;
    /// Setter of the `m33` attribute.
    /// [`DOMMatrix.m33`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrix/m33)
    void m33(double value);
    /// [`DOMMatrix.m34`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrix/m34)
    /// [`DOMMatrix.m34`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrix/m34)
    [[nodiscard]] double m34() const;
    /// Setter of the `m34` attribute.
    /// [`DOMMatrix.m34`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrix/m34)
    void m34(double value);
    /// [`DOMMatrix.m41`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrix/m41)
    /// [`DOMMatrix.m41`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrix/m41)
    [[nodiscard]] double m41() const;
    /// Setter of the `m41` attribute.
    /// [`DOMMatrix.m41`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrix/m41)
    void m41(double value);
    /// [`DOMMatrix.m42`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrix/m42)
    /// [`DOMMatrix.m42`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrix/m42)
    [[nodiscard]] double m42() const;
    /// Setter of the `m42` attribute.
    /// [`DOMMatrix.m42`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrix/m42)
    void m42(double value);
    /// [`DOMMatrix.m43`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrix/m43)
    /// [`DOMMatrix.m43`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrix/m43)
    [[nodiscard]] double m43() const;
    /// Setter of the `m43` attribute.
    /// [`DOMMatrix.m43`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrix/m43)
    void m43(double value);
    /// [`DOMMatrix.m44`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrix/m44)
    /// [`DOMMatrix.m44`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrix/m44)
    [[nodiscard]] double m44() const;
    /// Setter of the `m44` attribute.
    /// [`DOMMatrix.m44`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrix/m44)
    void m44(double value);
    /// The multiplySelf method.
    /// [`DOMMatrix.multiplySelf`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrix/multiplySelf)
    DOMMatrix multiplySelf();
    /// The multiplySelf method.
    /// [`DOMMatrix.multiplySelf`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrix/multiplySelf)
    DOMMatrix multiplySelf(const DOMMatrixInit& other);
    /// The preMultiplySelf method.
    /// [`DOMMatrix.preMultiplySelf`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrix/preMultiplySelf)
    DOMMatrix preMultiplySelf();
    /// The preMultiplySelf method.
    /// [`DOMMatrix.preMultiplySelf`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrix/preMultiplySelf)
    DOMMatrix preMultiplySelf(const DOMMatrixInit& other);
    /// The translateSelf method.
    /// [`DOMMatrix.translateSelf`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrix/translateSelf)
    DOMMatrix translateSelf();
    /// The translateSelf method.
    /// [`DOMMatrix.translateSelf`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrix/translateSelf)
    DOMMatrix translateSelf(double tx);
    /// The translateSelf method.
    /// [`DOMMatrix.translateSelf`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrix/translateSelf)
    DOMMatrix translateSelf(double tx, double ty);
    /// The translateSelf method.
    /// [`DOMMatrix.translateSelf`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrix/translateSelf)
    DOMMatrix translateSelf(double tx, double ty, double tz);
    /// The scaleSelf method.
    /// [`DOMMatrix.scaleSelf`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrix/scaleSelf)
    DOMMatrix scaleSelf();
    /// The scaleSelf method.
    /// [`DOMMatrix.scaleSelf`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrix/scaleSelf)
    DOMMatrix scaleSelf(double scaleX);
    /// The scaleSelf method.
    /// [`DOMMatrix.scaleSelf`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrix/scaleSelf)
    DOMMatrix scaleSelf(double scaleX, double scaleY);
    /// The scaleSelf method.
    /// [`DOMMatrix.scaleSelf`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrix/scaleSelf)
    DOMMatrix scaleSelf(double scaleX, double scaleY, double scaleZ);
    /// The scaleSelf method.
    /// [`DOMMatrix.scaleSelf`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrix/scaleSelf)
    DOMMatrix scaleSelf(double scaleX, double scaleY, double scaleZ, double originX);
    /// The scaleSelf method.
    /// [`DOMMatrix.scaleSelf`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrix/scaleSelf)
    DOMMatrix scaleSelf(double scaleX, double scaleY, double scaleZ, double originX, double originY);
    /// The scaleSelf method.
    /// [`DOMMatrix.scaleSelf`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrix/scaleSelf)
    DOMMatrix scaleSelf(double scaleX, double scaleY, double scaleZ, double originX, double originY, double originZ);
    /// The scale3dSelf method.
    /// [`DOMMatrix.scale3dSelf`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrix/scale3dSelf)
    DOMMatrix scale3dSelf();
    /// The scale3dSelf method.
    /// [`DOMMatrix.scale3dSelf`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrix/scale3dSelf)
    DOMMatrix scale3dSelf(double scale);
    /// The scale3dSelf method.
    /// [`DOMMatrix.scale3dSelf`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrix/scale3dSelf)
    DOMMatrix scale3dSelf(double scale, double originX);
    /// The scale3dSelf method.
    /// [`DOMMatrix.scale3dSelf`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrix/scale3dSelf)
    DOMMatrix scale3dSelf(double scale, double originX, double originY);
    /// The scale3dSelf method.
    /// [`DOMMatrix.scale3dSelf`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrix/scale3dSelf)
    DOMMatrix scale3dSelf(double scale, double originX, double originY, double originZ);
    /// The rotateSelf method.
    /// [`DOMMatrix.rotateSelf`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrix/rotateSelf)
    DOMMatrix rotateSelf();
    /// The rotateSelf method.
    /// [`DOMMatrix.rotateSelf`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrix/rotateSelf)
    DOMMatrix rotateSelf(double rotX);
    /// The rotateSelf method.
    /// [`DOMMatrix.rotateSelf`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrix/rotateSelf)
    DOMMatrix rotateSelf(double rotX, double rotY);
    /// The rotateSelf method.
    /// [`DOMMatrix.rotateSelf`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrix/rotateSelf)
    DOMMatrix rotateSelf(double rotX, double rotY, double rotZ);
    /// The rotateFromVectorSelf method.
    /// [`DOMMatrix.rotateFromVectorSelf`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrix/rotateFromVectorSelf)
    DOMMatrix rotateFromVectorSelf();
    /// The rotateFromVectorSelf method.
    /// [`DOMMatrix.rotateFromVectorSelf`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrix/rotateFromVectorSelf)
    DOMMatrix rotateFromVectorSelf(double x);
    /// The rotateFromVectorSelf method.
    /// [`DOMMatrix.rotateFromVectorSelf`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrix/rotateFromVectorSelf)
    DOMMatrix rotateFromVectorSelf(double x, double y);
    /// The rotateAxisAngleSelf method.
    /// [`DOMMatrix.rotateAxisAngleSelf`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrix/rotateAxisAngleSelf)
    DOMMatrix rotateAxisAngleSelf();
    /// The rotateAxisAngleSelf method.
    /// [`DOMMatrix.rotateAxisAngleSelf`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrix/rotateAxisAngleSelf)
    DOMMatrix rotateAxisAngleSelf(double x);
    /// The rotateAxisAngleSelf method.
    /// [`DOMMatrix.rotateAxisAngleSelf`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrix/rotateAxisAngleSelf)
    DOMMatrix rotateAxisAngleSelf(double x, double y);
    /// The rotateAxisAngleSelf method.
    /// [`DOMMatrix.rotateAxisAngleSelf`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrix/rotateAxisAngleSelf)
    DOMMatrix rotateAxisAngleSelf(double x, double y, double z);
    /// The rotateAxisAngleSelf method.
    /// [`DOMMatrix.rotateAxisAngleSelf`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrix/rotateAxisAngleSelf)
    DOMMatrix rotateAxisAngleSelf(double x, double y, double z, double angle);
    /// The skewXSelf method.
    /// [`DOMMatrix.skewXSelf`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrix/skewXSelf)
    DOMMatrix skewXSelf();
    /// The skewXSelf method.
    /// [`DOMMatrix.skewXSelf`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrix/skewXSelf)
    DOMMatrix skewXSelf(double sx);
    /// The skewYSelf method.
    /// [`DOMMatrix.skewYSelf`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrix/skewYSelf)
    DOMMatrix skewYSelf();
    /// The skewYSelf method.
    /// [`DOMMatrix.skewYSelf`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrix/skewYSelf)
    DOMMatrix skewYSelf(double sy);
    /// The invertSelf method.
    /// [`DOMMatrix.invertSelf`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrix/invertSelf)
    DOMMatrix invertSelf();
    /// The setMatrixValue method.
    /// [`DOMMatrix.setMatrixValue`](https://developer.mozilla.org/en-US/docs/Web/API/DOMMatrix/setMatrixValue)
    DOMMatrix setMatrixValue(const jsbind::String& transformList);
};

} // namespace webbind