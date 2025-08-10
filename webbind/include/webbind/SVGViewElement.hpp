#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "SVGElement.hpp"

namespace webbind {

class SVGAnimatedRect;
class SVGAnimatedPreserveAspectRatio;

/// Interface SVGViewElement
/// [`SVGViewElement`](https://developer.mozilla.org/en-US/docs/Web/API/SVGViewElement)
class SVGViewElement : public SVGElement {
    explicit SVGViewElement(Handle h) noexcept;
public:
    explicit SVGViewElement(const emlite::Val &val) noexcept;
    static SVGViewElement take_ownership(Handle h) noexcept;
    [[nodiscard]] SVGViewElement clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// [`SVGViewElement.viewBox`](https://developer.mozilla.org/en-US/docs/Web/API/SVGViewElement/viewBox)
    /// [`SVGViewElement.viewBox`](https://developer.mozilla.org/en-US/docs/Web/API/SVGViewElement/viewBox)
    [[nodiscard]] SVGAnimatedRect viewBox() const;
    /// [`SVGViewElement.preserveAspectRatio`](https://developer.mozilla.org/en-US/docs/Web/API/SVGViewElement/preserveAspectRatio)
    /// [`SVGViewElement.preserveAspectRatio`](https://developer.mozilla.org/en-US/docs/Web/API/SVGViewElement/preserveAspectRatio)
    [[nodiscard]] SVGAnimatedPreserveAspectRatio preserveAspectRatio() const;
};

} // namespace webbind