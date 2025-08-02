#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "HTMLElement.hpp"
#include "enums.hpp"

class DOMTokenList;
class CSSStyleSheet;


/// The HTMLStyleElement class.
/// [`HTMLStyleElement`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLStyleElement)
class HTMLStyleElement : public HTMLElement {
    explicit HTMLStyleElement(Handle h) noexcept;

public:
    explicit HTMLStyleElement(const emlite::Val &val) noexcept;
    static HTMLStyleElement take_ownership(Handle h) noexcept;

    [[nodiscard]] HTMLStyleElement clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new HTMLStyleElement(..)` constructor, creating a new HTMLStyleElement instance
    HTMLStyleElement();
    /// Getter of the `disabled` attribute.
    /// [`HTMLStyleElement.disabled`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLStyleElement/disabled)
    [[nodiscard]] bool disabled() const;
    /// Setter of the `disabled` attribute.
    /// [`HTMLStyleElement.disabled`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLStyleElement/disabled)
    void disabled(bool value);
    /// Getter of the `media` attribute.
    /// [`HTMLStyleElement.media`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLStyleElement/media)
    [[nodiscard]] jsbind::String media() const;
    /// Setter of the `media` attribute.
    /// [`HTMLStyleElement.media`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLStyleElement/media)
    void media(const jsbind::String& value);
    /// Getter of the `blocking` attribute.
    /// [`HTMLStyleElement.blocking`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLStyleElement/blocking)
    [[nodiscard]] DOMTokenList blocking() const;
    /// Getter of the `type` attribute.
    /// [`HTMLStyleElement.type`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLStyleElement/type)
    [[nodiscard]] jsbind::String type() const;
    /// Setter of the `type` attribute.
    /// [`HTMLStyleElement.type`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLStyleElement/type)
    void type(const jsbind::String& value);
    /// Getter of the `sheet` attribute.
    /// [`HTMLStyleElement.sheet`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLStyleElement/sheet)
    [[nodiscard]] CSSStyleSheet sheet() const;
};

