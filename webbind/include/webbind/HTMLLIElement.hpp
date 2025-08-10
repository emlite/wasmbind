#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "HTMLElement.hpp"

namespace webbind {

/// Interface HTMLLIElement
/// [`HTMLLIElement`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLLIElement)
class HTMLLIElement : public HTMLElement {
    explicit HTMLLIElement(Handle h) noexcept;
public:
    explicit HTMLLIElement(const emlite::Val &val) noexcept;
    static HTMLLIElement take_ownership(Handle h) noexcept;
    [[nodiscard]] HTMLLIElement clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new HTMLLIElement(..)` constructor, creating a new HTMLLIElement instance
    HTMLLIElement();
    /// Getter of the `value` attribute.
    /// [`HTMLLIElement.value`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLLIElement/value)
    [[nodiscard]] long value() const;
    /// Setter of the `value` attribute.
    /// [`HTMLLIElement.value`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLLIElement/value)
    void value(long value);
    /// Getter of the `type` attribute.
    /// [`HTMLLIElement.type`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLLIElement/type)
    [[nodiscard]] jsbind::String type() const;
    /// Setter of the `type` attribute.
    /// [`HTMLLIElement.type`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLLIElement/type)
    void type(const jsbind::String& value);
};

} // namespace webbind