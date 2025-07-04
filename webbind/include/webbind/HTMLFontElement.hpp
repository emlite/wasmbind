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
    jsbind::DOMString color() const;
    void color(const jsbind::DOMString& value);
    jsbind::DOMString face() const;
    void face(const jsbind::DOMString& value);
    jsbind::DOMString size() const;
    void size(const jsbind::DOMString& value);
};

