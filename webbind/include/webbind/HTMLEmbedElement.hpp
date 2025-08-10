#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "HTMLElement.hpp"

namespace webbind {

class Document;

/// Interface HTMLEmbedElement
/// [`HTMLEmbedElement`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLEmbedElement)
class HTMLEmbedElement : public HTMLElement {
    explicit HTMLEmbedElement(Handle h) noexcept;
public:
    explicit HTMLEmbedElement(const emlite::Val &val) noexcept;
    static HTMLEmbedElement take_ownership(Handle h) noexcept;
    [[nodiscard]] HTMLEmbedElement clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new HTMLEmbedElement(..)` constructor, creating a new HTMLEmbedElement instance
    HTMLEmbedElement();
    /// [`HTMLEmbedElement.src`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLEmbedElement/src)
    /// [`HTMLEmbedElement.src`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLEmbedElement/src)
    [[nodiscard]] jsbind::String src() const;
    /// Setter of the `src` attribute.
    /// [`HTMLEmbedElement.src`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLEmbedElement/src)
    void src(const jsbind::String& value);
    /// [`HTMLEmbedElement.type`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLEmbedElement/type)
    /// [`HTMLEmbedElement.type`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLEmbedElement/type)
    [[nodiscard]] jsbind::String type() const;
    /// Setter of the `type` attribute.
    /// [`HTMLEmbedElement.type`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLEmbedElement/type)
    void type(const jsbind::String& value);
    /// [`HTMLEmbedElement.width`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLEmbedElement/width)
    /// [`HTMLEmbedElement.width`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLEmbedElement/width)
    [[nodiscard]] jsbind::String width() const;
    /// Setter of the `width` attribute.
    /// [`HTMLEmbedElement.width`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLEmbedElement/width)
    void width(const jsbind::String& value);
    /// [`HTMLEmbedElement.height`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLEmbedElement/height)
    /// [`HTMLEmbedElement.height`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLEmbedElement/height)
    [[nodiscard]] jsbind::String height() const;
    /// Setter of the `height` attribute.
    /// [`HTMLEmbedElement.height`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLEmbedElement/height)
    void height(const jsbind::String& value);
    /// The getSVGDocument method.
    /// [`HTMLEmbedElement.getSVGDocument`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLEmbedElement/getSVGDocument)
    Document getSVGDocument();
    /// [`HTMLEmbedElement.align`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLEmbedElement/align)
    /// [`HTMLEmbedElement.align`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLEmbedElement/align)
    [[nodiscard]] jsbind::String align() const;
    /// Setter of the `align` attribute.
    /// [`HTMLEmbedElement.align`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLEmbedElement/align)
    void align(const jsbind::String& value);
    /// [`HTMLEmbedElement.name`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLEmbedElement/name)
    /// [`HTMLEmbedElement.name`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLEmbedElement/name)
    [[nodiscard]] jsbind::String name() const;
    /// Setter of the `name` attribute.
    /// [`HTMLEmbedElement.name`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLEmbedElement/name)
    void name(const jsbind::String& value);
};

} // namespace webbind