#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "HTMLElement.hpp"
#include "enums.hpp"

class HTMLTableCaptionElement;
class HTMLTableSectionElement;
class HTMLCollection;
class HTMLTableRowElement;


class HTMLTableElement : public HTMLElement {
    explicit HTMLTableElement(Handle h) noexcept;

public:
    explicit HTMLTableElement(const emlite::Val &val) noexcept;
    static HTMLTableElement take_ownership(Handle h) noexcept;

    HTMLTableElement clone() const noexcept;
    HTMLTableElement();
    HTMLTableCaptionElement caption() const;
    void caption(const HTMLTableCaptionElement& value);
    HTMLTableCaptionElement createCaption();
    jsbind::Undefined deleteCaption();
    HTMLTableSectionElement tHead() const;
    void tHead(const HTMLTableSectionElement& value);
    HTMLTableSectionElement createTHead();
    jsbind::Undefined deleteTHead();
    HTMLTableSectionElement tFoot() const;
    void tFoot(const HTMLTableSectionElement& value);
    HTMLTableSectionElement createTFoot();
    jsbind::Undefined deleteTFoot();
    HTMLCollection tBodies() const;
    HTMLTableSectionElement createTBody();
    HTMLCollection rows() const;
    HTMLTableRowElement insertRow();
    HTMLTableRowElement insertRow(long index);
    jsbind::Undefined deleteRow(long index);
    jsbind::String align() const;
    void align(const jsbind::String& value);
    jsbind::String border() const;
    void border(const jsbind::String& value);
    jsbind::String frame() const;
    void frame(const jsbind::String& value);
    jsbind::String rules() const;
    void rules(const jsbind::String& value);
    jsbind::String summary() const;
    void summary(const jsbind::String& value);
    jsbind::String width() const;
    void width(const jsbind::String& value);
    jsbind::String bgColor() const;
    void bgColor(const jsbind::String& value);
    jsbind::String cellPadding() const;
    void cellPadding(const jsbind::String& value);
    jsbind::String cellSpacing() const;
    void cellSpacing(const jsbind::String& value);
};

