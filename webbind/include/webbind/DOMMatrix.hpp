#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "DOMMatrixReadOnly.hpp"
#include "DOMPointReadOnly.hpp"
#include "enums.hpp"

class DOMMatrix;


class DOMMatrix : public DOMMatrixReadOnly {
    explicit DOMMatrix(Handle h) noexcept;

public:
    explicit DOMMatrix(const emlite::Val &val) noexcept;
    static DOMMatrix take_ownership(Handle h) noexcept;

    DOMMatrix clone() const noexcept;
    DOMMatrix(const jsbind::Any& init);
    static DOMMatrix fromMatrix(const DOMMatrixInit& other);
    static DOMMatrix fromFloat32Array(const jsbind::Float32Array& array32);
    static DOMMatrix fromFloat64Array(const jsbind::Float64Array& array64);
    double a() const;
    void a(double value);
    double b() const;
    void b(double value);
    double c() const;
    void c(double value);
    double d() const;
    void d(double value);
    double e() const;
    void e(double value);
    double f() const;
    void f(double value);
    double m11() const;
    void m11(double value);
    double m12() const;
    void m12(double value);
    double m13() const;
    void m13(double value);
    double m14() const;
    void m14(double value);
    double m21() const;
    void m21(double value);
    double m22() const;
    void m22(double value);
    double m23() const;
    void m23(double value);
    double m24() const;
    void m24(double value);
    double m31() const;
    void m31(double value);
    double m32() const;
    void m32(double value);
    double m33() const;
    void m33(double value);
    double m34() const;
    void m34(double value);
    double m41() const;
    void m41(double value);
    double m42() const;
    void m42(double value);
    double m43() const;
    void m43(double value);
    double m44() const;
    void m44(double value);
    DOMMatrix multiplySelf(const DOMMatrixInit& other);
    DOMMatrix preMultiplySelf(const DOMMatrixInit& other);
    DOMMatrix translateSelf(double tx, double ty, double tz);
    DOMMatrix scaleSelf(double scaleX, double scaleY, double scaleZ, double originX, double originY, double originZ);
    DOMMatrix scale3dSelf(double scale, double originX, double originY, double originZ);
    DOMMatrix rotateSelf(double rotX, double rotY, double rotZ);
    DOMMatrix rotateFromVectorSelf(double x, double y);
    DOMMatrix rotateAxisAngleSelf(double x, double y, double z, double angle);
    DOMMatrix skewXSelf(double sx);
    DOMMatrix skewYSelf(double sy);
    DOMMatrix invertSelf();
    DOMMatrix setMatrixValue(const jsbind::DOMString& transformList);
};

