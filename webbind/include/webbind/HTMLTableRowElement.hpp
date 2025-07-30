#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "HTMLElement.hpp"
#include "enums.hpp"

class HTMLCollection;
class HTMLTableCellElement;


class HTMLTableRowElement : public HTMLElement {
    explicit HTMLTableRowElement(Handle h) noexcept;

public:
    explicit HTMLTableRowElement(const emlite::Val &val) noexcept;
    static HTMLTableRowElement take_ownership(Handle h) noexcept;

    HTMLTableRowElement clone() const noexcept;
    HTMLTableRowElement();
    long rowIndex() const;
    long sectionRowIndex() const;
    HTMLCollection cells() const;
    HTMLTableCellElement insertCell();
    HTMLTableCellElement insertCell(long index);
    jsbind::Undefined deleteCell(long index);
    jsbind::String align() const;
    void align(const jsbind::String& value);
    jsbind::String ch() const;
    void ch(const jsbind::String& value);
    jsbind::String chOff() const;
    void chOff(const jsbind::String& value);
    jsbind::String vAlign() const;
    void vAlign(const jsbind::String& value);
    jsbind::String bgColor() const;
    void bgColor(const jsbind::String& value);
};

