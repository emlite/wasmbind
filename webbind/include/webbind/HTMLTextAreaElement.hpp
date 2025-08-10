#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "HTMLElement.hpp"
#include "enums.hpp"

namespace webbind {

class HTMLFormElement;
class ValidityState;
class NodeList;

/// Interface HTMLTextAreaElement
/// [`HTMLTextAreaElement`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTextAreaElement)
class HTMLTextAreaElement : public HTMLElement {
    explicit HTMLTextAreaElement(Handle h) noexcept;
public:
    explicit HTMLTextAreaElement(const emlite::Val &val) noexcept;
    static HTMLTextAreaElement take_ownership(Handle h) noexcept;
    [[nodiscard]] HTMLTextAreaElement clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new HTMLTextAreaElement(..)` constructor, creating a new HTMLTextAreaElement instance
    HTMLTextAreaElement();
    /// [`HTMLTextAreaElement.autocomplete`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTextAreaElement/autocomplete)
    /// [`HTMLTextAreaElement.autocomplete`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTextAreaElement/autocomplete)
    [[nodiscard]] jsbind::String autocomplete() const;
    /// Setter of the `autocomplete` attribute.
    /// [`HTMLTextAreaElement.autocomplete`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTextAreaElement/autocomplete)
    void autocomplete(const jsbind::String& value);
    /// [`HTMLTextAreaElement.cols`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTextAreaElement/cols)
    /// [`HTMLTextAreaElement.cols`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTextAreaElement/cols)
    [[nodiscard]] unsigned long cols() const;
    /// Setter of the `cols` attribute.
    /// [`HTMLTextAreaElement.cols`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTextAreaElement/cols)
    void cols(unsigned long value);
    /// [`HTMLTextAreaElement.dirName`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTextAreaElement/dirName)
    /// [`HTMLTextAreaElement.dirName`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTextAreaElement/dirName)
    [[nodiscard]] jsbind::String dirName() const;
    /// Setter of the `dirName` attribute.
    /// [`HTMLTextAreaElement.dirName`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTextAreaElement/dirName)
    void dirName(const jsbind::String& value);
    /// [`HTMLTextAreaElement.disabled`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTextAreaElement/disabled)
    /// [`HTMLTextAreaElement.disabled`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTextAreaElement/disabled)
    [[nodiscard]] bool disabled() const;
    /// Setter of the `disabled` attribute.
    /// [`HTMLTextAreaElement.disabled`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTextAreaElement/disabled)
    void disabled(bool value);
    /// [`HTMLTextAreaElement.form`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTextAreaElement/form)
    /// [`HTMLTextAreaElement.form`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTextAreaElement/form)
    [[nodiscard]] HTMLFormElement form() const;
    /// [`HTMLTextAreaElement.maxLength`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTextAreaElement/maxLength)
    /// [`HTMLTextAreaElement.maxLength`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTextAreaElement/maxLength)
    [[nodiscard]] long maxLength() const;
    /// Setter of the `maxLength` attribute.
    /// [`HTMLTextAreaElement.maxLength`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTextAreaElement/maxLength)
    void maxLength(long value);
    /// [`HTMLTextAreaElement.minLength`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTextAreaElement/minLength)
    /// [`HTMLTextAreaElement.minLength`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTextAreaElement/minLength)
    [[nodiscard]] long minLength() const;
    /// Setter of the `minLength` attribute.
    /// [`HTMLTextAreaElement.minLength`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTextAreaElement/minLength)
    void minLength(long value);
    /// [`HTMLTextAreaElement.name`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTextAreaElement/name)
    /// [`HTMLTextAreaElement.name`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTextAreaElement/name)
    [[nodiscard]] jsbind::String name() const;
    /// Setter of the `name` attribute.
    /// [`HTMLTextAreaElement.name`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTextAreaElement/name)
    void name(const jsbind::String& value);
    /// [`HTMLTextAreaElement.placeholder`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTextAreaElement/placeholder)
    /// [`HTMLTextAreaElement.placeholder`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTextAreaElement/placeholder)
    [[nodiscard]] jsbind::String placeholder() const;
    /// Setter of the `placeholder` attribute.
    /// [`HTMLTextAreaElement.placeholder`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTextAreaElement/placeholder)
    void placeholder(const jsbind::String& value);
    /// [`HTMLTextAreaElement.readOnly`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTextAreaElement/readOnly)
    /// [`HTMLTextAreaElement.readOnly`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTextAreaElement/readOnly)
    [[nodiscard]] bool readOnly() const;
    /// Setter of the `readOnly` attribute.
    /// [`HTMLTextAreaElement.readOnly`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTextAreaElement/readOnly)
    void readOnly(bool value);
    /// [`HTMLTextAreaElement.required`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTextAreaElement/required)
    /// [`HTMLTextAreaElement.required`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTextAreaElement/required)
    [[nodiscard]] bool required() const;
    /// Setter of the `required` attribute.
    /// [`HTMLTextAreaElement.required`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTextAreaElement/required)
    void required(bool value);
    /// [`HTMLTextAreaElement.rows`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTextAreaElement/rows)
    /// [`HTMLTextAreaElement.rows`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTextAreaElement/rows)
    [[nodiscard]] unsigned long rows() const;
    /// Setter of the `rows` attribute.
    /// [`HTMLTextAreaElement.rows`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTextAreaElement/rows)
    void rows(unsigned long value);
    /// [`HTMLTextAreaElement.wrap`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTextAreaElement/wrap)
    /// [`HTMLTextAreaElement.wrap`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTextAreaElement/wrap)
    [[nodiscard]] jsbind::String wrap() const;
    /// Setter of the `wrap` attribute.
    /// [`HTMLTextAreaElement.wrap`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTextAreaElement/wrap)
    void wrap(const jsbind::String& value);
    /// [`HTMLTextAreaElement.type`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTextAreaElement/type)
    /// [`HTMLTextAreaElement.type`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTextAreaElement/type)
    [[nodiscard]] jsbind::String type() const;
    /// [`HTMLTextAreaElement.defaultValue`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTextAreaElement/defaultValue)
    /// [`HTMLTextAreaElement.defaultValue`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTextAreaElement/defaultValue)
    [[nodiscard]] jsbind::String defaultValue() const;
    /// Setter of the `defaultValue` attribute.
    /// [`HTMLTextAreaElement.defaultValue`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTextAreaElement/defaultValue)
    void defaultValue(const jsbind::String& value);
    /// [`HTMLTextAreaElement.value`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTextAreaElement/value)
    /// [`HTMLTextAreaElement.value`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTextAreaElement/value)
    [[nodiscard]] jsbind::String value() const;
    /// Setter of the `value` attribute.
    /// [`HTMLTextAreaElement.value`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTextAreaElement/value)
    void value(const jsbind::String& value);
    /// [`HTMLTextAreaElement.textLength`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTextAreaElement/textLength)
    /// [`HTMLTextAreaElement.textLength`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTextAreaElement/textLength)
    [[nodiscard]] unsigned long textLength() const;
    /// [`HTMLTextAreaElement.willValidate`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTextAreaElement/willValidate)
    /// [`HTMLTextAreaElement.willValidate`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTextAreaElement/willValidate)
    [[nodiscard]] bool willValidate() const;
    /// [`HTMLTextAreaElement.validity`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTextAreaElement/validity)
    /// [`HTMLTextAreaElement.validity`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTextAreaElement/validity)
    [[nodiscard]] ValidityState validity() const;
    /// [`HTMLTextAreaElement.validationMessage`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTextAreaElement/validationMessage)
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
    /// [`HTMLTextAreaElement.labels`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTextAreaElement/labels)
    /// [`HTMLTextAreaElement.labels`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTextAreaElement/labels)
    [[nodiscard]] NodeList labels() const;
    /// The select method.
    /// [`HTMLTextAreaElement.select`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTextAreaElement/select)
    jsbind::Undefined select();
    /// [`HTMLTextAreaElement.selectionStart`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTextAreaElement/selectionStart)
    /// [`HTMLTextAreaElement.selectionStart`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTextAreaElement/selectionStart)
    [[nodiscard]] unsigned long selectionStart() const;
    /// Setter of the `selectionStart` attribute.
    /// [`HTMLTextAreaElement.selectionStart`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTextAreaElement/selectionStart)
    void selectionStart(unsigned long value);
    /// [`HTMLTextAreaElement.selectionEnd`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTextAreaElement/selectionEnd)
    /// [`HTMLTextAreaElement.selectionEnd`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTextAreaElement/selectionEnd)
    [[nodiscard]] unsigned long selectionEnd() const;
    /// Setter of the `selectionEnd` attribute.
    /// [`HTMLTextAreaElement.selectionEnd`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTextAreaElement/selectionEnd)
    void selectionEnd(unsigned long value);
    /// [`HTMLTextAreaElement.selectionDirection`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLTextAreaElement/selectionDirection)
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

} // namespace webbind