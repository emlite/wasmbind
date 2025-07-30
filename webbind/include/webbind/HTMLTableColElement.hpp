#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "HTMLElement.hpp"
#include "enums.hpp"


class HTMLTableColElement : public HTMLElement {
    explicit HTMLTableColElement(Handle h) noexcept;

public:
    explicit HTMLTableColElement(const emlite::Val &val) noexcept;
    static HTMLTableColElement take_ownership(Handle h) noexcept;

    HTMLTableColElement clone() const noexcept;
    HTMLTableColElement();
    unsigned long span() const;
    void span(unsigned long value);
    jsbind::String align() const;
    void align(const jsbind::String& value);
    jsbind::String ch() const;
    void ch(const jsbind::String& value);
    jsbind::String chOff() const;
    void chOff(const jsbind::String& value);
    jsbind::String vAlign() const;
    void vAlign(const jsbind::String& value);
    jsbind::String width() const;
    void width(const jsbind::String& value);
};

