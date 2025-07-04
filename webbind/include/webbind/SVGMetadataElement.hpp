#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "SVGElement.hpp"
#include "enums.hpp"


class SVGMetadataElement : public SVGElement {
    explicit SVGMetadataElement(Handle h) noexcept;

public:
    explicit SVGMetadataElement(const emlite::Val &val) noexcept;
    static SVGMetadataElement take_ownership(Handle h) noexcept;

    SVGMetadataElement clone() const noexcept;
};

