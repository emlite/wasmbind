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
    jsbind::String initialize(const jsbind::String& newItem);
    jsbind::String getItem(unsigned long index);
    jsbind::String insertItemBefore(const jsbind::String& newItem, unsigned long index);
    jsbind::String replaceItem(const jsbind::String& newItem, unsigned long index);
    jsbind::String removeItem(unsigned long index);
    jsbind::String appendItem(const jsbind::String& newItem);
};

