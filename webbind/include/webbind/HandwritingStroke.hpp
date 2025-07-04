#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class HandwritingPoint;


class HandwritingPoint : public emlite::Val {
  explicit HandwritingPoint(Handle h) noexcept;
public:
    static HandwritingPoint take_ownership(Handle h) noexcept;
    explicit HandwritingPoint(const emlite::Val &val) noexcept;
    HandwritingPoint() noexcept;
    HandwritingPoint clone() const noexcept;
    double x() const;
    void x(double value);
    double y() const;
    void y(double value);
    jsbind::Any t() const;
    void t(const jsbind::Any& value);
};

class HandwritingStroke : public emlite::Val {
    explicit HandwritingStroke(Handle h) noexcept;

public:
    explicit HandwritingStroke(const emlite::Val &val) noexcept;
    static HandwritingStroke take_ownership(Handle h) noexcept;

    HandwritingStroke clone() const noexcept;
    HandwritingStroke();
    jsbind::Undefined addPoint(const HandwritingPoint& point);
    jsbind::Sequence<HandwritingPoint> getPoints();
    jsbind::Undefined clear();
};

