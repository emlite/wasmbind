#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "SVGTextContentElement.hpp"

namespace webbind {

class SVGAnimatedLength;
class SVGAnimatedEnumeration;
class SVGAnimatedString;

/// Interface SVGTextPathElement
/// [`SVGTextPathElement`](https://developer.mozilla.org/en-US/docs/Web/API/SVGTextPathElement)
class SVGTextPathElement : public SVGTextContentElement {
    explicit SVGTextPathElement(Handle h) noexcept;
public:
    explicit SVGTextPathElement(const emlite::Val &val) noexcept;
    static SVGTextPathElement take_ownership(Handle h) noexcept;
    [[nodiscard]] SVGTextPathElement clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// [`SVGTextPathElement.startOffset`](https://developer.mozilla.org/en-US/docs/Web/API/SVGTextPathElement/startOffset)
    /// [`SVGTextPathElement.startOffset`](https://developer.mozilla.org/en-US/docs/Web/API/SVGTextPathElement/startOffset)
    [[nodiscard]] SVGAnimatedLength startOffset() const;
    /// [`SVGTextPathElement.method`](https://developer.mozilla.org/en-US/docs/Web/API/SVGTextPathElement/method)
    /// [`SVGTextPathElement.method`](https://developer.mozilla.org/en-US/docs/Web/API/SVGTextPathElement/method)
    [[nodiscard]] SVGAnimatedEnumeration method() const;
    /// [`SVGTextPathElement.spacing`](https://developer.mozilla.org/en-US/docs/Web/API/SVGTextPathElement/spacing)
    /// [`SVGTextPathElement.spacing`](https://developer.mozilla.org/en-US/docs/Web/API/SVGTextPathElement/spacing)
    [[nodiscard]] SVGAnimatedEnumeration spacing() const;
    /// [`SVGTextPathElement.href`](https://developer.mozilla.org/en-US/docs/Web/API/SVGTextPathElement/href)
    /// [`SVGTextPathElement.href`](https://developer.mozilla.org/en-US/docs/Web/API/SVGTextPathElement/href)
    [[nodiscard]] SVGAnimatedString href() const;
};

} // namespace webbind