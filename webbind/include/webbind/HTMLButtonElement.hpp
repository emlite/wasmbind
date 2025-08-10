#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "HTMLElement.hpp"

namespace webbind {

class Element;
class HTMLFormElement;
class ValidityState;
class NodeList;

/// Interface HTMLButtonElement
/// [`HTMLButtonElement`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLButtonElement)
class HTMLButtonElement : public HTMLElement {
    explicit HTMLButtonElement(Handle h) noexcept;
public:
    explicit HTMLButtonElement(const emlite::Val &val) noexcept;
    static HTMLButtonElement take_ownership(Handle h) noexcept;
    [[nodiscard]] HTMLButtonElement clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new HTMLButtonElement(..)` constructor, creating a new HTMLButtonElement instance
    HTMLButtonElement();
    /// [`HTMLButtonElement.command`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLButtonElement/command)
    /// [`HTMLButtonElement.command`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLButtonElement/command)
    [[nodiscard]] jsbind::String command() const;
    /// Setter of the `command` attribute.
    /// [`HTMLButtonElement.command`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLButtonElement/command)
    void command(const jsbind::String& value);
    /// [`HTMLButtonElement.commandForElement`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLButtonElement/commandForElement)
    /// [`HTMLButtonElement.commandForElement`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLButtonElement/commandForElement)
    [[nodiscard]] Element commandForElement() const;
    /// Setter of the `commandForElement` attribute.
    /// [`HTMLButtonElement.commandForElement`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLButtonElement/commandForElement)
    void commandForElement(const Element& value);
    /// [`HTMLButtonElement.disabled`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLButtonElement/disabled)
    /// [`HTMLButtonElement.disabled`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLButtonElement/disabled)
    [[nodiscard]] bool disabled() const;
    /// Setter of the `disabled` attribute.
    /// [`HTMLButtonElement.disabled`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLButtonElement/disabled)
    void disabled(bool value);
    /// [`HTMLButtonElement.form`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLButtonElement/form)
    /// [`HTMLButtonElement.form`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLButtonElement/form)
    [[nodiscard]] HTMLFormElement form() const;
    /// [`HTMLButtonElement.formAction`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLButtonElement/formAction)
    /// [`HTMLButtonElement.formAction`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLButtonElement/formAction)
    [[nodiscard]] jsbind::String formAction() const;
    /// Setter of the `formAction` attribute.
    /// [`HTMLButtonElement.formAction`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLButtonElement/formAction)
    void formAction(const jsbind::String& value);
    /// [`HTMLButtonElement.formEnctype`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLButtonElement/formEnctype)
    /// [`HTMLButtonElement.formEnctype`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLButtonElement/formEnctype)
    [[nodiscard]] jsbind::String formEnctype() const;
    /// Setter of the `formEnctype` attribute.
    /// [`HTMLButtonElement.formEnctype`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLButtonElement/formEnctype)
    void formEnctype(const jsbind::String& value);
    /// [`HTMLButtonElement.formMethod`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLButtonElement/formMethod)
    /// [`HTMLButtonElement.formMethod`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLButtonElement/formMethod)
    [[nodiscard]] jsbind::String formMethod() const;
    /// Setter of the `formMethod` attribute.
    /// [`HTMLButtonElement.formMethod`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLButtonElement/formMethod)
    void formMethod(const jsbind::String& value);
    /// [`HTMLButtonElement.formNoValidate`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLButtonElement/formNoValidate)
    /// [`HTMLButtonElement.formNoValidate`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLButtonElement/formNoValidate)
    [[nodiscard]] bool formNoValidate() const;
    /// Setter of the `formNoValidate` attribute.
    /// [`HTMLButtonElement.formNoValidate`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLButtonElement/formNoValidate)
    void formNoValidate(bool value);
    /// [`HTMLButtonElement.formTarget`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLButtonElement/formTarget)
    /// [`HTMLButtonElement.formTarget`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLButtonElement/formTarget)
    [[nodiscard]] jsbind::String formTarget() const;
    /// Setter of the `formTarget` attribute.
    /// [`HTMLButtonElement.formTarget`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLButtonElement/formTarget)
    void formTarget(const jsbind::String& value);
    /// [`HTMLButtonElement.name`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLButtonElement/name)
    /// [`HTMLButtonElement.name`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLButtonElement/name)
    [[nodiscard]] jsbind::String name() const;
    /// Setter of the `name` attribute.
    /// [`HTMLButtonElement.name`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLButtonElement/name)
    void name(const jsbind::String& value);
    /// [`HTMLButtonElement.type`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLButtonElement/type)
    /// [`HTMLButtonElement.type`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLButtonElement/type)
    [[nodiscard]] jsbind::String type() const;
    /// Setter of the `type` attribute.
    /// [`HTMLButtonElement.type`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLButtonElement/type)
    void type(const jsbind::String& value);
    /// [`HTMLButtonElement.value`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLButtonElement/value)
    /// [`HTMLButtonElement.value`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLButtonElement/value)
    [[nodiscard]] jsbind::String value() const;
    /// Setter of the `value` attribute.
    /// [`HTMLButtonElement.value`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLButtonElement/value)
    void value(const jsbind::String& value);
    /// [`HTMLButtonElement.willValidate`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLButtonElement/willValidate)
    /// [`HTMLButtonElement.willValidate`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLButtonElement/willValidate)
    [[nodiscard]] bool willValidate() const;
    /// [`HTMLButtonElement.validity`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLButtonElement/validity)
    /// [`HTMLButtonElement.validity`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLButtonElement/validity)
    [[nodiscard]] ValidityState validity() const;
    /// [`HTMLButtonElement.validationMessage`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLButtonElement/validationMessage)
    /// [`HTMLButtonElement.validationMessage`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLButtonElement/validationMessage)
    [[nodiscard]] jsbind::String validationMessage() const;
    /// The checkValidity method.
    /// [`HTMLButtonElement.checkValidity`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLButtonElement/checkValidity)
    bool checkValidity();
    /// The reportValidity method.
    /// [`HTMLButtonElement.reportValidity`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLButtonElement/reportValidity)
    bool reportValidity();
    /// The setCustomValidity method.
    /// [`HTMLButtonElement.setCustomValidity`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLButtonElement/setCustomValidity)
    jsbind::Undefined setCustomValidity(const jsbind::String& error);
    /// [`HTMLButtonElement.labels`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLButtonElement/labels)
    /// [`HTMLButtonElement.labels`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLButtonElement/labels)
    [[nodiscard]] NodeList labels() const;
    /// [`HTMLButtonElement.popoverTargetElement`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLButtonElement/popoverTargetElement)
    /// [`HTMLButtonElement.popoverTargetElement`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLButtonElement/popoverTargetElement)
    [[nodiscard]] Element popoverTargetElement() const;
    /// Setter of the `popoverTargetElement` attribute.
    /// [`HTMLButtonElement.popoverTargetElement`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLButtonElement/popoverTargetElement)
    void popoverTargetElement(const Element& value);
    /// [`HTMLButtonElement.popoverTargetAction`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLButtonElement/popoverTargetAction)
    /// [`HTMLButtonElement.popoverTargetAction`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLButtonElement/popoverTargetAction)
    [[nodiscard]] jsbind::String popoverTargetAction() const;
    /// Setter of the `popoverTargetAction` attribute.
    /// [`HTMLButtonElement.popoverTargetAction`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLButtonElement/popoverTargetAction)
    void popoverTargetAction(const jsbind::String& value);
};

} // namespace webbind