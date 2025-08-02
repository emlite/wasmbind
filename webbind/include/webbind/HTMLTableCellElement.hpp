#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "HTMLElement.hpp"
#include "enums.hpp"


/// The HTMLTableCellElement class.
/// [`HTMLTableCellElement`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTableCellElement)
class HTMLTableCellElement : public HTMLElement {
    explicit HTMLTableCellElement(Handle h) noexcept;

public:
    explicit HTMLTableCellElement(const emlite::Val &val) noexcept;
    static HTMLTableCellElement take_ownership(Handle h) noexcept;

    [[nodiscard]] HTMLTableCellElement clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new HTMLTableCellElement(..)` constructor, creating a new HTMLTableCellElement instance
    HTMLTableCellElement();
    /// Getter of the `colSpan` attribute.
    /// [`HTMLTableCellElement.colSpan`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTableCellElement/colSpan)
    [[nodiscard]] unsigned long colSpan() const;
    /// Setter of the `colSpan` attribute.
    /// [`HTMLTableCellElement.colSpan`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTableCellElement/colSpan)
    void colSpan(unsigned long value);
    /// Getter of the `rowSpan` attribute.
    /// [`HTMLTableCellElement.rowSpan`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTableCellElement/rowSpan)
    [[nodiscard]] unsigned long rowSpan() const;
    /// Setter of the `rowSpan` attribute.
    /// [`HTMLTableCellElement.rowSpan`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTableCellElement/rowSpan)
    void rowSpan(unsigned long value);
    /// Getter of the `headers` attribute.
    /// [`HTMLTableCellElement.headers`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTableCellElement/headers)
    [[nodiscard]] jsbind::String headers() const;
    /// Setter of the `headers` attribute.
    /// [`HTMLTableCellElement.headers`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTableCellElement/headers)
    void headers(const jsbind::String& value);
    /// Getter of the `cellIndex` attribute.
    /// [`HTMLTableCellElement.cellIndex`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTableCellElement/cellIndex)
    [[nodiscard]] long cellIndex() const;
    /// Getter of the `scope` attribute.
    /// [`HTMLTableCellElement.scope`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTableCellElement/scope)
    [[nodiscard]] jsbind::String scope() const;
    /// Setter of the `scope` attribute.
    /// [`HTMLTableCellElement.scope`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTableCellElement/scope)
    void scope(const jsbind::String& value);
    /// Getter of the `abbr` attribute.
    /// [`HTMLTableCellElement.abbr`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTableCellElement/abbr)
    [[nodiscard]] jsbind::String abbr() const;
    /// Setter of the `abbr` attribute.
    /// [`HTMLTableCellElement.abbr`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTableCellElement/abbr)
    void abbr(const jsbind::String& value);
    /// Getter of the `align` attribute.
    /// [`HTMLTableCellElement.align`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTableCellElement/align)
    [[nodiscard]] jsbind::String align() const;
    /// Setter of the `align` attribute.
    /// [`HTMLTableCellElement.align`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTableCellElement/align)
    void align(const jsbind::String& value);
    /// Getter of the `axis` attribute.
    /// [`HTMLTableCellElement.axis`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTableCellElement/axis)
    [[nodiscard]] jsbind::String axis() const;
    /// Setter of the `axis` attribute.
    /// [`HTMLTableCellElement.axis`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTableCellElement/axis)
    void axis(const jsbind::String& value);
    /// Getter of the `height` attribute.
    /// [`HTMLTableCellElement.height`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTableCellElement/height)
    [[nodiscard]] jsbind::String height() const;
    /// Setter of the `height` attribute.
    /// [`HTMLTableCellElement.height`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTableCellElement/height)
    void height(const jsbind::String& value);
    /// Getter of the `width` attribute.
    /// [`HTMLTableCellElement.width`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTableCellElement/width)
    [[nodiscard]] jsbind::String width() const;
    /// Setter of the `width` attribute.
    /// [`HTMLTableCellElement.width`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTableCellElement/width)
    void width(const jsbind::String& value);
    /// Getter of the `ch` attribute.
    /// [`HTMLTableCellElement.ch`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTableCellElement/ch)
    [[nodiscard]] jsbind::String ch() const;
    /// Setter of the `ch` attribute.
    /// [`HTMLTableCellElement.ch`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTableCellElement/ch)
    void ch(const jsbind::String& value);
    /// Getter of the `chOff` attribute.
    /// [`HTMLTableCellElement.chOff`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTableCellElement/chOff)
    [[nodiscard]] jsbind::String chOff() const;
    /// Setter of the `chOff` attribute.
    /// [`HTMLTableCellElement.chOff`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTableCellElement/chOff)
    void chOff(const jsbind::String& value);
    /// Getter of the `noWrap` attribute.
    /// [`HTMLTableCellElement.noWrap`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTableCellElement/noWrap)
    [[nodiscard]] bool noWrap() const;
    /// Setter of the `noWrap` attribute.
    /// [`HTMLTableCellElement.noWrap`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTableCellElement/noWrap)
    void noWrap(bool value);
    /// Getter of the `vAlign` attribute.
    /// [`HTMLTableCellElement.vAlign`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTableCellElement/vAlign)
    [[nodiscard]] jsbind::String vAlign() const;
    /// Setter of the `vAlign` attribute.
    /// [`HTMLTableCellElement.vAlign`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTableCellElement/vAlign)
    void vAlign(const jsbind::String& value);
    /// Getter of the `bgColor` attribute.
    /// [`HTMLTableCellElement.bgColor`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTableCellElement/bgColor)
    [[nodiscard]] jsbind::String bgColor() const;
    /// Setter of the `bgColor` attribute.
    /// [`HTMLTableCellElement.bgColor`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTableCellElement/bgColor)
    void bgColor(const jsbind::String& value);
};

