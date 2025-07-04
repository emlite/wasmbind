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
    jsbind::DOMString align() const;
    void align(const jsbind::DOMString& value);
    jsbind::DOMString ch() const;
    void ch(const jsbind::DOMString& value);
    jsbind::DOMString chOff() const;
    void chOff(const jsbind::DOMString& value);
    jsbind::DOMString vAlign() const;
    void vAlign(const jsbind::DOMString& value);
    jsbind::DOMString width() const;
    void width(const jsbind::DOMString& value);
};

