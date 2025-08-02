#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "SVGElement.hpp"
#include "enums.hpp"

class SVGAnimatedString;


/// The SVGMPathElement class.
/// [`SVGMPathElement`](https://developer.mozilla.org/en-US/docs/Web/API/SVGMPathElement)
class SVGMPathElement : public SVGElement {
    explicit SVGMPathElement(Handle h) noexcept;

public:
    explicit SVGMPathElement(const emlite::Val &val) noexcept;
    static SVGMPathElement take_ownership(Handle h) noexcept;

    [[nodiscard]] SVGMPathElement clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// Getter of the `href` attribute.
    /// [`SVGMPathElement.href`](https://developer.mozilla.org/en-US/docs/Web/API/SVGMPathElement/href)
    [[nodiscard]] SVGAnimatedString href() const;
};

