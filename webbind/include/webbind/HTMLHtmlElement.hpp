#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "HTMLElement.hpp"
#include "enums.hpp"


class HTMLHtmlElement : public HTMLElement {
    explicit HTMLHtmlElement(Handle h) noexcept;

public:
    explicit HTMLHtmlElement(const emlite::Val &val) noexcept;
    static HTMLHtmlElement take_ownership(Handle h) noexcept;

    HTMLHtmlElement clone() const noexcept;
    HTMLHtmlElement();
    jsbind::DOMString version() const;
    void version(const jsbind::DOMString& value);
};

