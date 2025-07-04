#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "HTMLElement.hpp"
#include "enums.hpp"


class HTMLPictureElement : public HTMLElement {
    explicit HTMLPictureElement(Handle h) noexcept;

public:
    explicit HTMLPictureElement(const emlite::Val &val) noexcept;
    static HTMLPictureElement take_ownership(Handle h) noexcept;

    HTMLPictureElement clone() const noexcept;
    HTMLPictureElement();
};

