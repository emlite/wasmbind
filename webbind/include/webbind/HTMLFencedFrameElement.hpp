#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "HTMLElement.hpp"

namespace webbind {

class FencedFrameConfig;
class DOMTokenList;

/// Interface HTMLFencedFrameElement
/// [`HTMLFencedFrameElement`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLFencedFrameElement)
class HTMLFencedFrameElement : public HTMLElement {
    explicit HTMLFencedFrameElement(Handle h) noexcept;
public:
    explicit HTMLFencedFrameElement(const emlite::Val &val) noexcept;
    static HTMLFencedFrameElement take_ownership(Handle h) noexcept;
    [[nodiscard]] HTMLFencedFrameElement clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new HTMLFencedFrameElement(..)` constructor, creating a new HTMLFencedFrameElement instance
    HTMLFencedFrameElement();
    /// [`HTMLFencedFrameElement.config`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLFencedFrameElement/config)
    /// [`HTMLFencedFrameElement.config`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLFencedFrameElement/config)
    [[nodiscard]] FencedFrameConfig config() const;
    /// Setter of the `config` attribute.
    /// [`HTMLFencedFrameElement.config`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLFencedFrameElement/config)
    void config(const FencedFrameConfig& value);
    /// [`HTMLFencedFrameElement.width`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLFencedFrameElement/width)
    /// [`HTMLFencedFrameElement.width`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLFencedFrameElement/width)
    [[nodiscard]] jsbind::String width() const;
    /// Setter of the `width` attribute.
    /// [`HTMLFencedFrameElement.width`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLFencedFrameElement/width)
    void width(const jsbind::String& value);
    /// [`HTMLFencedFrameElement.height`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLFencedFrameElement/height)
    /// [`HTMLFencedFrameElement.height`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLFencedFrameElement/height)
    [[nodiscard]] jsbind::String height() const;
    /// Setter of the `height` attribute.
    /// [`HTMLFencedFrameElement.height`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLFencedFrameElement/height)
    void height(const jsbind::String& value);
    /// [`HTMLFencedFrameElement.sandbox`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLFencedFrameElement/sandbox)
    /// [`HTMLFencedFrameElement.sandbox`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLFencedFrameElement/sandbox)
    [[nodiscard]] DOMTokenList sandbox() const;
    /// [`HTMLFencedFrameElement.allow`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLFencedFrameElement/allow)
    /// [`HTMLFencedFrameElement.allow`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLFencedFrameElement/allow)
    [[nodiscard]] jsbind::String allow() const;
    /// Setter of the `allow` attribute.
    /// [`HTMLFencedFrameElement.allow`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLFencedFrameElement/allow)
    void allow(const jsbind::String& value);
};

} // namespace webbind