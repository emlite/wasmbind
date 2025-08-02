#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "HTMLElement.hpp"
#include "enums.hpp"


/// The HTMLParagraphElement class.
/// [`HTMLParagraphElement`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLParagraphElement)
class HTMLParagraphElement : public HTMLElement {
    explicit HTMLParagraphElement(Handle h) noexcept;

public:
    explicit HTMLParagraphElement(const emlite::Val &val) noexcept;
    static HTMLParagraphElement take_ownership(Handle h) noexcept;

    [[nodiscard]] HTMLParagraphElement clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new HTMLParagraphElement(..)` constructor, creating a new HTMLParagraphElement instance
    HTMLParagraphElement();
    /// Getter of the `align` attribute.
    /// [`HTMLParagraphElement.align`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLParagraphElement/align)
    [[nodiscard]] jsbind::String align() const;
    /// Setter of the `align` attribute.
    /// [`HTMLParagraphElement.align`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLParagraphElement/align)
    void align(const jsbind::String& value);
};

