#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "HTMLElement.hpp"

namespace webbind {

/// Interface HTMLDivElement
/// [`HTMLDivElement`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLDivElement)
class HTMLDivElement : public HTMLElement {
    explicit HTMLDivElement(Handle h) noexcept;
public:
    explicit HTMLDivElement(const emlite::Val &val) noexcept;
    static HTMLDivElement take_ownership(Handle h) noexcept;
    [[nodiscard]] HTMLDivElement clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new HTMLDivElement(..)` constructor, creating a new HTMLDivElement instance
    HTMLDivElement();
    /// [`HTMLDivElement.align`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLDivElement/align)
    /// [`HTMLDivElement.align`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLDivElement/align)
    [[nodiscard]] jsbind::String align() const;
    /// Setter of the `align` attribute.
    /// [`HTMLDivElement.align`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLDivElement/align)
    void align(const jsbind::String& value);
};

} // namespace webbind