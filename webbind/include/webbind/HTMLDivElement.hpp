#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "HTMLElement.hpp"
#include "enums.hpp"


/// The HTMLDivElement class.
/// [`HTMLDivElement`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLDivElement)
class HTMLDivElement : public HTMLElement {
    explicit HTMLDivElement(Handle h) noexcept;

public:
    explicit HTMLDivElement(const emlite::Val &val) noexcept;
    static HTMLDivElement take_ownership(Handle h) noexcept;

    [[nodiscard]] HTMLDivElement clone() const noexcept;
    /// The `new HTMLDivElement(..)` constructor, creating a new HTMLDivElement instance
    HTMLDivElement();
    /// Getter of the `align` attribute.
    /// [`HTMLDivElement.align`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLDivElement/align)
    [[nodiscard]] jsbind::String align() const;
    /// Setter of the `align` attribute.
    /// [`HTMLDivElement.align`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLDivElement/align)
    void align(const jsbind::String& value);
};

