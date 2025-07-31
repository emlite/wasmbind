#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "HTMLElement.hpp"
#include "enums.hpp"


/// The HTMLPreElement class.
/// [`HTMLPreElement`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLPreElement)
class HTMLPreElement : public HTMLElement {
    explicit HTMLPreElement(Handle h) noexcept;

public:
    explicit HTMLPreElement(const emlite::Val &val) noexcept;
    static HTMLPreElement take_ownership(Handle h) noexcept;

    [[nodiscard]] HTMLPreElement clone() const noexcept;
    /// The `new HTMLPreElement(..)` constructor, creating a new HTMLPreElement instance
    HTMLPreElement();
    /// Getter of the `width` attribute.
    /// [`HTMLPreElement.width`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLPreElement/width)
    [[nodiscard]] long width() const;
    /// Setter of the `width` attribute.
    /// [`HTMLPreElement.width`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLPreElement/width)
    void width(long value);
};

