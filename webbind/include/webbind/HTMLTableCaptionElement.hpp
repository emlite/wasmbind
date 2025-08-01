#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "HTMLElement.hpp"
#include "enums.hpp"


/// The HTMLTableCaptionElement class.
/// [`HTMLTableCaptionElement`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTableCaptionElement)
class HTMLTableCaptionElement : public HTMLElement {
    explicit HTMLTableCaptionElement(Handle h) noexcept;

public:
    explicit HTMLTableCaptionElement(const emlite::Val &val) noexcept;
    static HTMLTableCaptionElement take_ownership(Handle h) noexcept;

    [[nodiscard]] HTMLTableCaptionElement clone() const noexcept;
    /// The `new HTMLTableCaptionElement(..)` constructor, creating a new HTMLTableCaptionElement instance
    HTMLTableCaptionElement();
    /// Getter of the `align` attribute.
    /// [`HTMLTableCaptionElement.align`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTableCaptionElement/align)
    [[nodiscard]] jsbind::String align() const;
    /// Setter of the `align` attribute.
    /// [`HTMLTableCaptionElement.align`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTableCaptionElement/align)
    void align(const jsbind::String& value);
};

