#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "HTMLElement.hpp"

namespace webbind {

/// Interface HTMLTitleElement
/// [`HTMLTitleElement`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTitleElement)
class HTMLTitleElement : public HTMLElement {
    explicit HTMLTitleElement(Handle h) noexcept;
public:
    explicit HTMLTitleElement(const emlite::Val &val) noexcept;
    static HTMLTitleElement take_ownership(Handle h) noexcept;
    [[nodiscard]] HTMLTitleElement clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new HTMLTitleElement(..)` constructor, creating a new HTMLTitleElement instance
    HTMLTitleElement();
    /// [`HTMLTitleElement.text`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTitleElement/text)
    /// [`HTMLTitleElement.text`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTitleElement/text)
    [[nodiscard]] jsbind::String text() const;
    /// Setter of the `text` attribute.
    /// [`HTMLTitleElement.text`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTitleElement/text)
    void text(const jsbind::String& value);
};

} // namespace webbind