#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "DOMRectReadOnly.hpp"
#include "enums.hpp"

class DOMRect;


class DOMRect : public DOMRectReadOnly {
    explicit DOMRect(Handle h) noexcept;

public:
    explicit DOMRect(const emlite::Val &val) noexcept;
    static DOMRect take_ownership(Handle h) noexcept;

    DOMRect clone() const noexcept;
    DOMRect(double x, double y, double width, double height);
    static DOMRect fromRect(const DOMRectInit& other);
    double x() const;
    void x(double value);
    double y() const;
    void y(double value);
    double width() const;
    void width(double value);
    double height() const;
    void height(double value);
};

