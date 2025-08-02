#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "HTMLElement.hpp"
#include "enums.hpp"


/// The HTMLTimeElement class.
/// [`HTMLTimeElement`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTimeElement)
class HTMLTimeElement : public HTMLElement {
    explicit HTMLTimeElement(Handle h) noexcept;

public:
    explicit HTMLTimeElement(const emlite::Val &val) noexcept;
    static HTMLTimeElement take_ownership(Handle h) noexcept;

    [[nodiscard]] HTMLTimeElement clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new HTMLTimeElement(..)` constructor, creating a new HTMLTimeElement instance
    HTMLTimeElement();
    /// Getter of the `dateTime` attribute.
    /// [`HTMLTimeElement.dateTime`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTimeElement/dateTime)
    [[nodiscard]] jsbind::String dateTime() const;
    /// Setter of the `dateTime` attribute.
    /// [`HTMLTimeElement.dateTime`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTimeElement/dateTime)
    void dateTime(const jsbind::String& value);
};

