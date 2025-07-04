#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


class SVGStringList : public emlite::Val {
    explicit SVGStringList(Handle h) noexcept;

public:
    explicit SVGStringList(const emlite::Val &val) noexcept;
    static SVGStringList take_ownership(Handle h) noexcept;

    SVGStringList clone() const noexcept;
    unsigned long length() const;
    unsigned long numberOfItems() const;
    jsbind::Undefined clear();
    jsbind::DOMString initialize(const jsbind::DOMString& newItem);
    jsbind::DOMString getItem(unsigned long index);
    jsbind::DOMString insertItemBefore(const jsbind::DOMString& newItem, unsigned long index);
    jsbind::DOMString replaceItem(const jsbind::DOMString& newItem, unsigned long index);
    jsbind::DOMString removeItem(unsigned long index);
    jsbind::DOMString appendItem(const jsbind::DOMString& newItem);
};

