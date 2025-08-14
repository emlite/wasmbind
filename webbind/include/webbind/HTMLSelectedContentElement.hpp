#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "HTMLElement.hpp"

namespace webbind {

/// Interface HTMLSelectedContentElement
/// [`HTMLSelectedContentElement`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLSelectedContentElement)
class HTMLSelectedContentElement : public HTMLElement {
    explicit HTMLSelectedContentElement(Handle h) noexcept;
public:
    explicit HTMLSelectedContentElement(const emlite::Val &val) noexcept;
    static HTMLSelectedContentElement take_ownership(Handle h) noexcept;
    [[nodiscard]] HTMLSelectedContentElement clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new HTMLSelectedContentElement(..)` constructor, creating a new HTMLSelectedContentElement instance
    HTMLSelectedContentElement();
};

} // namespace webbind