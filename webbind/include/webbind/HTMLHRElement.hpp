#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "HTMLElement.hpp"
#include "enums.hpp"


/// The HTMLHRElement class.
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
    /// Getter of the `align` attribute.
    /// [`HTMLHRElement.align`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLHRElement/align)
    [[nodiscard]] jsbind::String align() const;
    /// Setter of the `align` attribute.
    /// [`HTMLHRElement.align`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLHRElement/align)
    void align(const jsbind::String& value);
    /// Getter of the `color` attribute.
    /// [`HTMLHRElement.color`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLHRElement/color)
    [[nodiscard]] jsbind::String color() const;
    /// Setter of the `color` attribute.
    /// [`HTMLHRElement.color`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLHRElement/color)
    void color(const jsbind::String& value);
    /// Getter of the `noShade` attribute.
    /// [`HTMLHRElement.noShade`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLHRElement/noShade)
    [[nodiscard]] bool noShade() const;
    /// Setter of the `noShade` attribute.
    /// [`HTMLHRElement.noShade`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLHRElement/noShade)
    void noShade(bool value);
    /// Getter of the `size` attribute.
    /// [`HTMLHRElement.size`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLHRElement/size)
    [[nodiscard]] jsbind::String size() const;
    /// Setter of the `size` attribute.
    /// [`HTMLHRElement.size`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLHRElement/size)
    void size(const jsbind::String& value);
    /// Getter of the `width` attribute.
    /// [`HTMLHRElement.width`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLHRElement/width)
    [[nodiscard]] jsbind::String width() const;
    /// Setter of the `width` attribute.
    /// [`HTMLHRElement.width`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLHRElement/width)
    void width(const jsbind::String& value);
};

