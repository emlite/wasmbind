#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "HTMLElement.hpp"

namespace webbind {

/// Interface HTMLDetailsElement
/// [`HTMLDetailsElement`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLDetailsElement)
class HTMLDetailsElement : public HTMLElement {
    explicit HTMLDetailsElement(Handle h) noexcept;
public:
    explicit HTMLDetailsElement(const emlite::Val &val) noexcept;
    static HTMLDetailsElement take_ownership(Handle h) noexcept;
    [[nodiscard]] HTMLDetailsElement clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new HTMLDetailsElement(..)` constructor, creating a new HTMLDetailsElement instance
    HTMLDetailsElement();
    /// Getter of the `name` attribute.
    /// [`HTMLDetailsElement.name`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLDetailsElement/name)
    [[nodiscard]] jsbind::String name() const;
    /// Setter of the `name` attribute.
    /// [`HTMLDetailsElement.name`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLDetailsElement/name)
    void name(const jsbind::String& value);
    /// Getter of the `open` attribute.
    /// [`HTMLDetailsElement.open`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLDetailsElement/open)
    [[nodiscard]] bool open() const;
    /// Setter of the `open` attribute.
    /// [`HTMLDetailsElement.open`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLDetailsElement/open)
    void open(bool value);
};

} // namespace webbind