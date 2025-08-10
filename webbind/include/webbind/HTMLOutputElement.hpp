#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "HTMLElement.hpp"

namespace webbind {

class DOMTokenList;
class HTMLFormElement;
class ValidityState;
class NodeList;

/// Interface HTMLOutputElement
/// [`HTMLOutputElement`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLOutputElement)
class HTMLOutputElement : public HTMLElement {
    explicit HTMLOutputElement(Handle h) noexcept;
public:
    explicit HTMLOutputElement(const emlite::Val &val) noexcept;
    static HTMLOutputElement take_ownership(Handle h) noexcept;
    [[nodiscard]] HTMLOutputElement clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new HTMLOutputElement(..)` constructor, creating a new HTMLOutputElement instance
    HTMLOutputElement();
    /// [`HTMLOutputElement.htmlFor`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLOutputElement/htmlFor)
    /// [`HTMLOutputElement.htmlFor`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLOutputElement/htmlFor)
    [[nodiscard]] DOMTokenList htmlFor() const;
    /// [`HTMLOutputElement.form`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLOutputElement/form)
    /// [`HTMLOutputElement.form`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLOutputElement/form)
    [[nodiscard]] HTMLFormElement form() const;
    /// [`HTMLOutputElement.name`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLOutputElement/name)
    /// [`HTMLOutputElement.name`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLOutputElement/name)
    [[nodiscard]] jsbind::String name() const;
    /// Setter of the `name` attribute.
    /// [`HTMLOutputElement.name`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLOutputElement/name)
    void name(const jsbind::String& value);
    /// [`HTMLOutputElement.type`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLOutputElement/type)
    /// [`HTMLOutputElement.type`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLOutputElement/type)
    [[nodiscard]] jsbind::String type() const;
    /// [`HTMLOutputElement.defaultValue`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLOutputElement/defaultValue)
    /// [`HTMLOutputElement.defaultValue`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLOutputElement/defaultValue)
    [[nodiscard]] jsbind::String defaultValue() const;
    /// Setter of the `defaultValue` attribute.
    /// [`HTMLOutputElement.defaultValue`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLOutputElement/defaultValue)
    void defaultValue(const jsbind::String& value);
    /// [`HTMLOutputElement.value`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLOutputElement/value)
    /// [`HTMLOutputElement.value`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLOutputElement/value)
    [[nodiscard]] jsbind::String value() const;
    /// Setter of the `value` attribute.
    /// [`HTMLOutputElement.value`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLOutputElement/value)
    void value(const jsbind::String& value);
    /// [`HTMLOutputElement.willValidate`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLOutputElement/willValidate)
    /// [`HTMLOutputElement.willValidate`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLOutputElement/willValidate)
    [[nodiscard]] bool willValidate() const;
    /// [`HTMLOutputElement.validity`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLOutputElement/validity)
    /// [`HTMLOutputElement.validity`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLOutputElement/validity)
    [[nodiscard]] ValidityState validity() const;
    /// [`HTMLOutputElement.validationMessage`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLOutputElement/validationMessage)
    /// [`HTMLOutputElement.validationMessage`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLOutputElement/validationMessage)
    [[nodiscard]] jsbind::String validationMessage() const;
    /// The checkValidity method.
    /// [`HTMLOutputElement.checkValidity`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLOutputElement/checkValidity)
    bool checkValidity();
    /// The reportValidity method.
    /// [`HTMLOutputElement.reportValidity`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLOutputElement/reportValidity)
    bool reportValidity();
    /// The setCustomValidity method.
    /// [`HTMLOutputElement.setCustomValidity`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLOutputElement/setCustomValidity)
    jsbind::Undefined setCustomValidity(const jsbind::String& error);
    /// [`HTMLOutputElement.labels`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLOutputElement/labels)
    /// [`HTMLOutputElement.labels`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLOutputElement/labels)
    [[nodiscard]] NodeList labels() const;
};

} // namespace webbind