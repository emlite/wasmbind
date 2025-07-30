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
    jsbind::String headers() const;
    void headers(const jsbind::String& value);
    long cellIndex() const;
    jsbind::String scope() const;
    void scope(const jsbind::String& value);
    jsbind::String abbr() const;
    void abbr(const jsbind::String& value);
    jsbind::String align() const;
    void align(const jsbind::String& value);
    jsbind::String axis() const;
    void axis(const jsbind::String& value);
    jsbind::String height() const;
    void height(const jsbind::String& value);
    jsbind::String width() const;
    void width(const jsbind::String& value);
    jsbind::String ch() const;
    void ch(const jsbind::String& value);
    jsbind::String chOff() const;
    void chOff(const jsbind::String& value);
    bool noWrap() const;
    void noWrap(bool value);
    jsbind::String vAlign() const;
    void vAlign(const jsbind::String& value);
    jsbind::String bgColor() const;
    void bgColor(const jsbind::String& value);
};

