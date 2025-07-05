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
    jsbind::DOMString align() const;
    void align(const jsbind::DOMString& value);
    jsbind::DOMString border() const;
    void border(const jsbind::DOMString& value);
    jsbind::DOMString frame() const;
    void frame(const jsbind::DOMString& value);
    jsbind::DOMString rules() const;
    void rules(const jsbind::DOMString& value);
    jsbind::DOMString summary() const;
    void summary(const jsbind::DOMString& value);
    jsbind::DOMString width() const;
    void width(const jsbind::DOMString& value);
    jsbind::DOMString bgColor() const;
    void bgColor(const jsbind::DOMString& value);
    jsbind::DOMString cellPadding() const;
    void cellPadding(const jsbind::DOMString& value);
    jsbind::DOMString cellSpacing() const;
    void cellSpacing(const jsbind::DOMString& value);
};

