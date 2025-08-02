#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "HTMLElement.hpp"
#include "enums.hpp"


/// The HTMLSpanElement class.
/// [`HTMLSpanElement`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLSpanElement)
class HTMLSpanElement : public HTMLElement {
    explicit HTMLSpanElement(Handle h) noexcept;

public:
    explicit HTMLSpanElement(const emlite::Val &val) noexcept;
    static HTMLSpanElement take_ownership(Handle h) noexcept;

    [[nodiscard]] HTMLSpanElement clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new HTMLSpanElement(..)` constructor, creating a new HTMLSpanElement instance
    HTMLSpanElement();
};

