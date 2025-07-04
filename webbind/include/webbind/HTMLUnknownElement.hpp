#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "HTMLElement.hpp"
#include "enums.hpp"


class HTMLUnknownElement : public HTMLElement {
    explicit HTMLUnknownElement(Handle h) noexcept;

public:
    explicit HTMLUnknownElement(const emlite::Val &val) noexcept;
    static HTMLUnknownElement take_ownership(Handle h) noexcept;

    HTMLUnknownElement clone() const noexcept;
};

