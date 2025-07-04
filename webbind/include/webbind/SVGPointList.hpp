#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class DOMPoint;


class SVGPointList : public emlite::Val {
    explicit SVGPointList(Handle h) noexcept;

public:
    explicit SVGPointList(const emlite::Val &val) noexcept;
    static SVGPointList take_ownership(Handle h) noexcept;

    SVGPointList clone() const noexcept;
    unsigned long length() const;
    unsigned long numberOfItems() const;
    jsbind::Undefined clear();
    DOMPoint initialize(const DOMPoint& newItem);
    DOMPoint getItem(unsigned long index);
    DOMPoint insertItemBefore(const DOMPoint& newItem, unsigned long index);
    DOMPoint replaceItem(const DOMPoint& newItem, unsigned long index);
    DOMPoint removeItem(unsigned long index);
    DOMPoint appendItem(const DOMPoint& newItem);
};

