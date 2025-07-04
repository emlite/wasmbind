#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class SVGNumber;


class SVGNumberList : public emlite::Val {
    explicit SVGNumberList(Handle h) noexcept;

public:
    explicit SVGNumberList(const emlite::Val &val) noexcept;
    static SVGNumberList take_ownership(Handle h) noexcept;

    SVGNumberList clone() const noexcept;
    unsigned long length() const;
    unsigned long numberOfItems() const;
    jsbind::Undefined clear();
    SVGNumber initialize(const SVGNumber& newItem);
    SVGNumber getItem(unsigned long index);
    SVGNumber insertItemBefore(const SVGNumber& newItem, unsigned long index);
    SVGNumber replaceItem(const SVGNumber& newItem, unsigned long index);
    SVGNumber removeItem(unsigned long index);
    SVGNumber appendItem(const SVGNumber& newItem);
};

