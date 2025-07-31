#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "HTMLElement.hpp"
#include "enums.hpp"


/// The HTMLDataElement class.
/// [`HTMLDataElement`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLDataElement)
class HTMLDataElement : public HTMLElement {
    explicit HTMLDataElement(Handle h) noexcept;

public:
    explicit HTMLDataElement(const emlite::Val &val) noexcept;
    static HTMLDataElement take_ownership(Handle h) noexcept;

    [[nodiscard]] HTMLDataElement clone() const noexcept;
    /// The `new HTMLDataElement(..)` constructor, creating a new HTMLDataElement instance
    HTMLDataElement();
    /// Getter of the `value` attribute.
    /// [`HTMLDataElement.value`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLDataElement/value)
    [[nodiscard]] jsbind::String value() const;
    /// Setter of the `value` attribute.
    /// [`HTMLDataElement.value`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLDataElement/value)
    void value(const jsbind::String& value);
};

