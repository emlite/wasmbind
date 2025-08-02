#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "SVGElement.hpp"
#include "enums.hpp"


/// The SVGTitleElement class.
/// [`SVGTitleElement`](https://developer.mozilla.org/en-US/docs/Web/API/SVGTitleElement)
class SVGTitleElement : public SVGElement {
    explicit SVGTitleElement(Handle h) noexcept;

public:
    explicit SVGTitleElement(const emlite::Val &val) noexcept;
    static SVGTitleElement take_ownership(Handle h) noexcept;

    [[nodiscard]] SVGTitleElement clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
};

