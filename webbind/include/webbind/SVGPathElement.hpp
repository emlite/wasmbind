#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "SVGGeometryElement.hpp"
#include "SVGPathDataSettings.hpp"

namespace webbind {

class SVGAnimatedNumber;
class DOMPoint;
class SVGPathSegment;

/// Interface SVGPathElement
/// [`SVGPathElement`](https://developer.mozilla.org/en-US/docs/Web/API/SVGPathElement)
class SVGPathElement : public SVGGeometryElement {
    explicit SVGPathElement(Handle h) noexcept;
public:
    explicit SVGPathElement(const emlite::Val &val) noexcept;
    static SVGPathElement take_ownership(Handle h) noexcept;
    [[nodiscard]] SVGPathElement clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// [`SVGPathElement.pathLength`](https://developer.mozilla.org/en-US/docs/Web/API/SVGPathElement/pathLength)
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

} // namespace webbind