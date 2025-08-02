#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "SVGGraphicsElement.hpp"
#include "enums.hpp"

class SVGAnimatedNumber;
class DOMPointInit;
class DOMPoint;


class DOMPointInit : public emlite::Val {
  explicit DOMPointInit(Handle h) noexcept;
public:
    static DOMPointInit take_ownership(Handle h) noexcept;
    explicit DOMPointInit(const emlite::Val &val) noexcept;
    DOMPointInit() noexcept;
    [[nodiscard]] DOMPointInit clone() const noexcept;
    [[nodiscard]] double x() const;
    void x(double value);
    [[nodiscard]] double y() const;
    void y(double value);
    [[nodiscard]] double z() const;
    void z(double value);
    [[nodiscard]] double w() const;
    void w(double value);
};

/// The SVGGeometryElement class.
/// [`SVGGeometryElement`](https://developer.mozilla.org/en-US/docs/Web/API/SVGGeometryElement)
class SVGGeometryElement : public SVGGraphicsElement {
    explicit SVGGeometryElement(Handle h) noexcept;

public:
    explicit SVGGeometryElement(const emlite::Val &val) noexcept;
    static SVGGeometryElement take_ownership(Handle h) noexcept;

    [[nodiscard]] SVGGeometryElement clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// Getter of the `pathLength` attribute.
    /// [`SVGGeometryElement.pathLength`](https://developer.mozilla.org/en-US/docs/Web/API/SVGGeometryElement/pathLength)
    [[nodiscard]] SVGAnimatedNumber pathLength() const;
    /// The isPointInFill method.
    /// [`SVGGeometryElement.isPointInFill`](https://developer.mozilla.org/en-US/docs/Web/API/SVGGeometryElement/isPointInFill)
    bool isPointInFill();
    /// The isPointInFill method.
    /// [`SVGGeometryElement.isPointInFill`](https://developer.mozilla.org/en-US/docs/Web/API/SVGGeometryElement/isPointInFill)
    bool isPointInFill(const DOMPointInit& point);
    /// The isPointInStroke method.
    /// [`SVGGeometryElement.isPointInStroke`](https://developer.mozilla.org/en-US/docs/Web/API/SVGGeometryElement/isPointInStroke)
    bool isPointInStroke();
    /// The isPointInStroke method.
    /// [`SVGGeometryElement.isPointInStroke`](https://developer.mozilla.org/en-US/docs/Web/API/SVGGeometryElement/isPointInStroke)
    bool isPointInStroke(const DOMPointInit& point);
    /// The getTotalLength method.
    /// [`SVGGeometryElement.getTotalLength`](https://developer.mozilla.org/en-US/docs/Web/API/SVGGeometryElement/getTotalLength)
    float getTotalLength();
    /// The getPointAtLength method.
    /// [`SVGGeometryElement.getPointAtLength`](https://developer.mozilla.org/en-US/docs/Web/API/SVGGeometryElement/getPointAtLength)
    DOMPoint getPointAtLength(float distance);
};

