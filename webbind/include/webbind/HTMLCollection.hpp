#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class Element;


class HTMLCollection : public emlite::Val {
    explicit HTMLCollection(Handle h) noexcept;

public:
    explicit HTMLCollection(const emlite::Val &val) noexcept;
    static HTMLCollection take_ownership(Handle h) noexcept;

    HTMLCollection clone() const noexcept;
    unsigned long length() const;
    Element item(unsigned long index);
    Element namedItem(const jsbind::DOMString& name);
};

