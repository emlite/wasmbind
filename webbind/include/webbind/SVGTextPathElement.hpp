#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "SVGTextContentElement.hpp"
#include "enums.hpp"

class SVGAnimatedLength;
class SVGAnimatedEnumeration;
class SVGAnimatedString;


/// The SVGTextPathElement class.
/// [`SVGTextPathElement`](https://developer.mozilla.org/en-US/docs/Web/API/SVGTextPathElement)
class SVGTextPathElement : public SVGTextContentElement {
    explicit SVGTextPathElement(Handle h) noexcept;

public:
    explicit SVGTextPathElement(const emlite::Val &val) noexcept;
    static SVGTextPathElement take_ownership(Handle h) noexcept;

    [[nodiscard]] SVGTextPathElement clone() const noexcept;
    /// Getter of the `startOffset` attribute.
    /// [`SVGTextPathElement.startOffset`](https://developer.mozilla.org/en-US/docs/Web/API/SVGTextPathElement/startOffset)
    [[nodiscard]] SVGAnimatedLength startOffset() const;
    /// Getter of the `method` attribute.
    /// [`SVGTextPathElement.method`](https://developer.mozilla.org/en-US/docs/Web/API/SVGTextPathElement/method)
    [[nodiscard]] SVGAnimatedEnumeration method() const;
    /// Getter of the `spacing` attribute.
    /// [`SVGTextPathElement.spacing`](https://developer.mozilla.org/en-US/docs/Web/API/SVGTextPathElement/spacing)
    [[nodiscard]] SVGAnimatedEnumeration spacing() const;
    /// Getter of the `href` attribute.
    /// [`SVGTextPathElement.href`](https://developer.mozilla.org/en-US/docs/Web/API/SVGTextPathElement/href)
    [[nodiscard]] SVGAnimatedString href() const;
};

