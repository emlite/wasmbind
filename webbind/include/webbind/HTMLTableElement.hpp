#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "HTMLElement.hpp"

namespace webbind {

class HTMLTableCaptionElement;
class HTMLTableSectionElement;
class HTMLCollection;
class HTMLTableRowElement;

/// Interface HTMLTableElement
/// [`HTMLTableElement`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTableElement)
class HTMLTableElement : public HTMLElement {
    explicit HTMLTableElement(Handle h) noexcept;
public:
    explicit HTMLTableElement(const emlite::Val &val) noexcept;
    static HTMLTableElement take_ownership(Handle h) noexcept;
    [[nodiscard]] HTMLTableElement clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new HTMLTableElement(..)` constructor, creating a new HTMLTableElement instance
    HTMLTableElement();
    /// Getter of the `caption` attribute.
    /// [`HTMLTableElement.caption`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTableElement/caption)
    [[nodiscard]] HTMLTableCaptionElement caption() const;
    /// Setter of the `caption` attribute.
    /// [`HTMLTableElement.caption`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTableElement/caption)
    void caption(const HTMLTableCaptionElement& value);
    /// The createCaption method.
    /// [`HTMLTableElement.createCaption`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTableElement/createCaption)
    HTMLTableCaptionElement createCaption();
    /// The deleteCaption method.
    /// [`HTMLTableElement.deleteCaption`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTableElement/deleteCaption)
    jsbind::Undefined deleteCaption();
    /// Getter of the `tHead` attribute.
    /// [`HTMLTableElement.tHead`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTableElement/tHead)
    [[nodiscard]] HTMLTableSectionElement tHead() const;
    /// Setter of the `tHead` attribute.
    /// [`HTMLTableElement.tHead`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTableElement/tHead)
    void tHead(const HTMLTableSectionElement& value);
    /// The createTHead method.
    /// [`HTMLTableElement.createTHead`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTableElement/createTHead)
    HTMLTableSectionElement createTHead();
    /// The deleteTHead method.
    /// [`HTMLTableElement.deleteTHead`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTableElement/deleteTHead)
    jsbind::Undefined deleteTHead();
    /// Getter of the `tFoot` attribute.
    /// [`HTMLTableElement.tFoot`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTableElement/tFoot)
    [[nodiscard]] HTMLTableSectionElement tFoot() const;
    /// Setter of the `tFoot` attribute.
    /// [`HTMLTableElement.tFoot`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTableElement/tFoot)
    void tFoot(const HTMLTableSectionElement& value);
    /// The createTFoot method.
    /// [`HTMLTableElement.createTFoot`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTableElement/createTFoot)
    HTMLTableSectionElement createTFoot();
    /// The deleteTFoot method.
    /// [`HTMLTableElement.deleteTFoot`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTableElement/deleteTFoot)
    jsbind::Undefined deleteTFoot();
    /// Getter of the `tBodies` attribute.
    /// [`HTMLTableElement.tBodies`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTableElement/tBodies)
    [[nodiscard]] HTMLCollection tBodies() const;
    /// The createTBody method.
    /// [`HTMLTableElement.createTBody`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTableElement/createTBody)
    HTMLTableSectionElement createTBody();
    /// Getter of the `rows` attribute.
    /// [`HTMLTableElement.rows`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTableElement/rows)
    [[nodiscard]] HTMLCollection rows() const;
    /// The insertRow method.
    /// [`HTMLTableElement.insertRow`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTableElement/insertRow)
    HTMLTableRowElement insertRow();
    /// The insertRow method.
    /// [`HTMLTableElement.insertRow`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTableElement/insertRow)
    HTMLTableRowElement insertRow(long index);
    /// The deleteRow method.
    /// [`HTMLTableElement.deleteRow`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTableElement/deleteRow)
    jsbind::Undefined deleteRow(long index);
    /// Getter of the `align` attribute.
    /// [`HTMLTableElement.align`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTableElement/align)
    [[nodiscard]] jsbind::String align() const;
    /// Setter of the `align` attribute.
    /// [`HTMLTableElement.align`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTableElement/align)
    void align(const jsbind::String& value);
    /// Getter of the `border` attribute.
    /// [`HTMLTableElement.border`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTableElement/border)
    [[nodiscard]] jsbind::String border() const;
    /// Setter of the `border` attribute.
    /// [`HTMLTableElement.border`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTableElement/border)
    void border(const jsbind::String& value);
    /// Getter of the `frame` attribute.
    /// [`HTMLTableElement.frame`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTableElement/frame)
    [[nodiscard]] jsbind::String frame() const;
    /// Setter of the `frame` attribute.
    /// [`HTMLTableElement.frame`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTableElement/frame)
    void frame(const jsbind::String& value);
    /// Getter of the `rules` attribute.
    /// [`HTMLTableElement.rules`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTableElement/rules)
    [[nodiscard]] jsbind::String rules() const;
    /// Setter of the `rules` attribute.
    /// [`HTMLTableElement.rules`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTableElement/rules)
    void rules(const jsbind::String& value);
    /// Getter of the `summary` attribute.
    /// [`HTMLTableElement.summary`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTableElement/summary)
    [[nodiscard]] jsbind::String summary() const;
    /// Setter of the `summary` attribute.
    /// [`HTMLTableElement.summary`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTableElement/summary)
    void summary(const jsbind::String& value);
    /// Getter of the `width` attribute.
    /// [`HTMLTableElement.width`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTableElement/width)
    [[nodiscard]] jsbind::String width() const;
    /// Setter of the `width` attribute.
    /// [`HTMLTableElement.width`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTableElement/width)
    void width(const jsbind::String& value);
    /// Getter of the `bgColor` attribute.
    /// [`HTMLTableElement.bgColor`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTableElement/bgColor)
    [[nodiscard]] jsbind::String bgColor() const;
    /// Setter of the `bgColor` attribute.
    /// [`HTMLTableElement.bgColor`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTableElement/bgColor)
    void bgColor(const jsbind::String& value);
    /// Getter of the `cellPadding` attribute.
    /// [`HTMLTableElement.cellPadding`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTableElement/cellPadding)
    [[nodiscard]] jsbind::String cellPadding() const;
    /// Setter of the `cellPadding` attribute.
    /// [`HTMLTableElement.cellPadding`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTableElement/cellPadding)
    void cellPadding(const jsbind::String& value);
    /// Getter of the `cellSpacing` attribute.
    /// [`HTMLTableElement.cellSpacing`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTableElement/cellSpacing)
    [[nodiscard]] jsbind::String cellSpacing() const;
    /// Setter of the `cellSpacing` attribute.
    /// [`HTMLTableElement.cellSpacing`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTableElement/cellSpacing)
    void cellSpacing(const jsbind::String& value);
};

} // namespace webbind