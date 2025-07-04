#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "DOMPointReadOnly.hpp"
#include "SVGGeometryElement.hpp"
#include "enums.hpp"

class DOMMatrixReadOnly;
class DOMMatrix;
class DOMPoint;


class DOMMatrixReadOnly : public emlite::Val {
    explicit DOMMatrixReadOnly(Handle h) noexcept;

public:
    explicit DOMMatrixReadOnly(const emlite::Val &val) noexcept;
    static DOMMatrixReadOnly take_ownership(Handle h) noexcept;

    DOMMatrixReadOnly clone() const noexcept;
    DOMMatrixReadOnly(const jsbind::Any& init);
    static DOMMatrixReadOnly fromMatrix(const DOMMatrixInit& other);
    static DOMMatrixReadOnly fromFloat32Array(const jsbind::Float32Array& array32);
    static DOMMatrixReadOnly fromFloat64Array(const jsbind::Float64Array& array64);
    double a() const;
    double b() const;
    double c() const;
    double d() const;
    double e() const;
    double f() const;
    double m11() const;
    double m12() const;
    double m13() const;
    double m14() const;
    double m21() const;
    double m22() const;
    double m23() const;
    double m24() const;
    double m31() const;
    double m32() const;
    double m33() const;
    double m34() const;
    double m41() const;
    double m42() const;
    double m43() const;
    double m44() const;
    bool is2D() const;
    bool isIdentity() const;
    DOMMatrix translate(double tx, double ty, double tz);
    DOMMatrix scale(double scaleX, double scaleY, double scaleZ, double originX, double originY, double originZ);
    DOMMatrix scaleNonUniform(double scaleX, double scaleY);
    DOMMatrix scale3d(double scale, double originX, double originY, double originZ);
    DOMMatrix rotate(double rotX, double rotY, double rotZ);
    DOMMatrix rotateFromVector(double x, double y);
    DOMMatrix rotateAxisAngle(double x, double y, double z, double angle);
    DOMMatrix skewX(double sx);
    DOMMatrix skewY(double sy);
    DOMMatrix multiply(const DOMMatrixInit& other);
    DOMMatrix flipX();
    DOMMatrix flipY();
    DOMMatrix inverse();
    DOMPoint transformPoint(const DOMPointInit& point);
    jsbind::Float32Array toFloat32Array();
    jsbind::Float64Array toFloat64Array();
    jsbind::Object toJSON();
};

