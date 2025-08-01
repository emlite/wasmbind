#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "HTMLElement.hpp"
#include "enums.hpp"

class HTMLFormElement;
class ValidityState;
class NodeList;


/// The HTMLTextAreaElement class.
/// [`HTMLTextAreaElement`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTextAreaElement)
class HTMLTextAreaElement : public HTMLElement {
    explicit HTMLTextAreaElement(Handle h) noexcept;

public:
    explicit HTMLTextAreaElement(const emlite::Val &val) noexcept;
    static HTMLTextAreaElement take_ownership(Handle h) noexcept;

    [[nodiscard]] HTMLTextAreaElement clone() const noexcept;
    /// The `new HTMLTextAreaElement(..)` constructor, creating a new HTMLTextAreaElement instance
    HTMLTextAreaElement();
    /// Getter of the `autocomplete` attribute.
    /// [`HTMLTextAreaElement.autocomplete`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTextAreaElement/autocomplete)
    [[nodiscard]] jsbind::String autocomplete() const;
    /// Setter of the `autocomplete` attribute.
    /// [`HTMLTextAreaElement.autocomplete`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTextAreaElement/autocomplete)
    void autocomplete(const jsbind::String& value);
    /// Getter of the `cols` attribute.
    /// [`HTMLTextAreaElement.cols`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTextAreaElement/cols)
    [[nodiscard]] unsigned long cols() const;
    /// Setter of the `cols` attribute.
    /// [`HTMLTextAreaElement.cols`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTextAreaElement/cols)
    void cols(unsigned long value);
    /// Getter of the `dirName` attribute.
    /// [`HTMLTextAreaElement.dirName`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTextAreaElement/dirName)
    [[nodiscard]] jsbind::String dirName() const;
    /// Setter of the `dirName` attribute.
    /// [`HTMLTextAreaElement.dirName`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTextAreaElement/dirName)
    void dirName(const jsbind::String& value);
    /// Getter of the `disabled` attribute.
    /// [`HTMLTextAreaElement.disabled`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTextAreaElement/disabled)
    [[nodiscard]] bool disabled() const;
    /// Setter of the `disabled` attribute.
    /// [`HTMLTextAreaElement.disabled`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTextAreaElement/disabled)
    void disabled(bool value);
    /// Getter of the `form` attribute.
    /// [`HTMLTextAreaElement.form`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTextAreaElement/form)
    [[nodiscard]] HTMLFormElement form() const;
    /// Getter of the `maxLength` attribute.
    /// [`HTMLTextAreaElement.maxLength`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTextAreaElement/maxLength)
    [[nodiscard]] long maxLength() const;
    /// Setter of the `maxLength` attribute.
    /// [`HTMLTextAreaElement.maxLength`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTextAreaElement/maxLength)
    void maxLength(long value);
    /// Getter of the `minLength` attribute.
    /// [`HTMLTextAreaElement.minLength`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTextAreaElement/minLength)
    [[nodiscard]] long minLength() const;
    /// Setter of the `minLength` attribute.
    /// [`HTMLTextAreaElement.minLength`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTextAreaElement/minLength)
    void minLength(long value);
    /// Getter of the `name` attribute.
    /// [`HTMLTextAreaElement.name`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTextAreaElement/name)
    [[nodiscard]] jsbind::String name() const;
    /// Setter of the `name` attribute.
    /// [`HTMLTextAreaElement.name`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTextAreaElement/name)
    void name(const jsbind::String& value);
    /// Getter of the `placeholder` attribute.
    /// [`HTMLTextAreaElement.placeholder`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTextAreaElement/placeholder)
    [[nodiscard]] jsbind::String placeholder() const;
    /// Setter of the `placeholder` attribute.
    /// [`HTMLTextAreaElement.placeholder`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTextAreaElement/placeholder)
    void placeholder(const jsbind::String& value);
    /// Getter of the `readOnly` attribute.
    /// [`HTMLTextAreaElement.readOnly`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTextAreaElement/readOnly)
    [[nodiscard]] bool readOnly() const;
    /// Setter of the `readOnly` attribute.
    /// [`HTMLTextAreaElement.readOnly`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTextAreaElement/readOnly)
    void readOnly(bool value);
    /// Getter of the `required` attribute.
    /// [`HTMLTextAreaElement.required`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTextAreaElement/required)
    [[nodiscard]] bool required() const;
    /// Setter of the `required` attribute.
    /// [`HTMLTextAreaElement.required`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTextAreaElement/required)
    void required(bool value);
    /// Getter of the `rows` attribute.
    /// [`HTMLTextAreaElement.rows`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTextAreaElement/rows)
    [[nodiscard]] unsigned long rows() const;
    /// Setter of the `rows` attribute.
    /// [`HTMLTextAreaElement.rows`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTextAreaElement/rows)
    void rows(unsigned long value);
    /// Getter of the `wrap` attribute.
    /// [`HTMLTextAreaElement.wrap`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTextAreaElement/wrap)
    [[nodiscard]] jsbind::String wrap() const;
    /// Setter of the `wrap` attribute.
    /// [`HTMLTextAreaElement.wrap`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTextAreaElement/wrap)
    void wrap(const jsbind::String& value);
    /// Getter of the `type` attribute.
    /// [`HTMLTextAreaElement.type`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTextAreaElement/type)
    [[nodiscard]] jsbind::String type() const;
    /// Getter of the `defaultValue` attribute.
    /// [`HTMLTextAreaElement.defaultValue`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTextAreaElement/defaultValue)
    [[nodiscard]] jsbind::String defaultValue() const;
    /// Setter of the `defaultValue` attribute.
    /// [`HTMLTextAreaElement.defaultValue`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTextAreaElement/defaultValue)
    void defaultValue(const jsbind::String& value);
    /// Getter of the `value` attribute.
    /// [`HTMLTextAreaElement.value`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTextAreaElement/value)
    [[nodiscard]] jsbind::String value() const;
    /// Setter of the `value` attribute.
    /// [`HTMLTextAreaElement.value`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTextAreaElement/value)
    void value(const jsbind::String& value);
    /// Getter of the `textLength` attribute.
    /// [`HTMLTextAreaElement.textLength`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTextAreaElement/textLength)
    [[nodiscard]] unsigned long textLength() const;
    /// Getter of the `willValidate` attribute.
    /// [`HTMLTextAreaElement.willValidate`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTextAreaElement/willValidate)
    [[nodiscard]] bool willValidate() const;
    /// Getter of the `validity` attribute.
    /// [`HTMLTextAreaElement.validity`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTextAreaElement/validity)
    [[nodiscard]] ValidityState validity() const;
    /// Getter of the `validationMessage` attribute.
    /// [`HTMLTextAreaElement.validationMessage`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTextAreaElement/validationMessage)
    [[nodiscard]] jsbind::String validationMessage() const;
    /// The checkValidity method.
    /// [`HTMLTextAreaElement.checkValidity`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTextAreaElement/checkValidity)
    bool checkValidity();
    /// The reportValidity method.
    /// [`HTMLTextAreaElement.reportValidity`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTextAreaElement/reportValidity)
    bool reportValidity();
    /// The setCustomValidity method.
    /// [`HTMLTextAreaElement.setCustomValidity`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTextAreaElement/setCustomValidity)
    jsbind::Undefined setCustomValidity(const jsbind::String& error);
    /// Getter of the `labels` attribute.
    /// [`HTMLTextAreaElement.labels`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTextAreaElement/labels)
    [[nodiscard]] NodeList labels() const;
    /// The select method.
    /// [`HTMLTextAreaElement.select`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTextAreaElement/select)
    jsbind::Undefined select();
    /// Getter of the `selectionStart` attribute.
    /// [`HTMLTextAreaElement.selectionStart`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTextAreaElement/selectionStart)
    [[nodiscard]] unsigned long selectionStart() const;
    /// Setter of the `selectionStart` attribute.
    /// [`HTMLTextAreaElement.selectionStart`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTextAreaElement/selectionStart)
    void selectionStart(unsigned long value);
    /// Getter of the `selectionEnd` attribute.
    /// [`HTMLTextAreaElement.selectionEnd`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTextAreaElement/selectionEnd)
    [[nodiscard]] unsigned long selectionEnd() const;
    /// Setter of the `selectionEnd` attribute.
    /// [`HTMLTextAreaElement.selectionEnd`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTextAreaElement/selectionEnd)
    void selectionEnd(unsigned long value);
    /// Getter of the `selectionDirection` attribute.
    /// [`HTMLTextAreaElement.selectionDirection`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTextAreaElement/selectionDirection)
    [[nodiscard]] jsbind::String selectionDirection() const;
    /// Setter of the `selectionDirection` attribute.
    /// [`HTMLTextAreaElement.selectionDirection`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTextAreaElement/selectionDirection)
    void selectionDirection(const jsbind::String& value);
    /// The setRangeText method.
    /// [`HTMLTextAreaElement.setRangeText`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTextAreaElement/setRangeText)
    jsbind::Undefined setRangeText(const jsbind::String& replacement, unsigned long start, unsigned long end);
    /// The setRangeText method.
    /// [`HTMLTextAreaElement.setRangeText`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTextAreaElement/setRangeText)
    jsbind::Undefined setRangeText(const jsbind::String& replacement, unsigned long start, unsigned long end, const SelectionMode& selectionMode);
    /// The setSelectionRange method.
    /// [`HTMLTextAreaElement.setSelectionRange`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTextAreaElement/setSelectionRange)
    jsbind::Undefined setSelectionRange(unsigned long start, unsigned long end);
    /// The setSelectionRange method.
    /// [`HTMLTextAreaElement.setSelectionRange`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTextAreaElement/setSelectionRange)
    jsbind::Undefined setSelectionRange(unsigned long start, unsigned long end, const jsbind::String& direction);
};

