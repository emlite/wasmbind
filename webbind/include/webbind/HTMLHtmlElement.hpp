#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "HTMLElement.hpp"

namespace webbind {

/// Interface HTMLHtmlElement
/// [`HTMLHtmlElement`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLHtmlElement)
class HTMLHtmlElement : public HTMLElement {
    explicit HTMLHtmlElement(Handle h) noexcept;
public:
    explicit HTMLHtmlElement(const emlite::Val &val) noexcept;
    static HTMLHtmlElement take_ownership(Handle h) noexcept;
    [[nodiscard]] HTMLHtmlElement clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new HTMLHtmlElement(..)` constructor, creating a new HTMLHtmlElement instance
    HTMLHtmlElement();
    /// Getter of the `version` attribute.
    /// [`HTMLHtmlElement.version`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLHtmlElement/version)
    [[nodiscard]] jsbind::String version() const;
    /// Setter of the `version` attribute.
    /// [`HTMLHtmlElement.version`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLHtmlElement/version)
    void version(const jsbind::String& value);
};

} // namespace webbind