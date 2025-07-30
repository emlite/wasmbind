#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "HTMLElement.hpp"
#include "enums.hpp"

class DOMTokenList;
class CSSStyleSheet;


class HTMLStyleElement : public HTMLElement {
    explicit HTMLStyleElement(Handle h) noexcept;

public:
    explicit HTMLStyleElement(const emlite::Val &val) noexcept;
    static HTMLStyleElement take_ownership(Handle h) noexcept;

    HTMLStyleElement clone() const noexcept;
    HTMLStyleElement();
    bool disabled() const;
    void disabled(bool value);
    jsbind::String media() const;
    void media(const jsbind::String& value);
    DOMTokenList blocking() const;
    jsbind::String type() const;
    void type(const jsbind::String& value);
    CSSStyleSheet sheet() const;
};

