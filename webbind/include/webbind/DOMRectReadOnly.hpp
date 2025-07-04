#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class DOMRectReadOnly;
class DOMRectInit;


class DOMRectInit : public emlite::Val {
  explicit DOMRectInit(Handle h) noexcept;
public:
    static DOMRectInit take_ownership(Handle h) noexcept;
    explicit DOMRectInit(const emlite::Val &val) noexcept;
    DOMRectInit() noexcept;
    DOMRectInit clone() const noexcept;
    double x() const;
    void x(double value);
    double y() const;
    void y(double value);
    double width() const;
    void width(double value);
    double height() const;
    void height(double value);
};

class DOMRectReadOnly : public emlite::Val {
    explicit DOMRectReadOnly(Handle h) noexcept;

public:
    explicit DOMRectReadOnly(const emlite::Val &val) noexcept;
    static DOMRectReadOnly take_ownership(Handle h) noexcept;

    DOMRectReadOnly clone() const noexcept;
    DOMRectReadOnly(double x, double y, double width, double height);
    static DOMRectReadOnly fromRect(const DOMRectInit& other);
    double x() const;
    double y() const;
    double width() const;
    double height() const;
    double top() const;
    double right() const;
    double bottom() const;
    double left() const;
    jsbind::Object toJSON();
};

