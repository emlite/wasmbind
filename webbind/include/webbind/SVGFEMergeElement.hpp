#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "SVGElement.hpp"

namespace webbind {

class SVGAnimatedLength;
class SVGAnimatedString;

/// Interface SVGFEMergeElement
/// [`SVGFEMergeElement`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEMergeElement)
class SVGFEMergeElement : public SVGElement {
    explicit SVGFEMergeElement(Handle h) noexcept;
public:
    explicit SVGFEMergeElement(const emlite::Val &val) noexcept;
    static SVGFEMergeElement take_ownership(Handle h) noexcept;
    [[nodiscard]] SVGFEMergeElement clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// [`SVGFEMergeElement.x`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEMergeElement/x)
    /// [`SVGFEMergeElement.x`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEMergeElement/x)
    [[nodiscard]] SVGAnimatedLength x() const;
    /// [`SVGFEMergeElement.y`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEMergeElement/y)
    /// [`SVGFEMergeElement.y`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEMergeElement/y)
    [[nodiscard]] SVGAnimatedLength y() const;
    /// [`SVGFEMergeElement.width`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEMergeElement/width)
    /// [`SVGFEMergeElement.width`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEMergeElement/width)
    [[nodiscard]] SVGAnimatedLength width() const;
    /// [`SVGFEMergeElement.height`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEMergeElement/height)
    /// [`SVGFEMergeElement.height`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEMergeElement/height)
    [[nodiscard]] SVGAnimatedLength height() const;
    /// [`SVGFEMergeElement.result`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEMergeElement/result)
    /// [`SVGFEMergeElement.result`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEMergeElement/result)
    [[nodiscard]] SVGAnimatedString result() const;
};

} // namespace webbind