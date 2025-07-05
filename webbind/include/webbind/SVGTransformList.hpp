#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "SVGSVGElement.hpp"
#include "enums.hpp"

class SVGTransform;


class SVGTransformList : public emlite::Val {
    explicit SVGTransformList(Handle h) noexcept;

public:
    explicit SVGTransformList(const emlite::Val &val) noexcept;
    static SVGTransformList take_ownership(Handle h) noexcept;

    SVGTransformList clone() const noexcept;
    unsigned long length() const;
    unsigned long numberOfItems() const;
    jsbind::Undefined clear();
    SVGTransform initialize(const SVGTransform& newItem);
    SVGTransform getItem(unsigned long index);
    SVGTransform insertItemBefore(const SVGTransform& newItem, unsigned long index);
    SVGTransform replaceItem(const SVGTransform& newItem, unsigned long index);
    SVGTransform removeItem(unsigned long index);
    SVGTransform appendItem(const SVGTransform& newItem);
    SVGTransform createSVGTransformFromMatrix();
    SVGTransform createSVGTransformFromMatrix(const DOMMatrix2DInit& matrix);
    SVGTransform consolidate();
};

