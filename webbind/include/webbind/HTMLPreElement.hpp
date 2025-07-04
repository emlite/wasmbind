#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "HTMLElement.hpp"
#include "enums.hpp"


class HTMLPreElement : public HTMLElement {
    explicit HTMLPreElement(Handle h) noexcept;

public:
    explicit HTMLPreElement(const emlite::Val &val) noexcept;
    static HTMLPreElement take_ownership(Handle h) noexcept;

    HTMLPreElement clone() const noexcept;
    HTMLPreElement();
    long width() const;
    void width(long value);
};

