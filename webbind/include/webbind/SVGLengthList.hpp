#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class SVGLength;


class SVGLengthList : public emlite::Val {
    explicit SVGLengthList(Handle h) noexcept;

public:
    explicit SVGLengthList(const emlite::Val &val) noexcept;
    static SVGLengthList take_ownership(Handle h) noexcept;

    SVGLengthList clone() const noexcept;
    unsigned long length() const;
    unsigned long numberOfItems() const;
    jsbind::Undefined clear();
    SVGLength initialize(const SVGLength& newItem);
    SVGLength getItem(unsigned long index);
    SVGLength insertItemBefore(const SVGLength& newItem, unsigned long index);
    SVGLength replaceItem(const SVGLength& newItem, unsigned long index);
    SVGLength removeItem(unsigned long index);
    SVGLength appendItem(const SVGLength& newItem);
};

