#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "HTMLElement.hpp"
#include "enums.hpp"


class HTMLParagraphElement : public HTMLElement {
    explicit HTMLParagraphElement(Handle h) noexcept;

public:
    explicit HTMLParagraphElement(const emlite::Val &val) noexcept;
    static HTMLParagraphElement take_ownership(Handle h) noexcept;

    HTMLParagraphElement clone() const noexcept;
    HTMLParagraphElement();
    jsbind::String align() const;
    void align(const jsbind::String& value);
};

