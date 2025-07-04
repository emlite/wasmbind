#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "SVGElement.hpp"
#include "enums.hpp"

class SVGAnimatedString;
class SVGAnimatedLength;


class SVGFEComponentTransferElement : public SVGElement {
    explicit SVGFEComponentTransferElement(Handle h) noexcept;

public:
    explicit SVGFEComponentTransferElement(const emlite::Val &val) noexcept;
    static SVGFEComponentTransferElement take_ownership(Handle h) noexcept;

    SVGFEComponentTransferElement clone() const noexcept;
    SVGAnimatedString in1() const;
    SVGAnimatedLength x() const;
    SVGAnimatedLength y() const;
    SVGAnimatedLength width() const;
    SVGAnimatedLength height() const;
    SVGAnimatedString result() const;
};

