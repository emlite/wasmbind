#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "HTMLElement.hpp"
#include "enums.hpp"


/// The HTMLHeadingElement class.
/// [`HTMLHeadingElement`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLHeadingElement)
class HTMLHeadingElement : public HTMLElement {
    explicit HTMLHeadingElement(Handle h) noexcept;

public:
    explicit HTMLHeadingElement(const emlite::Val &val) noexcept;
    static HTMLHeadingElement take_ownership(Handle h) noexcept;

    [[nodiscard]] HTMLHeadingElement clone() const noexcept;
    /// The `new HTMLHeadingElement(..)` constructor, creating a new HTMLHeadingElement instance
    HTMLHeadingElement();
    /// Getter of the `align` attribute.
    /// [`HTMLHeadingElement.align`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLHeadingElement/align)
    [[nodiscard]] jsbind::String align() const;
    /// Setter of the `align` attribute.
    /// [`HTMLHeadingElement.align`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLHeadingElement/align)
    void align(const jsbind::String& value);
};

