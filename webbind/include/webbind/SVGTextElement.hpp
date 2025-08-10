#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "SVGTextPositioningElement.hpp"

namespace webbind {

/// Interface SVGTextElement
/// [`SVGTextElement`](https://developer.mozilla.org/en-US/docs/Web/API/SVGTextElement)
class SVGTextElement : public SVGTextPositioningElement {
    explicit SVGTextElement(Handle h) noexcept;
public:
    explicit SVGTextElement(const emlite::Val &val) noexcept;
    static SVGTextElement take_ownership(Handle h) noexcept;
    [[nodiscard]] SVGTextElement clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
};

} // namespace webbind