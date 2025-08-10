#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "SVGElement.hpp"

namespace webbind {

class SVGAnimatedString;
class SVGAnimatedLength;

/// Interface SVGFEComponentTransferElement
/// [`SVGFEComponentTransferElement`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEComponentTransferElement)
class SVGFEComponentTransferElement : public SVGElement {
    explicit SVGFEComponentTransferElement(Handle h) noexcept;
public:
    explicit SVGFEComponentTransferElement(const emlite::Val &val) noexcept;
    static SVGFEComponentTransferElement take_ownership(Handle h) noexcept;
    [[nodiscard]] SVGFEComponentTransferElement clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// [`SVGFEComponentTransferElement.in1`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEComponentTransferElement/in1)
    /// [`SVGFEComponentTransferElement.in1`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEComponentTransferElement/in1)
    [[nodiscard]] SVGAnimatedString in1() const;
    /// [`SVGFEComponentTransferElement.x`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEComponentTransferElement/x)
    /// [`SVGFEComponentTransferElement.x`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEComponentTransferElement/x)
    [[nodiscard]] SVGAnimatedLength x() const;
    /// [`SVGFEComponentTransferElement.y`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEComponentTransferElement/y)
    /// [`SVGFEComponentTransferElement.y`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEComponentTransferElement/y)
    [[nodiscard]] SVGAnimatedLength y() const;
    /// [`SVGFEComponentTransferElement.width`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEComponentTransferElement/width)
    /// [`SVGFEComponentTransferElement.width`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEComponentTransferElement/width)
    [[nodiscard]] SVGAnimatedLength width() const;
    /// [`SVGFEComponentTransferElement.height`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEComponentTransferElement/height)
    /// [`SVGFEComponentTransferElement.height`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEComponentTransferElement/height)
    [[nodiscard]] SVGAnimatedLength height() const;
    /// [`SVGFEComponentTransferElement.result`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEComponentTransferElement/result)
    /// [`SVGFEComponentTransferElement.result`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEComponentTransferElement/result)
    [[nodiscard]] SVGAnimatedString result() const;
};

} // namespace webbind