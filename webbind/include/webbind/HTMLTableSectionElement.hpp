#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "HTMLElement.hpp"
#include "enums.hpp"

class HTMLCollection;
class HTMLTableRowElement;


/// The HTMLTableSectionElement class.
/// [`HTMLTableSectionElement`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTableSectionElement)
class HTMLTableSectionElement : public HTMLElement {
    explicit HTMLTableSectionElement(Handle h) noexcept;

public:
    explicit HTMLTableSectionElement(const emlite::Val &val) noexcept;
    static HTMLTableSectionElement take_ownership(Handle h) noexcept;

    [[nodiscard]] HTMLTableSectionElement clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new HTMLTableSectionElement(..)` constructor, creating a new HTMLTableSectionElement instance
    HTMLTableSectionElement();
    /// Getter of the `rows` attribute.
    /// [`HTMLTableSectionElement.rows`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTableSectionElement/rows)
    [[nodiscard]] HTMLCollection rows() const;
    /// The insertRow method.
    /// [`HTMLTableSectionElement.insertRow`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTableSectionElement/insertRow)
    HTMLTableRowElement insertRow();
    /// The insertRow method.
    /// [`HTMLTableSectionElement.insertRow`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTableSectionElement/insertRow)
    HTMLTableRowElement insertRow(long index);
    /// The deleteRow method.
    /// [`HTMLTableSectionElement.deleteRow`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTableSectionElement/deleteRow)
    jsbind::Undefined deleteRow(long index);
    /// Getter of the `align` attribute.
    /// [`HTMLTableSectionElement.align`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTableSectionElement/align)
    [[nodiscard]] jsbind::String align() const;
    /// Setter of the `align` attribute.
    /// [`HTMLTableSectionElement.align`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTableSectionElement/align)
    void align(const jsbind::String& value);
    /// Getter of the `ch` attribute.
    /// [`HTMLTableSectionElement.ch`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTableSectionElement/ch)
    [[nodiscard]] jsbind::String ch() const;
    /// Setter of the `ch` attribute.
    /// [`HTMLTableSectionElement.ch`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTableSectionElement/ch)
    void ch(const jsbind::String& value);
    /// Getter of the `chOff` attribute.
    /// [`HTMLTableSectionElement.chOff`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTableSectionElement/chOff)
    [[nodiscard]] jsbind::String chOff() const;
    /// Setter of the `chOff` attribute.
    /// [`HTMLTableSectionElement.chOff`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTableSectionElement/chOff)
    void chOff(const jsbind::String& value);
    /// Getter of the `vAlign` attribute.
    /// [`HTMLTableSectionElement.vAlign`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTableSectionElement/vAlign)
    [[nodiscard]] jsbind::String vAlign() const;
    /// Setter of the `vAlign` attribute.
    /// [`HTMLTableSectionElement.vAlign`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTableSectionElement/vAlign)
    void vAlign(const jsbind::String& value);
};

