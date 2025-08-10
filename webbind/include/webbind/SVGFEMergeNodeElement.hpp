#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "SVGElement.hpp"

namespace webbind {

class SVGAnimatedString;

/// Interface SVGFEMergeNodeElement
/// [`SVGFEMergeNodeElement`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEMergeNodeElement)
class SVGFEMergeNodeElement : public SVGElement {
    explicit SVGFEMergeNodeElement(Handle h) noexcept;
public:
    explicit SVGFEMergeNodeElement(const emlite::Val &val) noexcept;
    static SVGFEMergeNodeElement take_ownership(Handle h) noexcept;
    [[nodiscard]] SVGFEMergeNodeElement clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// Getter of the `in1` attribute.
    /// [`SVGFEMergeNodeElement.in1`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEMergeNodeElement/in1)
    [[nodiscard]] SVGAnimatedString in1() const;
};

} // namespace webbind