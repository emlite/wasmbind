#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "HTMLElement.hpp"
#include "enums.hpp"


class HTMLModelElement : public HTMLElement {
    explicit HTMLModelElement(Handle h) noexcept;

public:
    explicit HTMLModelElement(const emlite::Val &val) noexcept;
    static HTMLModelElement take_ownership(Handle h) noexcept;

    HTMLModelElement clone() const noexcept;
};

