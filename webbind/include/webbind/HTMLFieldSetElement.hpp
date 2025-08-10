#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "HTMLElement.hpp"

namespace webbind {

class HTMLFormElement;
class HTMLCollection;
class ValidityState;

/// Interface HTMLFieldSetElement
/// [`HTMLFieldSetElement`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLFieldSetElement)
class HTMLFieldSetElement : public HTMLElement {
    explicit HTMLFieldSetElement(Handle h) noexcept;
public:
    explicit HTMLFieldSetElement(const emlite::Val &val) noexcept;
    static HTMLFieldSetElement take_ownership(Handle h) noexcept;
    [[nodiscard]] HTMLFieldSetElement clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new HTMLFieldSetElement(..)` constructor, creating a new HTMLFieldSetElement instance
    HTMLFieldSetElement();
    /// Getter of the `disabled` attribute.
    /// [`HTMLFieldSetElement.disabled`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLFieldSetElement/disabled)
    [[nodiscard]] bool disabled() const;
    /// Setter of the `disabled` attribute.
    /// [`HTMLFieldSetElement.disabled`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLFieldSetElement/disabled)
    void disabled(bool value);
    /// Getter of the `form` attribute.
    /// [`HTMLFieldSetElement.form`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLFieldSetElement/form)
    [[nodiscard]] HTMLFormElement form() const;
    /// Getter of the `name` attribute.
    /// [`HTMLFieldSetElement.name`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLFieldSetElement/name)
    [[nodiscard]] jsbind::String name() const;
    /// Setter of the `name` attribute.
    /// [`HTMLFieldSetElement.name`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLFieldSetElement/name)
    void name(const jsbind::String& value);
    /// Getter of the `type` attribute.
    /// [`HTMLFieldSetElement.type`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLFieldSetElement/type)
    [[nodiscard]] jsbind::String type() const;
    /// Getter of the `elements` attribute.
    /// [`HTMLFieldSetElement.elements`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLFieldSetElement/elements)
    [[nodiscard]] HTMLCollection elements() const;
    /// Getter of the `willValidate` attribute.
    /// [`HTMLFieldSetElement.willValidate`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLFieldSetElement/willValidate)
    [[nodiscard]] bool willValidate() const;
    /// Getter of the `validity` attribute.
    /// [`HTMLFieldSetElement.validity`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLFieldSetElement/validity)
    [[nodiscard]] ValidityState validity() const;
    /// Getter of the `validationMessage` attribute.
    /// [`HTMLFieldSetElement.validationMessage`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLFieldSetElement/validationMessage)
    [[nodiscard]] jsbind::String validationMessage() const;
    /// The checkValidity method.
    /// [`HTMLFieldSetElement.checkValidity`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLFieldSetElement/checkValidity)
    bool checkValidity();
    /// The reportValidity method.
    /// [`HTMLFieldSetElement.reportValidity`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLFieldSetElement/reportValidity)
    bool reportValidity();
    /// The setCustomValidity method.
    /// [`HTMLFieldSetElement.setCustomValidity`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLFieldSetElement/setCustomValidity)
    jsbind::Undefined setCustomValidity(const jsbind::String& error);
};

} // namespace webbind