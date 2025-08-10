#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "SVGElement.hpp"

namespace webbind {

/// Interface SVGMetadataElement
/// [`SVGMetadataElement`](https://developer.mozilla.org/en-US/docs/Web/API/SVGMetadataElement)
class SVGMetadataElement : public SVGElement {
    explicit SVGMetadataElement(Handle h) noexcept;
public:
    explicit SVGMetadataElement(const emlite::Val &val) noexcept;
    static SVGMetadataElement take_ownership(Handle h) noexcept;
    [[nodiscard]] SVGMetadataElement clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
};

} // namespace webbind