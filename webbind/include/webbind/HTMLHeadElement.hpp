#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "HTMLElement.hpp"
#include "enums.hpp"


class HTMLHeadElement : public HTMLElement {
    explicit HTMLHeadElement(Handle h) noexcept;

public:
    explicit HTMLHeadElement(const emlite::Val &val) noexcept;
    static HTMLHeadElement take_ownership(Handle h) noexcept;

    HTMLHeadElement clone() const noexcept;
    HTMLHeadElement();
};

