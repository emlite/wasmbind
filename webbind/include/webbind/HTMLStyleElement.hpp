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
    jsbind::DOMString media() const;
    void media(const jsbind::DOMString& value);
    DOMTokenList blocking() const;
    jsbind::DOMString type() const;
    void type(const jsbind::DOMString& value);
    CSSStyleSheet sheet() const;
};

