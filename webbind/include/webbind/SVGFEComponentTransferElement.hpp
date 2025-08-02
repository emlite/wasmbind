#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "SVGElement.hpp"
#include "enums.hpp"

class SVGAnimatedString;
class SVGAnimatedLength;


/// The SVGFEComponentTransferElement class.
/// [`SVGFEComponentTransferElement`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEComponentTransferElement)
class SVGFEComponentTransferElement : public SVGElement {
    explicit SVGFEComponentTransferElement(Handle h) noexcept;

public:
    explicit SVGFEComponentTransferElement(const emlite::Val &val) noexcept;
    static SVGFEComponentTransferElement take_ownership(Handle h) noexcept;

    [[nodiscard]] SVGFEComponentTransferElement clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// Getter of the `in1` attribute.
    /// [`SVGFEComponentTransferElement.in1`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEComponentTransferElement/in1)
    [[nodiscard]] SVGAnimatedString in1() const;
    /// Getter of the `x` attribute.
    /// [`SVGFEComponentTransferElement.x`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEComponentTransferElement/x)
    [[nodiscard]] SVGAnimatedLength x() const;
    /// Getter of the `y` attribute.
    /// [`SVGFEComponentTransferElement.y`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEComponentTransferElement/y)
    [[nodiscard]] SVGAnimatedLength y() const;
    /// Getter of the `width` attribute.
    /// [`SVGFEComponentTransferElement.width`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEComponentTransferElement/width)
    [[nodiscard]] SVGAnimatedLength width() const;
    /// Getter of the `height` attribute.
    /// [`SVGFEComponentTransferElement.height`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEComponentTransferElement/height)
    [[nodiscard]] SVGAnimatedLength height() const;
    /// Getter of the `result` attribute.
    /// [`SVGFEComponentTransferElement.result`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEComponentTransferElement/result)
    [[nodiscard]] SVGAnimatedString result() const;
};

