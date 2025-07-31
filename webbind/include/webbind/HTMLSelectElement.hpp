#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "HTMLElement.hpp"
#include "enums.hpp"

class HTMLFormElement;
class HTMLOptionsCollection;
class HTMLOptionElement;
class HTMLCollection;
class ValidityState;
class NodeList;


/// The HTMLSelectElement class.
/// [`HTMLSelectElement`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLSelectElement)
class HTMLSelectElement : public HTMLElement {
    explicit HTMLSelectElement(Handle h) noexcept;

public:
    explicit HTMLSelectElement(const emlite::Val &val) noexcept;
    static HTMLSelectElement take_ownership(Handle h) noexcept;

    [[nodiscard]] HTMLSelectElement clone() const noexcept;
    /// The `new HTMLSelectElement(..)` constructor, creating a new HTMLSelectElement instance
    HTMLSelectElement();
    /// Getter of the `autocomplete` attribute.
    /// [`HTMLSelectElement.autocomplete`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLSelectElement/autocomplete)
    [[nodiscard]] jsbind::String autocomplete() const;
    /// Setter of the `autocomplete` attribute.
    /// [`HTMLSelectElement.autocomplete`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLSelectElement/autocomplete)
    void autocomplete(const jsbind::String& value);
    /// Getter of the `disabled` attribute.
    /// [`HTMLSelectElement.disabled`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLSelectElement/disabled)
    [[nodiscard]] bool disabled() const;
    /// Setter of the `disabled` attribute.
    /// [`HTMLSelectElement.disabled`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLSelectElement/disabled)
    void disabled(bool value);
    /// Getter of the `form` attribute.
    /// [`HTMLSelectElement.form`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLSelectElement/form)
    [[nodiscard]] HTMLFormElement form() const;
    /// Getter of the `multiple` attribute.
    /// [`HTMLSelectElement.multiple`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLSelectElement/multiple)
    [[nodiscard]] bool multiple() const;
    /// Setter of the `multiple` attribute.
    /// [`HTMLSelectElement.multiple`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLSelectElement/multiple)
    void multiple(bool value);
    /// Getter of the `name` attribute.
    /// [`HTMLSelectElement.name`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLSelectElement/name)
    [[nodiscard]] jsbind::String name() const;
    /// Setter of the `name` attribute.
    /// [`HTMLSelectElement.name`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLSelectElement/name)
    void name(const jsbind::String& value);
    /// Getter of the `required` attribute.
    /// [`HTMLSelectElement.required`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLSelectElement/required)
    [[nodiscard]] bool required() const;
    /// Setter of the `required` attribute.
    /// [`HTMLSelectElement.required`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLSelectElement/required)
    void required(bool value);
    /// Getter of the `size` attribute.
    /// [`HTMLSelectElement.size`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLSelectElement/size)
    [[nodiscard]] unsigned long size() const;
    /// Setter of the `size` attribute.
    /// [`HTMLSelectElement.size`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLSelectElement/size)
    void size(unsigned long value);
    /// Getter of the `type` attribute.
    /// [`HTMLSelectElement.type`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLSelectElement/type)
    [[nodiscard]] jsbind::String type() const;
    /// Getter of the `options` attribute.
    /// [`HTMLSelectElement.options`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLSelectElement/options)
    [[nodiscard]] HTMLOptionsCollection options() const;
    /// Getter of the `length` attribute.
    /// [`HTMLSelectElement.length`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLSelectElement/length)
    [[nodiscard]] unsigned long length() const;
    /// Setter of the `length` attribute.
    /// [`HTMLSelectElement.length`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLSelectElement/length)
    void length(unsigned long value);
    /// The item method.
    /// [`HTMLSelectElement.item`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLSelectElement/item)
    HTMLOptionElement item(unsigned long index);
    /// The namedItem method.
    /// [`HTMLSelectElement.namedItem`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLSelectElement/namedItem)
    HTMLOptionElement namedItem(const jsbind::String& name);
    /// The add method.
    /// [`HTMLSelectElement.add`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLSelectElement/add)
    jsbind::Undefined add(const jsbind::Any& element);
    /// The add method.
    /// [`HTMLSelectElement.add`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLSelectElement/add)
    jsbind::Undefined add(const jsbind::Any& element, const jsbind::Any& before);
    /// The remove method.
    /// [`HTMLSelectElement.remove`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLSelectElement/remove)
    jsbind::Undefined remove(long index);
    /// Getter of the `selectedOptions` attribute.
    /// [`HTMLSelectElement.selectedOptions`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLSelectElement/selectedOptions)
    [[nodiscard]] HTMLCollection selectedOptions() const;
    /// Getter of the `selectedIndex` attribute.
    /// [`HTMLSelectElement.selectedIndex`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLSelectElement/selectedIndex)
    [[nodiscard]] long selectedIndex() const;
    /// Setter of the `selectedIndex` attribute.
    /// [`HTMLSelectElement.selectedIndex`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLSelectElement/selectedIndex)
    void selectedIndex(long value);
    /// Getter of the `value` attribute.
    /// [`HTMLSelectElement.value`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLSelectElement/value)
    [[nodiscard]] jsbind::String value() const;
    /// Setter of the `value` attribute.
    /// [`HTMLSelectElement.value`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLSelectElement/value)
    void value(const jsbind::String& value);
    /// Getter of the `willValidate` attribute.
    /// [`HTMLSelectElement.willValidate`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLSelectElement/willValidate)
    [[nodiscard]] bool willValidate() const;
    /// Getter of the `validity` attribute.
    /// [`HTMLSelectElement.validity`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLSelectElement/validity)
    [[nodiscard]] ValidityState validity() const;
    /// Getter of the `validationMessage` attribute.
    /// [`HTMLSelectElement.validationMessage`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLSelectElement/validationMessage)
    [[nodiscard]] jsbind::String validationMessage() const;
    /// The checkValidity method.
    /// [`HTMLSelectElement.checkValidity`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLSelectElement/checkValidity)
    bool checkValidity();
    /// The reportValidity method.
    /// [`HTMLSelectElement.reportValidity`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLSelectElement/reportValidity)
    bool reportValidity();
    /// The setCustomValidity method.
    /// [`HTMLSelectElement.setCustomValidity`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLSelectElement/setCustomValidity)
    jsbind::Undefined setCustomValidity(const jsbind::String& error);
    /// The showPicker method.
    /// [`HTMLSelectElement.showPicker`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLSelectElement/showPicker)
    jsbind::Undefined showPicker();
    /// Getter of the `labels` attribute.
    /// [`HTMLSelectElement.labels`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLSelectElement/labels)
    [[nodiscard]] NodeList labels() const;
};

