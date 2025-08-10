#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "SVGTextPositioningElement.hpp"

namespace webbind {

/// Interface SVGTSpanElement
/// [`SVGTSpanElement`](https://developer.mozilla.org/en-US/docs/Web/API/SVGTSpanElement)
class SVGTSpanElement : public SVGTextPositioningElement {
    explicit SVGTSpanElement(Handle h) noexcept;
public:
    explicit SVGTSpanElement(const emlite::Val &val) noexcept;
    static SVGTSpanElement take_ownership(Handle h) noexcept;
    [[nodiscard]] SVGTSpanElement clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
};

} // namespace webbind