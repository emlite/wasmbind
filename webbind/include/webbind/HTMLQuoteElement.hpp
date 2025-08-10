#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "HTMLElement.hpp"

namespace webbind {

/// Interface HTMLQuoteElement
/// [`HTMLQuoteElement`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLQuoteElement)
class HTMLQuoteElement : public HTMLElement {
    explicit HTMLQuoteElement(Handle h) noexcept;
public:
    explicit HTMLQuoteElement(const emlite::Val &val) noexcept;
    static HTMLQuoteElement take_ownership(Handle h) noexcept;
    [[nodiscard]] HTMLQuoteElement clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new HTMLQuoteElement(..)` constructor, creating a new HTMLQuoteElement instance
    HTMLQuoteElement();
    /// [`HTMLQuoteElement.cite`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLQuoteElement/cite)
    /// [`HTMLQuoteElement.cite`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLQuoteElement/cite)
    [[nodiscard]] jsbind::String cite() const;
    /// Setter of the `cite` attribute.
    /// [`HTMLQuoteElement.cite`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLQuoteElement/cite)
    void cite(const jsbind::String& value);
};

} // namespace webbind