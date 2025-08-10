#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "HTMLElement.hpp"

namespace webbind {

/// Interface HTMLDirectoryElement
/// [`HTMLDirectoryElement`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLDirectoryElement)
class HTMLDirectoryElement : public HTMLElement {
    explicit HTMLDirectoryElement(Handle h) noexcept;
public:
    explicit HTMLDirectoryElement(const emlite::Val &val) noexcept;
    static HTMLDirectoryElement take_ownership(Handle h) noexcept;
    [[nodiscard]] HTMLDirectoryElement clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new HTMLDirectoryElement(..)` constructor, creating a new HTMLDirectoryElement instance
    HTMLDirectoryElement();
    /// [`HTMLDirectoryElement.compact`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLDirectoryElement/compact)
    /// [`HTMLDirectoryElement.compact`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLDirectoryElement/compact)
    [[nodiscard]] bool compact() const;
    /// Setter of the `compact` attribute.
    /// [`HTMLDirectoryElement.compact`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLDirectoryElement/compact)
    void compact(bool value);
};

} // namespace webbind