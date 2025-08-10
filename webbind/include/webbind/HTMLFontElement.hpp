#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "HTMLElement.hpp"

namespace webbind {

/// Interface HTMLFontElement
/// [`HTMLFontElement`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLFontElement)
class HTMLFontElement : public HTMLElement {
    explicit HTMLFontElement(Handle h) noexcept;
public:
    explicit HTMLFontElement(const emlite::Val &val) noexcept;
    static HTMLFontElement take_ownership(Handle h) noexcept;
    [[nodiscard]] HTMLFontElement clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new HTMLFontElement(..)` constructor, creating a new HTMLFontElement instance
    HTMLFontElement();
    /// Getter of the `color` attribute.
    /// [`HTMLFontElement.color`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLFontElement/color)
    [[nodiscard]] jsbind::String color() const;
    /// Setter of the `color` attribute.
    /// [`HTMLFontElement.color`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLFontElement/color)
    void color(const jsbind::String& value);
    /// Getter of the `face` attribute.
    /// [`HTMLFontElement.face`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLFontElement/face)
    [[nodiscard]] jsbind::String face() const;
    /// Setter of the `face` attribute.
    /// [`HTMLFontElement.face`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLFontElement/face)
    void face(const jsbind::String& value);
    /// Getter of the `size` attribute.
    /// [`HTMLFontElement.size`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLFontElement/size)
    [[nodiscard]] jsbind::String size() const;
    /// Setter of the `size` attribute.
    /// [`HTMLFontElement.size`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLFontElement/size)
    void size(const jsbind::String& value);
};

} // namespace webbind