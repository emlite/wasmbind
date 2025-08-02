#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "HTMLElement.hpp"
#include "enums.hpp"


/// The HTMLHeadElement class.
/// [`HTMLHeadElement`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLHeadElement)
class HTMLHeadElement : public HTMLElement {
    explicit HTMLHeadElement(Handle h) noexcept;

public:
    explicit HTMLHeadElement(const emlite::Val &val) noexcept;
    static HTMLHeadElement take_ownership(Handle h) noexcept;

    [[nodiscard]] HTMLHeadElement clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new HTMLHeadElement(..)` constructor, creating a new HTMLHeadElement instance
    HTMLHeadElement();
};

