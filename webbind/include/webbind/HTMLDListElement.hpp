#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "HTMLElement.hpp"
#include "enums.hpp"


/// The HTMLDListElement class.
/// [`HTMLDListElement`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLDListElement)
class HTMLDListElement : public HTMLElement {
    explicit HTMLDListElement(Handle h) noexcept;

public:
    explicit HTMLDListElement(const emlite::Val &val) noexcept;
    static HTMLDListElement take_ownership(Handle h) noexcept;

    [[nodiscard]] HTMLDListElement clone() const noexcept;
    /// The `new HTMLDListElement(..)` constructor, creating a new HTMLDListElement instance
    HTMLDListElement();
    /// Getter of the `compact` attribute.
    /// [`HTMLDListElement.compact`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLDListElement/compact)
    [[nodiscard]] bool compact() const;
    /// Setter of the `compact` attribute.
    /// [`HTMLDListElement.compact`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLDListElement/compact)
    void compact(bool value);
};

