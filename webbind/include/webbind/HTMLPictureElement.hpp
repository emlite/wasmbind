#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "HTMLElement.hpp"
#include "enums.hpp"


/// The HTMLPictureElement class.
/// [`HTMLPictureElement`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLPictureElement)
class HTMLPictureElement : public HTMLElement {
    explicit HTMLPictureElement(Handle h) noexcept;

public:
    explicit HTMLPictureElement(const emlite::Val &val) noexcept;
    static HTMLPictureElement take_ownership(Handle h) noexcept;

    [[nodiscard]] HTMLPictureElement clone() const noexcept;
    /// The `new HTMLPictureElement(..)` constructor, creating a new HTMLPictureElement instance
    HTMLPictureElement();
};

