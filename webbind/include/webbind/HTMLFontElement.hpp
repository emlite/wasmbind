#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "HTMLElement.hpp"
#include "enums.hpp"


class HTMLFontElement : public HTMLElement {
    explicit HTMLFontElement(Handle h) noexcept;

public:
    explicit HTMLFontElement(const emlite::Val &val) noexcept;
    static HTMLFontElement take_ownership(Handle h) noexcept;

    HTMLFontElement clone() const noexcept;
    HTMLFontElement();
    jsbind::String color() const;
    void color(const jsbind::String& value);
    jsbind::String face() const;
    void face(const jsbind::String& value);
    jsbind::String size() const;
    void size(const jsbind::String& value);
};

