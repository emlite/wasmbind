#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "HTMLElement.hpp"

namespace webbind {

/// Interface HTMLModelElement
/// [`HTMLModelElement`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLModelElement)
class HTMLModelElement : public HTMLElement {
    explicit HTMLModelElement(Handle h) noexcept;
public:
    explicit HTMLModelElement(const emlite::Val &val) noexcept;
    static HTMLModelElement take_ownership(Handle h) noexcept;
    [[nodiscard]] HTMLModelElement clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
};

} // namespace webbind