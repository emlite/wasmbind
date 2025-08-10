#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "HTMLElement.hpp"

namespace webbind {

/// Interface HTMLHRElement
/// [`HTMLHRElement`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLHRElement)
class HTMLHRElement : public HTMLElement {
    explicit HTMLHRElement(Handle h) noexcept;
public:
    explicit HTMLHRElement(const emlite::Val &val) noexcept;
    static HTMLHRElement take_ownership(Handle h) noexcept;
    [[nodiscard]] HTMLHRElement clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new HTMLHRElement(..)` constructor, creating a new HTMLHRElement instance
    HTMLHRElement();
    /// [`HTMLHRElement.align`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLHRElement/align)
    /// [`HTMLHRElement.align`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLHRElement/align)
    [[nodiscard]] jsbind::String align() const;
    /// Setter of the `align` attribute.
    /// [`HTMLHRElement.align`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLHRElement/align)
    void align(const jsbind::String& value);
    /// [`HTMLHRElement.color`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLHRElement/color)
    /// [`HTMLHRElement.color`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLHRElement/color)
    [[nodiscard]] jsbind::String color() const;
    /// Setter of the `color` attribute.
    /// [`HTMLHRElement.color`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLHRElement/color)
    void color(const jsbind::String& value);
    /// [`HTMLHRElement.noShade`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLHRElement/noShade)
    /// [`HTMLHRElement.noShade`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLHRElement/noShade)
    [[nodiscard]] bool noShade() const;
    /// Setter of the `noShade` attribute.
    /// [`HTMLHRElement.noShade`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLHRElement/noShade)
    void noShade(bool value);
    /// [`HTMLHRElement.size`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLHRElement/size)
    /// [`HTMLHRElement.size`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLHRElement/size)
    [[nodiscard]] jsbind::String size() const;
    /// Setter of the `size` attribute.
    /// [`HTMLHRElement.size`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLHRElement/size)
    void size(const jsbind::String& value);
    /// [`HTMLHRElement.width`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLHRElement/width)
    /// [`HTMLHRElement.width`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLHRElement/width)
    [[nodiscard]] jsbind::String width() const;
    /// Setter of the `width` attribute.
    /// [`HTMLHRElement.width`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLHRElement/width)
    void width(const jsbind::String& value);
};

} // namespace webbind