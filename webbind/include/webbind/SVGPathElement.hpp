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
    [[nodiscard]] SVGPathDataSettings clone() const noexcept;
    [[nodiscard]] bool normalize() const;
    void normalize(bool value);
};

/// The SVGPathElement class.
/// [`SVGPathElement`](https://developer.mozilla.org/en-US/docs/Web/API/SVGPathElement)
class SVGPathElement : public SVGGeometryElement {
    explicit SVGPathElement(Handle h) noexcept;

public:
    explicit SVGPathElement(const emlite::Val &val) noexcept;
    static SVGPathElement take_ownership(Handle h) noexcept;

    [[nodiscard]] SVGPathElement clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// Getter of the `pathLength` attribute.
    /// [`SVGPathElement.pathLength`](https://developer.mozilla.org/en-US/docs/Web/API/SVGPathElement/pathLength)
    [[nodiscard]] SVGAnimatedNumber pathLength() const;
    /// The getTotalLength method.
    /// [`SVGPathElement.getTotalLength`](https://developer.mozilla.org/en-US/docs/Web/API/SVGPathElement/getTotalLength)
    float getTotalLength();
    /// The getPointAtLength method.
    /// [`SVGPathElement.getPointAtLength`](https://developer.mozilla.org/en-US/docs/Web/API/SVGPathElement/getPointAtLength)
    DOMPoint getPointAtLength(float distance);
    /// The getPathSegmentAtLength method.
    /// [`SVGPathElement.getPathSegmentAtLength`](https://developer.mozilla.org/en-US/docs/Web/API/SVGPathElement/getPathSegmentAtLength)
    SVGPathSegment getPathSegmentAtLength(float distance);
    /// The getPathData method.
    /// [`SVGPathElement.getPathData`](https://developer.mozilla.org/en-US/docs/Web/API/SVGPathElement/getPathData)
    jsbind::TypedArray<SVGPathSegment> getPathData();
    /// The getPathData method.
    /// [`SVGPathElement.getPathData`](https://developer.mozilla.org/en-US/docs/Web/API/SVGPathElement/getPathData)
    jsbind::TypedArray<SVGPathSegment> getPathData(const SVGPathDataSettings& settings);
    /// The setPathData method.
    /// [`SVGPathElement.setPathData`](https://developer.mozilla.org/en-US/docs/Web/API/SVGPathElement/setPathData)
    jsbind::Undefined setPathData(const jsbind::TypedArray<SVGPathSegment>& pathData);
};

