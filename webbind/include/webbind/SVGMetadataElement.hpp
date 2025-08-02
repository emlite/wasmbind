#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "SVGElement.hpp"
#include "enums.hpp"


/// The SVGMetadataElement class.
/// [`SVGMetadataElement`](https://developer.mozilla.org/en-US/docs/Web/API/SVGMetadataElement)
class SVGMetadataElement : public SVGElement {
    explicit SVGMetadataElement(Handle h) noexcept;

public:
    explicit SVGMetadataElement(const emlite::Val &val) noexcept;
    static SVGMetadataElement take_ownership(Handle h) noexcept;

    [[nodiscard]] SVGMetadataElement clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
};

