#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "HTMLElement.hpp"
#include "enums.hpp"


/// The HTMLTitleElement class.
/// [`HTMLTitleElement`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTitleElement)
class HTMLTitleElement : public HTMLElement {
    explicit HTMLTitleElement(Handle h) noexcept;

public:
    explicit HTMLTitleElement(const emlite::Val &val) noexcept;
    static HTMLTitleElement take_ownership(Handle h) noexcept;

    [[nodiscard]] HTMLTitleElement clone() const noexcept;
    /// The `new HTMLTitleElement(..)` constructor, creating a new HTMLTitleElement instance
    HTMLTitleElement();
    /// Getter of the `text` attribute.
    /// [`HTMLTitleElement.text`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTitleElement/text)
    [[nodiscard]] jsbind::String text() const;
    /// Setter of the `text` attribute.
    /// [`HTMLTitleElement.text`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTitleElement/text)
    void text(const jsbind::String& value);
};

