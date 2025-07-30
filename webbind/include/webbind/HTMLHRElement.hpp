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
    jsbind::String align() const;
    void align(const jsbind::String& value);
    jsbind::String color() const;
    void color(const jsbind::String& value);
    bool noShade() const;
    void noShade(bool value);
    jsbind::String size() const;
    void size(const jsbind::String& value);
    jsbind::String width() const;
    void width(const jsbind::String& value);
};

