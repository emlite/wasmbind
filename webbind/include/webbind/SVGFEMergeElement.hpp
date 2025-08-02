#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "SVGElement.hpp"
#include "enums.hpp"

class SVGAnimatedLength;
class SVGAnimatedString;


/// The SVGFEMergeElement class.
/// [`SVGFEMergeElement`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEMergeElement)
class SVGFEMergeElement : public SVGElement {
    explicit SVGFEMergeElement(Handle h) noexcept;

public:
    explicit SVGFEMergeElement(const emlite::Val &val) noexcept;
    static SVGFEMergeElement take_ownership(Handle h) noexcept;

    [[nodiscard]] SVGFEMergeElement clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// Getter of the `x` attribute.
    /// [`SVGFEMergeElement.x`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEMergeElement/x)
    [[nodiscard]] SVGAnimatedLength x() const;
    /// Getter of the `y` attribute.
    /// [`SVGFEMergeElement.y`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEMergeElement/y)
    [[nodiscard]] SVGAnimatedLength y() const;
    /// Getter of the `width` attribute.
    /// [`SVGFEMergeElement.width`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEMergeElement/width)
    [[nodiscard]] SVGAnimatedLength width() const;
    /// Getter of the `height` attribute.
    /// [`SVGFEMergeElement.height`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEMergeElement/height)
    [[nodiscard]] SVGAnimatedLength height() const;
    /// Getter of the `result` attribute.
    /// [`SVGFEMergeElement.result`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEMergeElement/result)
    [[nodiscard]] SVGAnimatedString result() const;
};

