#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "SVGElement.hpp"
#include "enums.hpp"

class SVGAnimatedNumber;


/// The SVGStopElement class.
/// [`SVGStopElement`](https://developer.mozilla.org/en-US/docs/Web/API/SVGStopElement)
class SVGStopElement : public SVGElement {
    explicit SVGStopElement(Handle h) noexcept;

public:
    explicit SVGStopElement(const emlite::Val &val) noexcept;
    static SVGStopElement take_ownership(Handle h) noexcept;

    [[nodiscard]] SVGStopElement clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// Getter of the `offset` attribute.
    /// [`SVGStopElement.offset`](https://developer.mozilla.org/en-US/docs/Web/API/SVGStopElement/offset)
    [[nodiscard]] SVGAnimatedNumber offset() const;
};

