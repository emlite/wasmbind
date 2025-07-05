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
    DOMMatrixInit clone() const noexcept;
    double m13() const;
    void m13(double value);
    double m14() const;
    void m14(double value);
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
    double m43() const;
    void m43(double value);
    double m44() const;
    void m44(double value);
    bool is2D() const;
    void is2D(bool value);
};

class DOMPointReadOnly : public emlite::Val {
    explicit DOMPointReadOnly(Handle h) noexcept;

public:
    explicit DOMPointReadOnly(const emlite::Val &val) noexcept;
    static DOMPointReadOnly take_ownership(Handle h) noexcept;

    DOMPointReadOnly clone() const noexcept;
    DOMPointReadOnly();
    DOMPointReadOnly(double x);
    DOMPointReadOnly(double x, double y);
    DOMPointReadOnly(double x, double y, double z);
    DOMPointReadOnly(double x, double y, double z, double w);
    static DOMPointReadOnly fromPoint();
    static DOMPointReadOnly fromPoint(const DOMPointInit& other);
    double x() const;
    double y() const;
    double z() const;
    double w() const;
    DOMPoint matrixTransform();
    DOMPoint matrixTransform(const DOMMatrixInit& matrix);
    jsbind::Object toJSON();
};

