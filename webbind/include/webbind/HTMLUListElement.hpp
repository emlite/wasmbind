#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "HTMLElement.hpp"
#include "enums.hpp"


/// The HTMLUListElement class.
/// [`HTMLUListElement`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLUListElement)
class HTMLUListElement : public HTMLElement {
    explicit HTMLUListElement(Handle h) noexcept;

public:
    explicit HTMLUListElement(const emlite::Val &val) noexcept;
    static HTMLUListElement take_ownership(Handle h) noexcept;

    [[nodiscard]] HTMLUListElement clone() const noexcept;
    /// The `new HTMLUListElement(..)` constructor, creating a new HTMLUListElement instance
    HTMLUListElement();
    /// Getter of the `compact` attribute.
    /// [`HTMLUListElement.compact`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLUListElement/compact)
    [[nodiscard]] bool compact() const;
    /// Setter of the `compact` attribute.
    /// [`HTMLUListElement.compact`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLUListElement/compact)
    void compact(bool value);
    /// Getter of the `type` attribute.
    /// [`HTMLUListElement.type`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLUListElement/type)
    [[nodiscard]] jsbind::String type() const;
    /// Setter of the `type` attribute.
    /// [`HTMLUListElement.type`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLUListElement/type)
    void type(const jsbind::String& value);
};

