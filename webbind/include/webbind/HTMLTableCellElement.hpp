#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "HTMLElement.hpp"
#include "enums.hpp"


class HTMLTableCellElement : public HTMLElement {
    explicit HTMLTableCellElement(Handle h) noexcept;

public:
    explicit HTMLTableCellElement(const emlite::Val &val) noexcept;
    static HTMLTableCellElement take_ownership(Handle h) noexcept;

    HTMLTableCellElement clone() const noexcept;
    HTMLTableCellElement();
    unsigned long colSpan() const;
    void colSpan(unsigned long value);
    unsigned long rowSpan() const;
    void rowSpan(unsigned long value);
    jsbind::DOMString headers() const;
    void headers(const jsbind::DOMString& value);
    long cellIndex() const;
    jsbind::DOMString scope() const;
    void scope(const jsbind::DOMString& value);
    jsbind::DOMString abbr() const;
    void abbr(const jsbind::DOMString& value);
    jsbind::DOMString align() const;
    void align(const jsbind::DOMString& value);
    jsbind::DOMString axis() const;
    void axis(const jsbind::DOMString& value);
    jsbind::DOMString height() const;
    void height(const jsbind::DOMString& value);
    jsbind::DOMString width() const;
    void width(const jsbind::DOMString& value);
    jsbind::DOMString ch() const;
    void ch(const jsbind::DOMString& value);
    jsbind::DOMString chOff() const;
    void chOff(const jsbind::DOMString& value);
    bool noWrap() const;
    void noWrap(bool value);
    jsbind::DOMString vAlign() const;
    void vAlign(const jsbind::DOMString& value);
    jsbind::DOMString bgColor() const;
    void bgColor(const jsbind::DOMString& value);
};

