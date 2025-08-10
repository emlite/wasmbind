#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "HTMLElement.hpp"

namespace webbind {

/// Interface HTMLPictureElement
/// [`HTMLPictureElement`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLPictureElement)
class HTMLPictureElement : public HTMLElement {
    explicit HTMLPictureElement(Handle h) noexcept;
public:
    explicit HTMLPictureElement(const emlite::Val &val) noexcept;
    static HTMLPictureElement take_ownership(Handle h) noexcept;
    [[nodiscard]] HTMLPictureElement clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new HTMLPictureElement(..)` constructor, creating a new HTMLPictureElement instance
    HTMLPictureElement();
};

} // namespace webbind