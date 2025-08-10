#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "HTMLElement.hpp"

namespace webbind {

class HTMLCollection;

/// Interface HTMLMapElement
/// [`HTMLMapElement`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLMapElement)
class HTMLMapElement : public HTMLElement {
    explicit HTMLMapElement(Handle h) noexcept;
public:
    explicit HTMLMapElement(const emlite::Val &val) noexcept;
    static HTMLMapElement take_ownership(Handle h) noexcept;
    [[nodiscard]] HTMLMapElement clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new HTMLMapElement(..)` constructor, creating a new HTMLMapElement instance
    HTMLMapElement();
    /// [`HTMLMapElement.name`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLMapElement/name)
    /// [`HTMLMapElement.name`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLMapElement/name)
    [[nodiscard]] jsbind::String name() const;
    /// Setter of the `name` attribute.
    /// [`HTMLMapElement.name`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLMapElement/name)
    void name(const jsbind::String& value);
    /// [`HTMLMapElement.areas`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLMapElement/areas)
    /// [`HTMLMapElement.areas`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLMapElement/areas)
    [[nodiscard]] HTMLCollection areas() const;
};

} // namespace webbind