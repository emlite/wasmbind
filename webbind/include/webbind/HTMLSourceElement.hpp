#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "HTMLElement.hpp"
#include "enums.hpp"


/// The HTMLSourceElement class.
/// [`HTMLSourceElement`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLSourceElement)
class HTMLSourceElement : public HTMLElement {
    explicit HTMLSourceElement(Handle h) noexcept;

public:
    explicit HTMLSourceElement(const emlite::Val &val) noexcept;
    static HTMLSourceElement take_ownership(Handle h) noexcept;

    [[nodiscard]] HTMLSourceElement clone() const noexcept;
    /// The `new HTMLSourceElement(..)` constructor, creating a new HTMLSourceElement instance
    HTMLSourceElement();
    /// Getter of the `src` attribute.
    /// [`HTMLSourceElement.src`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLSourceElement/src)
    [[nodiscard]] jsbind::String src() const;
    /// Setter of the `src` attribute.
    /// [`HTMLSourceElement.src`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLSourceElement/src)
    void src(const jsbind::String& value);
    /// Getter of the `type` attribute.
    /// [`HTMLSourceElement.type`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLSourceElement/type)
    [[nodiscard]] jsbind::String type() const;
    /// Setter of the `type` attribute.
    /// [`HTMLSourceElement.type`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLSourceElement/type)
    void type(const jsbind::String& value);
    /// Getter of the `srcset` attribute.
    /// [`HTMLSourceElement.srcset`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLSourceElement/srcset)
    [[nodiscard]] jsbind::String srcset() const;
    /// Setter of the `srcset` attribute.
    /// [`HTMLSourceElement.srcset`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLSourceElement/srcset)
    void srcset(const jsbind::String& value);
    /// Getter of the `sizes` attribute.
    /// [`HTMLSourceElement.sizes`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLSourceElement/sizes)
    [[nodiscard]] jsbind::String sizes() const;
    /// Setter of the `sizes` attribute.
    /// [`HTMLSourceElement.sizes`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLSourceElement/sizes)
    void sizes(const jsbind::String& value);
    /// Getter of the `media` attribute.
    /// [`HTMLSourceElement.media`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLSourceElement/media)
    [[nodiscard]] jsbind::String media() const;
    /// Setter of the `media` attribute.
    /// [`HTMLSourceElement.media`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLSourceElement/media)
    void media(const jsbind::String& value);
    /// Getter of the `width` attribute.
    /// [`HTMLSourceElement.width`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLSourceElement/width)
    [[nodiscard]] unsigned long width() const;
    /// Setter of the `width` attribute.
    /// [`HTMLSourceElement.width`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLSourceElement/width)
    void width(unsigned long value);
    /// Getter of the `height` attribute.
    /// [`HTMLSourceElement.height`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLSourceElement/height)
    [[nodiscard]] unsigned long height() const;
    /// Setter of the `height` attribute.
    /// [`HTMLSourceElement.height`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLSourceElement/height)
    void height(unsigned long value);
};

