#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "HTMLElement.hpp"

namespace webbind {

class HTMLCollection;

/// Interface HTMLDataListElement
/// [`HTMLDataListElement`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLDataListElement)
class HTMLDataListElement : public HTMLElement {
    explicit HTMLDataListElement(Handle h) noexcept;
public:
    explicit HTMLDataListElement(const emlite::Val &val) noexcept;
    static HTMLDataListElement take_ownership(Handle h) noexcept;
    [[nodiscard]] HTMLDataListElement clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new HTMLDataListElement(..)` constructor, creating a new HTMLDataListElement instance
    HTMLDataListElement();
    /// [`HTMLDataListElement.options`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLDataListElement/options)
    /// [`HTMLDataListElement.options`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLDataListElement/options)
    [[nodiscard]] HTMLCollection options() const;
};

} // namespace webbind