#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "HTMLElement.hpp"
#include "enums.hpp"

class HTMLCollection;


/// The HTMLDataListElement class.
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
    /// Getter of the `options` attribute.
    /// [`HTMLDataListElement.options`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLDataListElement/options)
    [[nodiscard]] HTMLCollection options() const;
};

