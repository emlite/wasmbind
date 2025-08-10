#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "SVGElement.hpp"
#include "SVGBoundingBoxOptions.hpp"

namespace webbind {

class SVGAnimatedTransformList;
class DOMRect;
class DOMMatrix;
class SVGStringList;

/// Interface SVGGraphicsElement
/// [`SVGGraphicsElement`](https://developer.mozilla.org/en-US/docs/Web/API/SVGGraphicsElement)
class SVGGraphicsElement : public SVGElement {
    explicit SVGGraphicsElement(Handle h) noexcept;
public:
    explicit SVGGraphicsElement(const emlite::Val &val) noexcept;
    static SVGGraphicsElement take_ownership(Handle h) noexcept;
    [[nodiscard]] SVGGraphicsElement clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// [`SVGGraphicsElement.transform`](https://developer.mozilla.org/en-US/docs/Web/API/SVGGraphicsElement/transform)
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
    /// [`SVGGraphicsElement.requiredExtensions`](https://developer.mozilla.org/en-US/docs/Web/API/SVGGraphicsElement/requiredExtensions)
    /// [`SVGGraphicsElement.requiredExtensions`](https://developer.mozilla.org/en-US/docs/Web/API/SVGGraphicsElement/requiredExtensions)
    [[nodiscard]] SVGStringList requiredExtensions() const;
    /// [`SVGGraphicsElement.systemLanguage`](https://developer.mozilla.org/en-US/docs/Web/API/SVGGraphicsElement/systemLanguage)
    /// [`SVGGraphicsElement.systemLanguage`](https://developer.mozilla.org/en-US/docs/Web/API/SVGGraphicsElement/systemLanguage)
    [[nodiscard]] SVGStringList systemLanguage() const;
};

} // namespace webbind