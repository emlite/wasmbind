#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "SVGElement.hpp"
#include "enums.hpp"

class SVGAnimatedString;


class SVGFEMergeNodeElement : public SVGElement {
    explicit SVGFEMergeNodeElement(Handle h) noexcept;

public:
    explicit SVGFEMergeNodeElement(const emlite::Val &val) noexcept;
    static SVGFEMergeNodeElement take_ownership(Handle h) noexcept;

    SVGFEMergeNodeElement clone() const noexcept;
    SVGAnimatedString in1() const;
};

