#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "SVGGeometryElement.hpp"
#include "enums.hpp"

class SVGAnimatedNumber;
class DOMPoint;
class SVGPathSegment;
class SVGPathDataSettings;


class SVGPathDataSettings : public emlite::Val {
  explicit SVGPathDataSettings(Handle h) noexcept;
public:
    static SVGPathDataSettings take_ownership(Handle h) noexcept;
    explicit SVGPathDataSettings(const emlite::Val &val) noexcept;
    SVGPathDataSettings() noexcept;
    SVGPathDataSettings clone() const noexcept;
    bool normalize() const;
    void normalize(bool value);
};

class SVGPathElement : public SVGGeometryElement {
    explicit SVGPathElement(Handle h) noexcept;

public:
    explicit SVGPathElement(const emlite::Val &val) noexcept;
    static SVGPathElement take_ownership(Handle h) noexcept;

    SVGPathElement clone() const noexcept;
    SVGAnimatedNumber pathLength() const;
    float getTotalLength();
    DOMPoint getPointAtLength(float distance);
    SVGPathSegment getPathSegmentAtLength(float distance);
    jsbind::Sequence<SVGPathSegment> getPathData();
    jsbind::Sequence<SVGPathSegment> getPathData(const SVGPathDataSettings& settings);
    jsbind::Undefined setPathData(const jsbind::Sequence<SVGPathSegment>& pathData);
};

