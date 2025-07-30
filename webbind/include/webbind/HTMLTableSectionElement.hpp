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
    HTMLTableRowElement insertRow();
    HTMLTableRowElement insertRow(long index);
    jsbind::Undefined deleteRow(long index);
    jsbind::String align() const;
    void align(const jsbind::String& value);
    jsbind::String ch() const;
    void ch(const jsbind::String& value);
    jsbind::String chOff() const;
    void chOff(const jsbind::String& value);
    jsbind::String vAlign() const;
    void vAlign(const jsbind::String& value);
};

