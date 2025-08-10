#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "HTMLElement.hpp"

namespace webbind {

/// Interface HTMLOptGroupElement
/// [`HTMLOptGroupElement`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLOptGroupElement)
class HTMLOptGroupElement : public HTMLElement {
    explicit HTMLOptGroupElement(Handle h) noexcept;
public:
    explicit HTMLOptGroupElement(const emlite::Val &val) noexcept;
    static HTMLOptGroupElement take_ownership(Handle h) noexcept;
    [[nodiscard]] HTMLOptGroupElement clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new HTMLOptGroupElement(..)` constructor, creating a new HTMLOptGroupElement instance
    HTMLOptGroupElement();
    /// [`HTMLOptGroupElement.disabled`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLOptGroupElement/disabled)
    /// [`HTMLOptGroupElement.disabled`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLOptGroupElement/disabled)
    [[nodiscard]] bool disabled() const;
    /// Setter of the `disabled` attribute.
    /// [`HTMLOptGroupElement.disabled`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLOptGroupElement/disabled)
    void disabled(bool value);
    /// [`HTMLOptGroupElement.label`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLOptGroupElement/label)
    /// [`HTMLOptGroupElement.label`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLOptGroupElement/label)
    [[nodiscard]] jsbind::String label() const;
    /// Setter of the `label` attribute.
    /// [`HTMLOptGroupElement.label`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLOptGroupElement/label)
    void label(const jsbind::String& value);
};

} // namespace webbind