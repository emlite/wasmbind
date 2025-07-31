#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "SVGElement.hpp"
#include "enums.hpp"

class SVGAnimatedTransformList;
class DOMRect;
class SVGBoundingBoxOptions;
class DOMMatrix;
class SVGStringList;


class SVGBoundingBoxOptions : public emlite::Val {
  explicit SVGBoundingBoxOptions(Handle h) noexcept;
public:
    static SVGBoundingBoxOptions take_ownership(Handle h) noexcept;
    explicit SVGBoundingBoxOptions(const emlite::Val &val) noexcept;
    SVGBoundingBoxOptions() noexcept;
    [[nodiscard]] SVGBoundingBoxOptions clone() const noexcept;
    [[nodiscard]] bool fill() const;
    void fill(bool value);
    [[nodiscard]] bool stroke() const;
    void stroke(bool value);
    [[nodiscard]] bool markers() const;
    void markers(bool value);
    [[nodiscard]] bool clipped() const;
    void clipped(bool value);
};

/// The SVGGraphicsElement class.
/// [`SVGGraphicsElement`](https://developer.mozilla.org/en-US/docs/Web/API/SVGGraphicsElement)
class SVGGraphicsElement : public SVGElement {
    explicit SVGGraphicsElement(Handle h) noexcept;

public:
    explicit SVGGraphicsElement(const emlite::Val &val) noexcept;
    static SVGGraphicsElement take_ownership(Handle h) noexcept;

    [[nodiscard]] SVGGraphicsElement clone() const noexcept;
    /// Getter of the `transform` attribute.
    /// [`SVGGraphicsElement.transform`](https://developer.mozilla.org/en-US/docs/Web/API/SVGGraphicsElement/transform)
    [[nodiscard]] SVGAnimatedTransformList transform() const;
    /// The getBBox method.
    /// [`SVGGraphicsElement.getBBox`](https://developer.mozilla.org/en-US/docs/Web/API/SVGGraphicsElement/getBBox)
    DOMRect getBBox();
    /// The getBBox method.
    /// [`SVGGraphicsElement.getBBox`](https://developer.mozilla.org/en-US/docs/Web/API/SVGGraphicsElement/getBBox)
    DOMRect getBBox(const SVGBoundingBoxOptions& options);
    /// The getCTM method.
    /// [`SVGGraphicsElement.getCTM`](https://developer.mozilla.org/en-US/docs/Web/API/SVGGraphicsElement/getCTM)
    DOMMatrix getCTM();
    /// The getScreenCTM method.
    /// [`SVGGraphicsElement.getScreenCTM`](https://developer.mozilla.org/en-US/docs/Web/API/SVGGraphicsElement/getScreenCTM)
    DOMMatrix getScreenCTM();
    /// Getter of the `requiredExtensions` attribute.
    /// [`SVGGraphicsElement.requiredExtensions`](https://developer.mozilla.org/en-US/docs/Web/API/SVGGraphicsElement/requiredExtensions)
    [[nodiscard]] SVGStringList requiredExtensions() const;
    /// Getter of the `systemLanguage` attribute.
    /// [`SVGGraphicsElement.systemLanguage`](https://developer.mozilla.org/en-US/docs/Web/API/SVGGraphicsElement/systemLanguage)
    [[nodiscard]] SVGStringList systemLanguage() const;
};

