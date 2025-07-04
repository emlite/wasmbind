#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "SVGElement.hpp"
#include "enums.hpp"

class SVGAnimatedLength;
class SVGAnimatedString;


class SVGFEMergeElement : public SVGElement {
    explicit SVGFEMergeElement(Handle h) noexcept;

public:
    explicit SVGFEMergeElement(const emlite::Val &val) noexcept;
    static SVGFEMergeElement take_ownership(Handle h) noexcept;

    SVGFEMergeElement clone() const noexcept;
    SVGAnimatedLength x() const;
    SVGAnimatedLength y() const;
    SVGAnimatedLength width() const;
    SVGAnimatedLength height() const;
    SVGAnimatedString result() const;
};

