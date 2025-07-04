#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "HTMLElement.hpp"
#include "enums.hpp"


class HTMLHRElement : public HTMLElement {
    explicit HTMLHRElement(Handle h) noexcept;

public:
    explicit HTMLHRElement(const emlite::Val &val) noexcept;
    static HTMLHRElement take_ownership(Handle h) noexcept;

    HTMLHRElement clone() const noexcept;
    HTMLHRElement();
    jsbind::DOMString align() const;
    void align(const jsbind::DOMString& value);
    jsbind::DOMString color() const;
    void color(const jsbind::DOMString& value);
    bool noShade() const;
    void noShade(bool value);
    jsbind::DOMString size() const;
    void size(const jsbind::DOMString& value);
    jsbind::DOMString width() const;
    void width(const jsbind::DOMString& value);
};

