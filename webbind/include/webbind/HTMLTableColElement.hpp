#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "HTMLElement.hpp"

namespace webbind {

/// Interface HTMLTableColElement
/// [`HTMLTableColElement`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTableColElement)
class HTMLTableColElement : public HTMLElement {
    explicit HTMLTableColElement(Handle h) noexcept;
public:
    explicit HTMLTableColElement(const emlite::Val &val) noexcept;
    static HTMLTableColElement take_ownership(Handle h) noexcept;
    [[nodiscard]] HTMLTableColElement clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new HTMLTableColElement(..)` constructor, creating a new HTMLTableColElement instance
    HTMLTableColElement();
    /// Getter of the `span` attribute.
    /// [`HTMLTableColElement.span`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTableColElement/span)
    [[nodiscard]] unsigned long span() const;
    /// Setter of the `span` attribute.
    /// [`HTMLTableColElement.span`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTableColElement/span)
    void span(unsigned long value);
    /// Getter of the `align` attribute.
    /// [`HTMLTableColElement.align`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTableColElement/align)
    [[nodiscard]] jsbind::String align() const;
    /// Setter of the `align` attribute.
    /// [`HTMLTableColElement.align`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTableColElement/align)
    void align(const jsbind::String& value);
    /// Getter of the `ch` attribute.
    /// [`HTMLTableColElement.ch`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTableColElement/ch)
    [[nodiscard]] jsbind::String ch() const;
    /// Setter of the `ch` attribute.
    /// [`HTMLTableColElement.ch`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTableColElement/ch)
    void ch(const jsbind::String& value);
    /// Getter of the `chOff` attribute.
    /// [`HTMLTableColElement.chOff`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTableColElement/chOff)
    [[nodiscard]] jsbind::String chOff() const;
    /// Setter of the `chOff` attribute.
    /// [`HTMLTableColElement.chOff`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTableColElement/chOff)
    void chOff(const jsbind::String& value);
    /// Getter of the `vAlign` attribute.
    /// [`HTMLTableColElement.vAlign`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTableColElement/vAlign)
    [[nodiscard]] jsbind::String vAlign() const;
    /// Setter of the `vAlign` attribute.
    /// [`HTMLTableColElement.vAlign`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTableColElement/vAlign)
    void vAlign(const jsbind::String& value);
    /// Getter of the `width` attribute.
    /// [`HTMLTableColElement.width`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTableColElement/width)
    [[nodiscard]] jsbind::String width() const;
    /// Setter of the `width` attribute.
    /// [`HTMLTableColElement.width`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTableColElement/width)
    void width(const jsbind::String& value);
};

} // namespace webbind