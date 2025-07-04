#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "DOMPointReadOnly.hpp"
#include "SVGGeometryElement.hpp"
#include "enums.hpp"

class DOMPoint;


class DOMPoint : public DOMPointReadOnly {
    explicit DOMPoint(Handle h) noexcept;

public:
    explicit DOMPoint(const emlite::Val &val) noexcept;
    static DOMPoint take_ownership(Handle h) noexcept;

    DOMPoint clone() const noexcept;
    DOMPoint(double x, double y, double z, double w);
    static DOMPoint fromPoint(const DOMPointInit& other);
    double x() const;
    void x(double value);
    double y() const;
    void y(double value);
    double z() const;
    void z(double value);
    double w() const;
    void w(double value);
};

