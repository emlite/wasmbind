#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "HTMLElement.hpp"
#include "enums.hpp"


class HTMLSpanElement : public HTMLElement {
    explicit HTMLSpanElement(Handle h) noexcept;

public:
    explicit HTMLSpanElement(const emlite::Val &val) noexcept;
    static HTMLSpanElement take_ownership(Handle h) noexcept;

    HTMLSpanElement clone() const noexcept;
    HTMLSpanElement();
};

