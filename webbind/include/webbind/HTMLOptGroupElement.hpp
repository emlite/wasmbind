#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "HTMLElement.hpp"
#include "enums.hpp"


/// The HTMLOptGroupElement class.
/// [`HTMLOptGroupElement`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLOptGroupElement)
class HTMLOptGroupElement : public HTMLElement {
    explicit HTMLOptGroupElement(Handle h) noexcept;

public:
    explicit HTMLOptGroupElement(const emlite::Val &val) noexcept;
    static HTMLOptGroupElement take_ownership(Handle h) noexcept;

    [[nodiscard]] HTMLOptGroupElement clone() const noexcept;
    /// The `new HTMLOptGroupElement(..)` constructor, creating a new HTMLOptGroupElement instance
    HTMLOptGroupElement();
    /// Getter of the `disabled` attribute.
    /// [`HTMLOptGroupElement.disabled`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLOptGroupElement/disabled)
    [[nodiscard]] bool disabled() const;
    /// Setter of the `disabled` attribute.
    /// [`HTMLOptGroupElement.disabled`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLOptGroupElement/disabled)
    void disabled(bool value);
    /// Getter of the `label` attribute.
    /// [`HTMLOptGroupElement.label`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLOptGroupElement/label)
    [[nodiscard]] jsbind::String label() const;
    /// Setter of the `label` attribute.
    /// [`HTMLOptGroupElement.label`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLOptGroupElement/label)
    void label(const jsbind::String& value);
};

