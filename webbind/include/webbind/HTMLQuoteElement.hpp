#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "HTMLElement.hpp"
#include "enums.hpp"


/// The HTMLQuoteElement class.
/// [`HTMLQuoteElement`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLQuoteElement)
class HTMLQuoteElement : public HTMLElement {
    explicit HTMLQuoteElement(Handle h) noexcept;

public:
    explicit HTMLQuoteElement(const emlite::Val &val) noexcept;
    static HTMLQuoteElement take_ownership(Handle h) noexcept;

    [[nodiscard]] HTMLQuoteElement clone() const noexcept;
    /// The `new HTMLQuoteElement(..)` constructor, creating a new HTMLQuoteElement instance
    HTMLQuoteElement();
    /// Getter of the `cite` attribute.
    /// [`HTMLQuoteElement.cite`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLQuoteElement/cite)
    [[nodiscard]] jsbind::String cite() const;
    /// Setter of the `cite` attribute.
    /// [`HTMLQuoteElement.cite`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLQuoteElement/cite)
    void cite(const jsbind::String& value);
};

