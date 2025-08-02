#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "HTMLElement.hpp"
#include "enums.hpp"

class HTMLCollection;
class HTMLTableCellElement;


/// The HTMLTableRowElement class.
/// [`HTMLTableRowElement`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTableRowElement)
class HTMLTableRowElement : public HTMLElement {
    explicit HTMLTableRowElement(Handle h) noexcept;

public:
    explicit HTMLTableRowElement(const emlite::Val &val) noexcept;
    static HTMLTableRowElement take_ownership(Handle h) noexcept;

    [[nodiscard]] HTMLTableRowElement clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new HTMLTableRowElement(..)` constructor, creating a new HTMLTableRowElement instance
    HTMLTableRowElement();
    /// Getter of the `rowIndex` attribute.
    /// [`HTMLTableRowElement.rowIndex`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTableRowElement/rowIndex)
    [[nodiscard]] long rowIndex() const;
    /// Getter of the `sectionRowIndex` attribute.
    /// [`HTMLTableRowElement.sectionRowIndex`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTableRowElement/sectionRowIndex)
    [[nodiscard]] long sectionRowIndex() const;
    /// Getter of the `cells` attribute.
    /// [`HTMLTableRowElement.cells`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTableRowElement/cells)
    [[nodiscard]] HTMLCollection cells() const;
    /// The insertCell method.
    /// [`HTMLTableRowElement.insertCell`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTableRowElement/insertCell)
    HTMLTableCellElement insertCell();
    /// The insertCell method.
    /// [`HTMLTableRowElement.insertCell`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTableRowElement/insertCell)
    HTMLTableCellElement insertCell(long index);
    /// The deleteCell method.
    /// [`HTMLTableRowElement.deleteCell`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTableRowElement/deleteCell)
    jsbind::Undefined deleteCell(long index);
    /// Getter of the `align` attribute.
    /// [`HTMLTableRowElement.align`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTableRowElement/align)
    [[nodiscard]] jsbind::String align() const;
    /// Setter of the `align` attribute.
    /// [`HTMLTableRowElement.align`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTableRowElement/align)
    void align(const jsbind::String& value);
    /// Getter of the `ch` attribute.
    /// [`HTMLTableRowElement.ch`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTableRowElement/ch)
    [[nodiscard]] jsbind::String ch() const;
    /// Setter of the `ch` attribute.
    /// [`HTMLTableRowElement.ch`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTableRowElement/ch)
    void ch(const jsbind::String& value);
    /// Getter of the `chOff` attribute.
    /// [`HTMLTableRowElement.chOff`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTableRowElement/chOff)
    [[nodiscard]] jsbind::String chOff() const;
    /// Setter of the `chOff` attribute.
    /// [`HTMLTableRowElement.chOff`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTableRowElement/chOff)
    void chOff(const jsbind::String& value);
    /// Getter of the `vAlign` attribute.
    /// [`HTMLTableRowElement.vAlign`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTableRowElement/vAlign)
    [[nodiscard]] jsbind::String vAlign() const;
    /// Setter of the `vAlign` attribute.
    /// [`HTMLTableRowElement.vAlign`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTableRowElement/vAlign)
    void vAlign(const jsbind::String& value);
    /// Getter of the `bgColor` attribute.
    /// [`HTMLTableRowElement.bgColor`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTableRowElement/bgColor)
    [[nodiscard]] jsbind::String bgColor() const;
    /// Setter of the `bgColor` attribute.
    /// [`HTMLTableRowElement.bgColor`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTableRowElement/bgColor)
    void bgColor(const jsbind::String& value);
};

