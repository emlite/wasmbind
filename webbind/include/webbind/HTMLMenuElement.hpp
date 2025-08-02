#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "HTMLElement.hpp"
#include "enums.hpp"


/// The HTMLMenuElement class.
/// [`HTMLMenuElement`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLMenuElement)
class HTMLMenuElement : public HTMLElement {
    explicit HTMLMenuElement(Handle h) noexcept;

public:
    explicit HTMLMenuElement(const emlite::Val &val) noexcept;
    static HTMLMenuElement take_ownership(Handle h) noexcept;

    [[nodiscard]] HTMLMenuElement clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new HTMLMenuElement(..)` constructor, creating a new HTMLMenuElement instance
    HTMLMenuElement();
    /// Getter of the `compact` attribute.
    /// [`HTMLMenuElement.compact`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLMenuElement/compact)
    [[nodiscard]] bool compact() const;
    /// Setter of the `compact` attribute.
    /// [`HTMLMenuElement.compact`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLMenuElement/compact)
    void compact(bool value);
};

