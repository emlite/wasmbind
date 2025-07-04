#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "HTMLElement.hpp"
#include "enums.hpp"

class HTMLCollection;
class HTMLTableRowElement;


class HTMLTableSectionElement : public HTMLElement {
    explicit HTMLTableSectionElement(Handle h) noexcept;

public:
    explicit HTMLTableSectionElement(const emlite::Val &val) noexcept;
    static HTMLTableSectionElement take_ownership(Handle h) noexcept;

    HTMLTableSectionElement clone() const noexcept;
    HTMLTableSectionElement();
    HTMLCollection rows() const;
    HTMLTableRowElement insertRow(long index);
    jsbind::Undefined deleteRow(long index);
    jsbind::DOMString align() const;
    void align(const jsbind::DOMString& value);
    jsbind::DOMString ch() const;
    void ch(const jsbind::DOMString& value);
    jsbind::DOMString chOff() const;
    void chOff(const jsbind::DOMString& value);
    jsbind::DOMString vAlign() const;
    void vAlign(const jsbind::DOMString& value);
};

