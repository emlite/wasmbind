#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "HTMLElement.hpp"

namespace webbind {

/// Interface HTMLUnknownElement
/// [`HTMLUnknownElement`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLUnknownElement)
class HTMLUnknownElement : public HTMLElement {
    explicit HTMLUnknownElement(Handle h) noexcept;
public:
    explicit HTMLUnknownElement(const emlite::Val &val) noexcept;
    static HTMLUnknownElement take_ownership(Handle h) noexcept;
    [[nodiscard]] HTMLUnknownElement clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
};

} // namespace webbind